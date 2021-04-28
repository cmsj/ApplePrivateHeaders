/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@class NSArray;

@interface PIVideoReframeAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSArray * keyframes; 
@property (assign,nonatomic) SCD_Struct_PI6 stabCropRect; 
+(id)stabCropRectKey;
+(id)keyframesKey;
-(char)isEqual:(id)arg1 forKeys:(id)arg2 ;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;
-(void)setKeyframes:(NSArray *)arg1 ;
-(void)setStabCropRect:(SCD_Struct_PI6)arg1 ;
-(id)copyKeyframesTrimmingToTimeRange:(SCD_Struct_PI8)arg1 ;
@end
