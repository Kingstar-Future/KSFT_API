/**
 *@file   Readme_kstrade_en.txt  English Documentation for source code file of testing Trade API 
 *@auhor  : xdhu
 *@system £ºAPI Test Demo
 *@company: sungard
 *@history£º
    20121203  created
    20140529  modified for Mac
 */

Part One£ºFiles Description£º
testKSTradeAPI directory includes the following files
source file   :testKSTradeAPI.cpp   event.cpp
head file     :testKSTradeAPI.h     event.h
makefile of Linux enviroment:   makefile
project file of windows enviroment :testKStradeAPI.sln£¬testKSTradeAPI.vcproj
help doc:     Readme_kstrade.txt, Readme_kstrade_en.txt(English)

Part Two£ºFiles Function£º
testKSTradeAPI.h/testKSTradeAPI.cpp  			        implement the main functions of testing libkstradeapi.so dynamic library
event.h/event.cpp                    				encapsulate the Event routine of windows/linux-compatibled
makefile 			    				implement the compile progress of the test demo for linux platform
testKStradeAPI.sln£¬testKSTradeAPI.vcproj                       implement the compile progress of the test demo for windows platform


Part Three£ºCompile and Running Description for linux platform 

1, Compile Description
   Makefile provide compile progress for both 32 bit and 64 bit testing demo 

   1£©  Compile Checking
	First make sure your machine has installed gcc 4.1.2 and above version.
	You can execute "gcc -v " command in the  linux shell to check the version of Gcc.
	Lower version of Gcc maybe cause the compiling error.

   2£©  How to Compile
	You can execute "make" command in the linux shell.
	make   			generate 64 bit test demo (default)
	make  vtype=32r 	generate 32 bit test demo
        make  vtype=64r 	generate 32 bit test demo

   3£©  Executable Files
	Run "make" or "make vtype=64r" will generate "testKSTradeAPI_64" Executable file in run directory which used to test 64-bit libkstradeapi.so
        Run "make vtype=32r" will generate "testKSTradeAPI_32" Executable file in run directory which used to test 32-bit libkstradeapi.so      
	
   4£©  Announcements
	In current enviroment£¬when compiling 32 bit and 64 bit program, you need execute "make clean" after exectuing "make" commnad , which used to 
	delete middle object files at last comile period.This operating can avoid cross-bit compile error.

2£¬Run Description
   
   1£©Run Checking
      First make sure the existence of libkstradeapi.so and libkslkc64r.so( 32bit program need libkslkc32r.so)£¨Release files include both 32 and 64 bit libkstradeapi.so,which uses the same file name, divided by the different directory "KSTradeAPI/linux32" and "KSTradeAPI/linux64" .libkslkc32r.so is in KSTradeAPI/linux32 directory, while libkslkc64r.so is in KSTradeAPI/linux64 directory.£©
      Then check if you has compiled the executable file for testing demo successfully.( Compile stage will generate executable programs in run directory)

   2) Set executable attribute for dynamic library
      
      Make sure the dynamic library libkstradeapi.so has executable attribute.You can use "ls -l libkstradeapi.so"  to see the file-attribute.
      Make sure the dynamic library libkslkc64r.so(or libkslkc32r.so) has executable attribute.
      If the dynamic library libkstradeapi.so doesn't has executable attribute, you can use "chmod +x libkstradeapi.so" in the linux shell to 	change executable attributes. See more "man 1 chmod"

   3£©Set loading path of dynamic library
      Suppose the absolute path of libkstradeapi.so is "/xxx/yyy/zzz/libkstradeapi.so". You can use the following method to set loading path of dynamic library ,see also  "man 3 dlopen"

      Add the absolute path of libkstradeapi.so and  libkslkc64r.so(or libkslkc32r.so)  to the LD_LIBRARY_PATH enviroment variable.You can do like this: 
      LD_LIBRARY_PATH=/xxx/yyy/zzz/£º${LD_LIBRARY_PATH};  export LD_LIBRARY_PATH

   4) Check Correctness of environment configuration
      a) Check whether the loading stage is right when executable programs loads the dynamic library.
	ldd  testKSTradeAPI_32   : check the load stage of 32-bit test demo 
	ldd  testKSTradeAPI_64   : check the load stage of 64-bit test demo

      b) See the current version of dynamic library "libkstradeapi.so".You can do like this:
	strings libkstradeapi.so|grep KSFT_API_Version

   5£©Announcements
      The correctness for running program also needs authorization document "KSInterB2C.lkc" which belongs to Sungard.
      Make sure the running directory has "KSInterB2C.lkc" file .You can connect hot line  for this file if you don't have it .

Part Four£ºCompile and Running Description for windows platform

1£¬Compile Description
   In windows enviromnet ,you should use Visual Studio 2005 IDE to compile the source code.

   1) Compile Checking
   First make sure your windows machine has installed Visual Studio 2005 and above version.
   
   2£©How to Compile
   Use Visual Studio 2005 to open "testKSTradeAPI.sln" file £¬then compile in the IDE.
   
   3£©Executable Files
   After compiling progress , you can find the executable file : testKSTradeAPI.exe in the run directory .

2£¬Run Description
   First make sure run directory has these files: KSTradeAPI.dll,cpack.dll,lkcdll.dll
   Then you can execute the testKSTradeAPI.exe in run directory.
   The correctness for running program also needs authorization document "KSInterB2C.lkc" which belongs to Sungard.
   Make sure the running directory has "KSInterB2C.lkc" file .You can connect hot line  for this file if you don't have it .

Part Five£ºCompiling and Running Description for Mac OS X platform

1£¬Compileing Description
   makefile is used to compile universal(i386 and x86_64) test program.
   1) Compile Checking
      Operating system minimum version: OS X 10.9
      Compliler minimum version: clang 500.2.79
      In terminal, type "clang -v" to get the version of clang. And clang with lower version may result in Compilation Error.
   2£©How to Compile
      In terminal, run:
      $ make # x86_64
      $ make vtype=64r # x86_64
      $ make vtype=32r # i386
   3£©Executable Files
      The program generated is in directory "run".
2£¬Run Description
    1£©Run Checking
      
      First make sure the existence of libkstradeapi.dylib and libkslkc.dylib in directory "KSTradeAPI".
      Then check if you has compiled the executable file for testing demo successfully.( Compile stage will generate executable programs in run directory)

   2) Set executable attribute for dynamic library
      
      Make sure dynamic libraries have executable attribute. You can use "ls -l *.dylib"  to see the file-attribute.
      If the dynamic library doesn't has executable attribute, you can use "chmod +x <name>.so" in Terminal to 	change executable attributes. See more "man 1 chmod"

   3£©Set loading path of dynamic library
      
      The install name of the library is "@rpath/<name>.dylib".
      To check it, you can use "otool -D <name>.dylib" command. And use "install_name_tool -id <install_name> <name>.dylib" to change it.
      "-rpath" option is used while compiling. So, there is no need to set up environment variables LD_LIBRARY_PATH and so on.

   4) Check Correctness of environment configuration
      a) Check whether the loading stage is right when executable programs loads the dynamic library.

	$ otool -L <executable name>

      b) See the current version of dynamic library "libkstradeapi.so".You can do like this:
	strings libkstradeapi.dylib|grep KSFT_API_Version

   5£©Announcements
      The correctness for running program also needs authorization document "KSInterB2C.lkc" which belongs to Sungard.
      Make sure the running directory has "KSInterB2C.lkc" file .You can connect hot line  for this file if you don't have it .    