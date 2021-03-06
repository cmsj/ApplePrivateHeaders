/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@interface PISlomoAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) SCD_Struct_PI7 startTime; 
@property (assign,nonatomic) SCD_Struct_PI7 endTime; 
@property (assign,nonatomic) double rate; 
+(id)rateKey;
+(id)endScaleKey;
+(id)endKey;
+(id)startScaleKey;
+(id)startKey;
-(SCD_Struct_PI7)startTime;
-(void)setStartTime:(SCD_Struct_PI7)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)setEndTime:(SCD_Struct_PI7)arg1 ;
-(SCD_Struct_PI7)endTime;
@end

