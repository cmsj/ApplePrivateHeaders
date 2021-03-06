/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MREffect.h>
#import <libobjc.A.dylib/MZEffectTiming.h>

@class NSMutableDictionary, NSMutableArray, MRCAMLBezierData, NSDictionary;

@interface MREffectHyperGrid : MREffect <MZEffectTiming> {

	NSMutableDictionary* mSprites;
	NSMutableArray* mLayouts;
	long long mSlideStartIndex;
	long long mIterationStartIndex;
	long long mLastSlideIndex;
	long long mLastIteration;
	MRCAMLBezierData* mCurves[2];
	MRCAMLBezierData* mBreakCurves[2];
	char mNeedsToRecalculateIterations;
	double mAspectRatio;
	NSDictionary* mBreakInformation;
	long long mLastUsableIteration;
	long long mLastIterationsAdded[2];
	char mCanAddSlides;
	long long mIdealSlideCount;
	char mAspectRatioDidChange;
	char mSyncsToMusic;
	long long _currentIterationIndex;

}

@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(char)hasCustomTiming;
-(void)setAttributes:(id)arg1 ;
-(char)isOpaque;
-(void)_cleanup;
-(void)_unload;
-(id)initWithEffectID:(id)arg1 ;
-(unsigned long long)effectAuthoredSlideCount;
-(id)effectAuthoredAttributes;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(char)getCurrentCenter:(CGPoint*)arg1 scale:(double*)arg2 rotation:(double*)arg3 isMain:(char*)arg4 forElement:(id)arg5 ;
-(char)hasMoreSlidesFromTime:(double)arg1 backwards:(char)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(double)interestingTimeForTime:(double)arg1 ;
-(double)interestingTimeForElement:(id)arg1 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(char)needsMoreSlidesAtTime:(double)arg1 ;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
-(double)_aspectRatioForSlideIndex:(long long)arg1 ;
-(char)_isMovieForSlideAtIndex:(long long)arg1 slideInformation:(id)arg2 ;
-(double)_movieDurationForSlideAtIndex:(long long)arg1 slideInformation:(id)arg2 ;
-(long long)_iterationForTime:(double)arg1 ;
-(double)_calculateMainDuration;
-(id)_slideProviderWithAspectRatio:(char)arg1 nearest:(long long)arg2 actual:(long long*)arg3 ;
-(void)_applyLayoutsFromEffectAttributes;
-(void)_updateIterationTimingsWithSlideInformation:(id)arg1 aspectRatio:(double)arg2 ;
-(void)_setupLayoutsWithSlideInfo:(id)arg1 aspectRatio:(double)arg2 ;
-(CGSize)_relativeSizeForLayout:(unsigned char)arg1 atIndex:(long long)arg2 landscape:(char)arg3 ;
-(void)_updateIterationTiming:(id)arg1 slideInformation:(id)arg2 aspectRatio:(double)arg3 startTime:(double*)arg4 ;
-(void)_updateSizeScripts:(long long)arg1 aspectRatio:(double)arg2 ;
-(void)_applyTimingToSlideProviders:(long long)arg1 ;
-(void)iterationTime:(double*)arg1 duration:(double*)arg2 forIndex:(long long)arg3 atTime:(double)arg4 inIteration:(id)arg5 firstIterationIndex:(long long)arg6 currentIterationIndex:(long long)arg7 ;
-(void)_renderIterationAtIndex:(long long)arg1 firstIteration:(long long)arg2 atTime:(double)arg3 relativeTime:(double)arg4 inContext:(id)arg5 withArguments:(id)arg6 ;
-(CGPoint)_relativePointForLayout:(unsigned char)arg1 andDirection:(unsigned char)arg2 atIndex:(long long)arg3 landscape:(char)arg4 ;
-(void)_drawSlideAtIndex:(long long)arg1 size:(CGSize)arg2 position:(CGPoint)arg3 atTime:(double)arg4 iterationTime:(double)arg5 iterationDuration:(double)arg6 inContext:(id)arg7 withArguments:(id)arg8 ;
-(id)layoutForSlideIndex:(long long)arg1 forIterations:(id)arg2 atIndex:(long long*)arg3 ;
-(char)slideIndex:(long long)arg1 isInIteration:(id)arg2 ;
-(char)_layoutAtIndexHasBreak:(long long)arg1 ;
@end

