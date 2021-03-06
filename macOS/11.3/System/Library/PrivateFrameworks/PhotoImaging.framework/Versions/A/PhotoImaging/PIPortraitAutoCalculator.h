/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/PIFaceObservingAutoCalculator.h>

@class PIFaceObservationCache, NSString;

@interface PIPortraitAutoCalculator : NUAutoCalculator <PIFaceObservingAutoCalculator> {

	PIFaceObservationCache* _faceObservationCache;

}

@property (nonatomic,retain) PIFaceObservationCache * faceObservationCache;              //@synthesize faceObservationCache=_faceObservationCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)portraitInfoDictionaryFromCameraMetadata:(id)arg1 ;
+(id)portraitInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4 ;
+(char)isStillImageDisparity:(id)arg1 ;
+(id)focusRectDictionaryFromMetadata:(id)arg1 ;
+(id)focusRectDictionaryFromRect:(CGRect)arg1 ;
+(char)canApplyPortraitEffectsWithMetadata:(id)arg1 ;
+(id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4 ;
+(id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 focus:(id)arg2 valuesAtCapture:(id)arg3 lumaNoiseScale:(float)arg4 orientation:(long long)arg5 ;
+(id)portraitEffectInfoDictionaryFromFaceObservations:(id)arg1 orientation:(long long)arg2 valuesAtCapture:(id)arg3 ;
-(void)submit:(/*^block*/id)arg1 ;
-(PIFaceObservationCache *)faceObservationCache;
-(void)setFaceObservationCache:(PIFaceObservationCache *)arg1 ;
-(void)_calculateWithImageProperties:(id)arg1 valuesAtCapture:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

