/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PISmartToneAdjustmentController : PIAdjustmentController {

	SCD_Struct_PI13 _smartSettings;

}

@property (assign,nonatomic) double inputLight; 
@property (assign,nonatomic) double offsetBlack; 
@property (assign,nonatomic) double offsetBrightness; 
@property (assign,nonatomic) double offsetContrast; 
@property (assign,nonatomic) double offsetExposure; 
@property (assign,nonatomic) double offsetHighlights; 
@property (assign,nonatomic) double offsetLocalLight; 
@property (assign,nonatomic) double offsetShadows; 
@property (nonatomic,copy) NSDictionary * statistics; 
@property (assign,nonatomic) long long sourceSelection; 
@property (nonatomic,copy) NSDictionary * overcaptureStatistics; 
+(id)offsetContrastKey;
+(id)attributeContrastKey;
+(id)offsetLocalLightKey;
+(id)attributeLocalLightKey;
+(id)offsetBlackKey;
+(id)attributeBlackPointKey;
+(id)offsetShadowsKey;
+(id)attributeShadowsKey;
+(id)offsetHighlightsKey;
+(id)attributeHighlightsKey;
+(id)offsetExposureKey;
+(id)attributeExposureKey;
+(id)offsetBrightnessKey;
+(id)attributeBrightnessKey;
+(id)sourceSelectionKey;
+(id)overcaptureStatisticsKey;
+(id)statisticsKey;
+(id)inputRawHighlightsKey;
+(id)inputLocalLightKey;
+(id)inputBlackKey;
+(id)inputHighlightsKey;
+(id)inputShadowsKey;
+(id)inputContrastKey;
+(id)inputBrightnessKey;
+(id)inputExposureKey;
+(id)inputLightKey;
+(id)attributeLightMapKey;
+(id)attributeLightMapWidthKey;
+(id)attributeLightMapHeightKey;
-(NSDictionary *)statistics;
-(void)setStatistics:(NSDictionary *)arg1 ;
-(id)initWithAdjustment:(id)arg1 ;
-(long long)sourceSelection;
-(void)setSourceSelection:(long long)arg1 ;
-(double)inputLight;
-(void)setInputExposure:(double)arg1 ;
-(double)inputExposure;
-(double)inputContrast;
-(void)setInputContrast:(double)arg1 ;
-(void)_updateSettingsWithInputLight:(double)arg1 ;
-(id)computedSettings;
-(void)setInputLight:(double)arg1 ;
-(void)setInputBrightness:(double)arg1 ;
-(double)inputBrightness;
-(void)setInputShadows:(double)arg1 ;
-(double)inputShadows;
-(void)setInputHighlights:(double)arg1 ;
-(double)inputHighlights;
-(void)setInputBlack:(double)arg1 ;
-(double)inputBlack;
-(void)setInputLocalLight:(double)arg1 ;
-(double)inputLocalLight;
-(void)setInputRawHighlights:(double)arg1 ;
-(double)inputRawHighlights;
-(void)setOvercaptureStatistics:(NSDictionary *)arg1 ;
-(NSDictionary *)overcaptureStatistics;
-(double)offsetBlack;
-(void)setOffsetBlack:(double)arg1 ;
-(double)offsetBrightness;
-(void)setOffsetBrightness:(double)arg1 ;
-(double)offsetContrast;
-(void)setOffsetContrast:(double)arg1 ;
-(double)offsetExposure;
-(void)setOffsetExposure:(double)arg1 ;
-(double)offsetHighlights;
-(void)setOffsetHighlights:(double)arg1 ;
-(double)offsetLocalLight;
-(void)setOffsetLocalLight:(double)arg1 ;
-(double)offsetShadows;
-(void)setOffsetShadows:(double)arg1 ;
@end
