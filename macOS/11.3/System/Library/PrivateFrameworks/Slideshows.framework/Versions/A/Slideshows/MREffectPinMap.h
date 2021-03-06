/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MREffect.h>

@class NSMutableDictionary, MRImageProvider, NSMutableArray, NSArray;

@interface MREffectPinMap : MREffect {

	NSMutableDictionary* mSprites;
	float mLocalMatrix[16];
	MRImageProvider* mGradientProvider;
	MRImageProvider* mPinProvider;
	MRImageProvider* mYellowPinProvider;
	MRImageProvider* mRedPinProvider;
	MRImageProvider* mTextBoxArrowProvider;
	MRImageProvider* mTextBoxMiddleProvider;
	MRImageProvider* mTextBoxCapProvider;
	MRImageProvider* mTextBoxArrowFlippedProvider;
	MRImageProvider* mTextBoxMiddleFlippedProvider;
	MRImageProvider* mTextBoxCapFlippedProvider;
	MRImageProvider* mTextBox2ArrowProvider;
	MRImageProvider* mTextBox2MiddleProvider;
	MRImageProvider* mTextBox2CapProvider;
	MRImageProvider* mTextBox2ArrowFlippedProvider;
	MRImageProvider* mTextBox2MiddleFlippedProvider;
	MRImageProvider* mTextBox2CapFlippedProvider;
	MRImageProvider* mTitleBoxLeftProvider;
	MRImageProvider* mTitleBoxMiddleProvider;
	MRImageProvider* mTitleBoxRightProvider;
	MRImageProvider* mBoxShadowSmall;
	MRImageProvider* mBoxShadowBigScaled;
	MRImageProvider* mWaterProvider;
	NSMutableArray* mTextImages;
	NSMutableArray* mTextLineCounts;
	NSMutableArray* mTextYOffsets;
	NSArray* mSortedPins;
	char mNeedsWater;
	char mHas2LineLabels;
	char mHas1LineLabels;
	char mNeedsTitle;

}
-(void)setAttributes:(id)arg1 ;
-(void)_cleanup;
-(void)_unload;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)_drawArrowInContext:(id)arg1 atTime:(double)arg2 withArguments:(id)arg3 atPoint:(CGPoint)arg4 scale:(double)arg5 withTextAtIndex:(long long)arg6 t:(CGPoint)arg7 pointDown:(char)arg8 m:(float)arg9 ;
-(void)_drawTitleInContext:(id)arg1 atTime:(double)arg2 withArguments:(id)arg3 atPoint:(CGPoint)arg4 scale:(double)arg5 withTextAtIndex:(long long)arg6 ;
@end

