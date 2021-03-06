/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MREffect.h>

@class NSMutableDictionary, MRTextRenderer, MRImage, NSDictionary;

@interface MREffectMagazine : MREffect {

	NSMutableDictionary* mSprites;
	MRTextRenderer* mTextRenderer0;
	MRImage* mTextImage0;
	char mIsLoaded;
	char mFitMovie;
	NSDictionary* mCurrentInfo;

}
-(void)_cleanup;
-(void)_unload;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(void)_applySizeScripts:(id)arg1 ;
-(CGSize)_sizeForBreakAspectRatio:(double)arg1 size:(CGSize)arg2 inContext:(id)arg3 ;
@end

