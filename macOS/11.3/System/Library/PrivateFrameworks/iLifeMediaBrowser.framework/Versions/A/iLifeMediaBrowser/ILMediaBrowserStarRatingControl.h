/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <AppKit/NSControl.h>

@class NSString, NSDictionary;

@interface ILMediaBrowserStarRatingControl : NSControl {

	NSString* mStarString;
	NSString* mBulletString;
	NSDictionary* mTextAttrs;
	NSDictionary* mTextDimAttrs;
	long long mIntValue;
	id mTarget;
	SEL mSelector;
	char mIsTracking;
	CGSize mStarSize;
	char mDrawBorder;
	char mDrawBackground;
	long long mMinimumRanking;
	long long mMaximumRanking;
	char mShouldAcceptFirstMouse;
	char mShouldHandleKeyDown;
	double mFontSize;
	double mExtraSpacing;

}
-(void)dealloc;
-(long long)integerValue;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setIntValue:(long long)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)isTracking;
-(void)setFontSize:(double)arg1 ;
-(void)_setup:(CGRect)arg1 ;
-(void)setRankingValue:(long long)arg1 ;
-(void)setExtraSpacing:(double)arg1 ;
-(long long)rankingValue;
-(void)setEnabledColor:(id)arg1 disabledColor:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 fontSize:(double)arg2 extraSpacing:(double)arg3 ;
-(long long)constrainedRankingValue:(long long)arg1 ;
-(double)starWidth;
-(id)initWithFrame:(CGRect)arg1 fontSize:(double)arg2 ;
-(void)adaptToFrame;
-(void)setEnabledColor:(id)arg1 disabledColor:(id)arg2 backgroundColor:(id)arg3 ;
-(double)extraMargin;
-(void)setMinimum:(long long)arg1 maximum:(long long)arg2 ;
-(void)setDrawBackground:(char)arg1 ;
-(void)setDrawBorder:(char)arg1 ;
-(void)setShouldAcceptFirstMouse:(char)arg1 ;
-(void)setShouldHandleKeyDown:(char)arg1 ;
@end

