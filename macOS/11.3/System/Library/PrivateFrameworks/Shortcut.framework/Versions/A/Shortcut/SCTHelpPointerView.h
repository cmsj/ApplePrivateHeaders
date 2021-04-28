/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/SCTAnimatable.h>

@class NSShadow;

@interface SCTHelpPointerView : NSView <SCTAnimatable> {

	CGRect mInitialBounds;
	NSShadow* mShadow;
	CGRect mPreviousRect;
	char mIsRightHandSide;
	float mAnimationProgress;
	float mScale;

}
-(void)dealloc;
-(void)updateProgress:(float)arg1 ;
-(char)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)wantsDefaultClipping;
-(void)drawRect:(CGRect)arg1 ;
-(char)animationShouldStart:(id)arg1 ;
-(void)updateScale:(float)arg1 ;
-(void)setIsOnRightHandSide:(char)arg1 ;
@end
