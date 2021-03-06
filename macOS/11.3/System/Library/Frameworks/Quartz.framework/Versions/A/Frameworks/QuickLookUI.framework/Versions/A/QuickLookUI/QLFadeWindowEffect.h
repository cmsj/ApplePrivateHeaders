/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QLAnimationWindowEffect.h>

@interface QLFadeWindowEffect : QLAnimationWindowEffect {

	double _initialAlpha;
	double _finalAlpha;
	char _restoreAlpha;

}

@property (assign) char restoreAlpha;              //@synthesize restoreAlpha=_restoreAlpha - In the implementation block
+(id)fadeWindow:(id)arg1 fromAlpha:(double)arg2 toAlpha:(double)arg3 duration:(double)arg4 ;
-(char)restoreAlpha;
-(void)setValue:(float)arg1 ;
-(float)animation:(id)arg1 valueForProgress:(float)arg2 ;
-(void)done;
-(void)setRestoreAlpha:(char)arg1 ;
@end

