/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSMoveHelper.h>

@class NSWindow;

@interface NSResizeMoveHelper : NSMoveHelper {

	NSWindow* _window;
	double _totalTime;
	CGRect _frameDelta;
	CGRect _startFrame;
	double _percent;
	char _contentPreservationNeedsRestoration;

}
-(id)screen;
-(id)initWithWindow:(id)arg1 ;
-(double)animationDuration;
-(void)cleanUpAnimation;
-(void)animateStep:(double)arg1 ;
-(char)shouldSkipAnimation;
-(void)setUpAnimation;
-(void)_configureFinalState;
-(void)animateResizeToFrame:(CGRect)arg1 ;
@end

