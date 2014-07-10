//
//  KSViewController.m
//  KSTradeAPITest4iOS
//
//  Created by Gao, Song (2) on 6/5/14.
//  Copyright (c) 2014 Gao, Song (2). All rights reserved.
//

#import "KSViewController.h"
#include "testKSTradeAPI.h"
#include "testKSMarketDataAPI.h"
#include "event.h"

@interface KSViewController ()

@property(nonatomic) CThostFtdcTraderApi* pUserApi;
@property(nonatomic) CSimpleHandler* pSpi;
@property CThostFtdcMdApi *pUserMarketAPI;
@property CMarketSampleHandler *pMarketSpi;
@end

@implementation KSViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    _textView.layer.borderColor = UIColor.grayColor.CGColor;
    _textView.layer.borderWidth = 1;
    _textView.layer.cornerRadius = 6;
    _textView.layer.masksToBounds = YES;
    
    // set button state
    _startButton.enabled=YES;
    _stopButton.enabled=NO;
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)startTest:(id)sender {
    
    //clear output
    [self clearOutput];
    
    __weak KSViewController *weakSelf=self;
    
    // set button state
    _startButton.enabled=NO;
    _optionControl.enabled=NO;
    
    int clickedSegment = (int)_optionControl.selectedSegmentIndex;
    
    if (0==clickedSegment)
    {
        [self addTextToTextView:@"**Starting Trade API Test**\n"];
        dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0);
        
        dispatch_async(queue, ^{
            try {
                // create a CThostFtdcTraderApi instance
                _pUserApi = CThostFtdcTraderApi::CreateFtdcTraderApi();
                
                // create an event handler instance
                _pSpi= new CSimpleHandler(_pUserApi);
                
                // Create a manual reset event with no signal
                _pSpi->m_hEvent = event_create(true, false);
                _pSpi->viewController=weakSelf;
                // set spi's broker, user, passwd
                strcpy (_pSpi->m_chBrokerID, "31000853");
                printf("userid is %s\n", _pSpi->m_chBrokerID);
                
                snprintf(_pSpi->m_chUserID, sizeof(_pSpi->m_chUserID), "2013%02d", 0);
                // strcpy(_pSpi->m_chUserID, "80008");
                
                strcpy (_pSpi->m_chPassword, "123");
                strcpy (_pSpi->m_chContract, "IF1312");
                
                // register an event handler instance
                _pUserApi->RegisterSpi(_pSpi);
                
                // subscribe private topic
                //_pUserApi->SubscribePrivateTopic(THOST_TERT_RESTART);
                //_pUserApi->SubscribePrivateTopic(THOST_TERT_RESUME);
                _pUserApi->SubscribePrivateTopic(THOST_TERT_QUICK);
                
                // subscribe public topic
                //_pUserApi->SubscribePublicTopic(THOST_TERT_RESTART);
                //_pUserApi->SubscribePublicTopic(THOST_TERT_RESUME);
                _pUserApi->SubscribePublicTopic(THOST_TERT_QUICK);
                
                
                // make the connection between client and CTP server
                //_pUserApi->RegisterFront("tcp://210.5.154.195:13153");
                //_pUserApi->RegisterFront("tcp://210.5.154.195:13163");
                //_pUserApi->RegisterFront("tcp://10.253.117.107:13173");
                //_pUserApi->RegisterFront("tcp://10.253.117.107:13153");
                _pUserApi->RegisterFront("tcp://10.253.117.107:13163");
                //_pUserApi->RegisterFront("tcp://10.253.117.107:13173");
                //_pUserApi->RegisterFront("tcp://10.253.117.107:13153");
                //_pUserApi->RegisterFront("tcp://10.253.117.107:13163");
                //_pUserApi->RegisterFront("tcp://10.253.117.107:13173");
                //_pUserApi->RegisterFront("tcp://10.253.117.108:13173");
                //_pUserApi->RegisterFront("tcp://10.253.117.109:13153");
                //_pUserApi->RegisterFront("tcp://10.253.117.107:13173");
                _pUserApi->Init();
                
                // enable stop button.
                [weakSelf performSelectorOnMainThread:@selector(setStopButtonState:) withObject:[NSNumber numberWithBool:YES] waitUntilDone:YES];
            } catch (...) {
                // error message
                [[[_textView textStorage] mutableString] appendString:@"\nError occurs during starting test. Please check log file for more information.\nTrying to stop test."];
                
                // try to stop test
                [weakSelf stopTest:nil];
                
                // resume button state
                // enable start button
                [weakSelf performSelectorOnMainThread:@selector(setStartButtonState:) withObject:[NSNumber numberWithBool:YES] waitUntilDone:YES];
                // disable stop button
                [weakSelf performSelectorOnMainThread:@selector(setStopButtonState:) withObject:[NSNumber numberWithBool:NO] waitUntilDone:YES];
                
            }
        });
 
    }
    else
    {
        [self addTextToTextView:@"**Starting MarketData API Test**\n"];
        try
        {
            _pUserMarketAPI=CThostFtdcMdApi::CreateFtdcMdApi("");
            
            // create an event handler instance
            _pMarketSpi=new CMarketSampleHandler(_pUserMarketAPI);
            
            // Create a manual reset event with no signal
            _pMarketSpi->m_hEvent = event_create(true, false);
            
            _pMarketSpi->viewController=self;
            
            // set spi's broker, user, passwd
            strcpy (_pMarketSpi->m_chBrokerID, "6A89B428");	// 期货周边测试系统(v6)
            
            
            snprintf(_pMarketSpi->m_chUserID, sizeof(_pMarketSpi->m_chUserID), "2013%02d", 0);
            
            strcpy (_pMarketSpi->m_chPassword, "123");
            strcpy (_pMarketSpi->m_chContract, "m1409");
            
            // register an event handler instance
            _pUserMarketAPI->RegisterSpi(_pMarketSpi);
            
            // register the kingstar front address and port
            //_pUserMarketAPI->RegisterFront("tcp://10.253.117.107:13173");
            //_pUserMarketAPI->RegisterFront("tcp://10.253.117.107:13153");
            _pUserMarketAPI->RegisterFront("tcp://210.5.154.195:13163");
            _pUserMarketAPI->RegisterFront("tcp://10.253.117.107:13163");
            //_pUserMarketAPI->RegisterFront("tcp://10.253.117.107:13173");
            //_pUserMarketAPI->RegisterFront("tcp://10.253.117.107:13153");
            //_pUserMarketAPI->RegisterFront("tcp://10.253.117.107:13163");
            //_pUserMarketAPI->RegisterFront("tcp://10.253.117.107:13173");
            //_pUserMarketAPI->RegisterFront("tcp://10.253.117.108:13173");
            //_pUserMarketAPI->RegisterFront("tcp://10.253.117.109:13153");
            //_pUserMarketAPI->RegisterFront("tcp://10.253.117.107:13173");
            
            // make the connection between client and CTP server
            _pUserMarketAPI->Init();
            _stopButton.enabled=YES;
        }
        catch(...)
        {
            // error message.
            [[[_textView textStorage] mutableString] appendString:@"\nError occurs during starting test. Please check log file for more information.\nTrying to stop test.\n"];
            // trying to stop test.
            [self stopTest:nil];
            
            // resume button state.
            _startButton.enabled=YES;
            _stopButton.enabled=NO;
        }
    }
}

-(IBAction)stopTest:(id)sender {
    
    // weak reference to self
    __weak KSViewController* weakSelf= self;
    // disable stop button
    _stopButton.enabled=NO;
    
    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0);
    
    int selectedSegment=(int)_optionControl.selectedSegmentIndex;
    
        dispatch_async(queue, ^{
            try {
            if (0==selectedSegment) {
                // logout
                CThostFtdcUserLogoutField UserLogout;
                memset(&UserLogout, 0, sizeof(UserLogout));
                // broker id
                strcpy(UserLogout.BrokerID, _pSpi->m_chBrokerID);
                // investor ID
                strcpy(UserLogout.UserID, _pSpi->m_chUserID);
                printf("Req User Logout.\n");
                
                [self performSelectorOnMainThread:@selector(addTextToTextView:) withObject:@"Req User Logout.\n" waitUntilDone:YES];
                _pUserApi->ReqUserLogout(&UserLogout, _pSpi->m_nRequestID++ );
                
                // waiting for quit event
                //WaitForSingleObject(_pSpi->m_hEvent, 3000/*INFINITE*/);
                event_timedwait((event_handle)_pSpi->m_hEvent, 3000/*INFINITE*/);
                printf("Release Instance\n");
                [self performSelectorOnMainThread:@selector(addTextToTextView:) withObject:@"Release Instance\n" waitUntilDone:YES];
                // release the API instance
                _pUserApi->Release();
                printf("Delete SPI.\n");
                [self performSelectorOnMainThread:@selector(addTextToTextView:) withObject:@"Delete SPI.\n" waitUntilDone:YES];
                // delete pSpi
                delete _pSpi;
                
                // assign pointers with NULL
                _pSpi=NULL;
                _pUserApi=NULL;
                
                [weakSelf performSelectorOnMainThread:@selector(addTextToTextView:) withObject:@"\n**Trade API test stopped**\n\n" waitUntilDone:YES];
            }
             else
             {
                 // logout
                 CThostFtdcUserLogoutField UserLogout;
                 memset(&UserLogout, 0, sizeof(UserLogout));
                 // broker id
                 strcpy(UserLogout.BrokerID, _pMarketSpi->m_chBrokerID);
                 // investor ID
                 strcpy(UserLogout.UserID, _pMarketSpi->m_chUserID);
                 _pUserMarketAPI->ReqUserLogout(&UserLogout, _pMarketSpi->m_nRequestID++ );
                 
                 // waiting for quit event
                 //WaitForSingleObject(_pMarketSpi[i]->m_hEvent, 3000/*INFINITE*/);
                 event_timedwait((event_handle)_pMarketSpi->m_hEvent, 3000/*INFINITE*/);
                 
                 // release the API instance
                 _pUserMarketAPI->Release();
                 
                 delete _pMarketSpi;
                 
                 // assign pointers with NULL
                 _pMarketSpi=NULL;
                 _pUserMarketAPI=NULL;
                 
                 [weakSelf performSelectorOnMainThread:@selector(addTextToTextView:) withObject:@"\n**MarketData API test stopped**\n\n" waitUntilDone:YES];
             }
                // enable start button
                [weakSelf performSelectorOnMainThread:@selector(setStartButtonState:) withObject:[NSNumber numberWithBool:YES] waitUntilDone:YES];
                
            } catch (...) {
                NSString *apiName=nil;
                if (0==selectedSegment) {
                    apiName=@"Trade API";
                }
                else
                {
                    apiName=@"MarketData API";
                }
                // error message
                [weakSelf performSelectorOnMainThread:@selector(addTextToTextView:) withObject:[NSString stringWithFormat:@"\nError occurs during stopping %@ test. Please check log file for more information.\n",apiName] waitUntilDone:YES];
                // disable start button
                [weakSelf performSelectorOnMainThread:@selector(setStartButtonState:) withObject:[NSNumber numberWithBool:NO] waitUntilDone:YES];
                // enable stop button
                [weakSelf performSelectorOnMainThread:@selector(setStopButtonState:) withObject:[NSNumber numberWithBool:YES] waitUntilDone:YES];
            }
            // enable segment button
            [weakSelf performSelectorOnMainThread:@selector(setSegmentedControlState:) withObject:[NSNumber numberWithBool:YES] waitUntilDone:YES];
        });
}

// add text to text view
-(void)addTextToTextView:(NSString *)text
{
    [[[_textView textStorage] mutableString] appendString:text];
}
// set button state
-(void)setStartButtonState:(NSNumber*)enabled
{
    self.startButton.enabled=[enabled boolValue];
}

// set segmented controll  state
-(void)setSegmentedControlState:(NSNumber*)enabled
{
    self.optionControl.enabled=[enabled boolValue];
}

// set stop button state
-(void)setStopButtonState:(NSNumber*)enabled
{
    _stopButton.enabled=[enabled boolValue];
}

// close keybord when touching background
- (IBAction)closeKeybord:(id)sender {
    [self.textView resignFirstResponder];
}
// clear text view
- (IBAction)clearOutput {
    [[[_textView textStorage] mutableString] setString:@""];
}

@end
