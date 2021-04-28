/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface PIApertureRedEyeProcessorKernel : CIImageProcessorKernel
+(int)outputFormat;
+(SCD_Struct_PI6)ROIForCenterPoint:(CGPoint)arg1 radius:(double)arg2 ;
+(void)convertFloat:(const float*)arg1 toFixed16:(unsigned short*)arg2 count:(unsigned long long)arg3 ;
+(void)convertFixed16:(const unsigned short*)arg1 toFloat:(float*)arg2 count:(unsigned long long)arg3 ;
+(char)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(int)formatForInputAtIndex:(int)arg1 ;
@end
