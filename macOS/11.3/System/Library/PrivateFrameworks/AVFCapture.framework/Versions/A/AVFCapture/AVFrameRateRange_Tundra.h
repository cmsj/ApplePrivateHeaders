/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVFrameRateRangeInternal_Tundra;

@interface AVFrameRateRange_Tundra : NSObject {

	AVFrameRateRangeInternal_Tundra* _internal;

}

@property (readonly) double minFrameRate; 
@property (readonly) double maxFrameRate; 
@property (readonly) SCD_Struct_AV0 maxFrameDuration; 
@property (readonly) SCD_Struct_AV0 minFrameDuration; 
+(b)resolveClassMethod:;
+(b)resolveInstanceMethod:;
+(void)initialize;
+(SCD_Struct_AV0)frameDurationForFrameRate:(double)arg1 ;
+(id)frameRateRangeWithMinRate:(double)arg1 maxRate:(double)arg2 maxDuration:(SCD_Struct_AV0)arg3 minDuration:(SCD_Struct_AV0)arg4 ;
-(b)conformsToProtocol:(id)arg1 ;
-(b)isMemberOfClass:(Class)arg1 ;
-(b)isKindOfClass:(Class)arg1 ;
-(Class)class;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(SCD_Struct_AV0)minFrameDuration;
-(double)minFrameRate;
-(double)maxFrameRate;
-(SCD_Struct_AV0)maxFrameDuration;
-(id)initWithMinRate:(double)arg1 maxRate:(double)arg2 maxDuration:(SCD_Struct_AV0)arg3 minDuration:(SCD_Struct_AV0)arg4 ;
-(double)frameRateForFrameDuration:(SCD_Struct_AV0)arg1 ;
@end
