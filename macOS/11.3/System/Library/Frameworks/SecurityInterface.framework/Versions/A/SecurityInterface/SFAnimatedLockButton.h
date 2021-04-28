/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityInterface/SecurityInterface-Structs.h>
#import <AppKit/NSButton.h>

@class NSMutableArray, NSTimer, NSTrackingArea, NSSound;

@interface SFAnimatedLockButton : NSButton {

	NSMutableArray* _animationArray;
	int _animationIndex;
	NSTimer* _timer;
	char _locked;
	char _mouseEntered;
	NSTrackingArea* _trackingArea;
	NSSound* _sfUnlockSound;
	NSSound* _sfLockSound;

}
-(void)startRollOverTracking:(float)arg1 forRTL:(char)arg2 ;
-(void)stopRollOverTracking:(char)arg1 ;
-(void)startRollOverTracking:(float)arg1 ;
-(void)_setupImages;
-(void)_drawRollOver:(char)arg1 ;
-(void)startRollOverTracking;
-(void)stopRollOverTracking;
-(void)_setPressedStateImage;
-(void)_loadAnimation;
-(void)_animatorTimerProc:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)_imageNamed:(id)arg1 ;
-(void)lock:(char)arg1 ;
-(void)_animate:(char)arg1 ;
-(void)unlock:(char)arg1 ;
@end
