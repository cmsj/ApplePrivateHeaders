/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSApplicationDelegate.h>

@class AMApplicationStubController, NSString;

@interface AMModernApplicationStubDelegate : NSObject <NSApplicationDelegate> {

	AMApplicationStubController* _applicationStubController;
	char _didRun;

}

@property (retain) AMApplicationStubController * applicationStubController;              //@synthesize applicationStubController=_applicationStubController - In the implementation block
@property (assign) char didRun;                                                          //@synthesize didRun=_didRun - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)application:(id)arg1 openFiles:(id)arg2 ;
-(char)application:(id)arg1 openFile:(id)arg2 ;
-(char)didRun;
-(void)setApplicationStubController:(AMApplicationStubController *)arg1 ;
-(AMApplicationStubController *)applicationStubController;
-(void)setDidRun:(char)arg1 ;
@end

