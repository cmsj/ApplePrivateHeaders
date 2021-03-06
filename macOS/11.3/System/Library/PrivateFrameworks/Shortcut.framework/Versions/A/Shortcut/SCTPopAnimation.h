/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSAnimation.h>

@class SCTHelpPointerView;

@interface SCTPopAnimation : NSAnimation {

	SCTHelpPointerView* mAnimatedView;
	float mSlope;
	float mScale;
	float mScaleStep;

}
-(void)dealloc;
-(void)startAnimation;
-(void)setCurrentProgress:(float)arg1 ;
-(id)initWithView:(id)arg1 ;
@end

