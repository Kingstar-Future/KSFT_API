//
//  KSViewController.h
//  KSTradeAPITest4iOS
//
//  Created by Gao, Song (2) on 6/5/14.
//  Copyright (c) 2014 Gao, Song (2). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KSViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextView *textView;
- (IBAction)startTest:(id)sender;
-(IBAction)stopTest:(id)sender;
- (IBAction)closeKeybord:(id)sender;
- (IBAction)clearOutput;
@property (strong, nonatomic) IBOutlet UIButton *startButton;
@property (strong,nonatomic) IBOutlet UIButton* stopButton;
@property (strong, nonatomic) IBOutlet UISegmentedControl *optionControl;
@end
