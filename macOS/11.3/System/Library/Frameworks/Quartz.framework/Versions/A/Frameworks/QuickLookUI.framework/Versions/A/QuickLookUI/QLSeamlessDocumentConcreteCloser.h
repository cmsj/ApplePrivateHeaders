/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLSeamlessDocumentCloser.h>

@class NSWindow, NSDictionary;

@interface QLSeamlessDocumentConcreteCloser : QLSeamlessDocumentCloser {

	NSWindow* _window;
	unsigned _launcherPort;
	NSDictionary* _displayState;
	char _isTerminating;

}

@property (assign) NSWindow * window;                  //@synthesize window=_window - In the implementation block
@property (assign) unsigned launcherPort;              //@synthesize launcherPort=_launcherPort - In the implementation block
-(void)closeWithContentFrame:(CGRect)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSWindow *)window;
-(void)setWindow:(NSWindow *)arg1 ;
-(char)isAnimating;
-(void)_applicationWillTerminate:(id)arg1 ;
-(id)displayState;
-(void)setDisplayState:(id)arg1 ;
-(void)setLauncherPort:(unsigned)arg1 ;
-(unsigned)launcherPort;
@end
