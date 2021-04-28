/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSWindow;

@interface AKPromptWindowController : NSWindowController {

	char _makeSheetCritical;
	char __currentlyActive;
	NSWindow* _hostWindow;

}

@property (assign,nonatomic) char _currentlyActive;              //@synthesize _currentlyActive=__currentlyActive - In the implementation block
@property (__weak) NSWindow * hostWindow;                        //@synthesize hostWindow=_hostWindow - In the implementation block
@property (assign) char makeSheetCritical;                       //@synthesize makeSheetCritical=_makeSheetCritical - In the implementation block
-(void)dismiss;
-(void)present;
-(void)setHostWindow:(NSWindow *)arg1 ;
-(NSWindow *)hostWindow;
-(char)_currentlyActive;
-(void)set_currentlyActive:(char)arg1 ;
-(void)_presentAsSheet;
-(void)_presentAsModal;
-(void)_dismissOnMainThread;
-(char)makeSheetCritical;
-(void)_dimissPrompt;
-(void)setMakeSheetCritical:(char)arg1 ;
@end
