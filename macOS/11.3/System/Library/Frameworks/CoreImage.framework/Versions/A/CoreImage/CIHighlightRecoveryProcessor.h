/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface CIHighlightRecoveryProcessor : CIImageProcessorKernel
+(BOOL)synchronizeInputs;
+(char)allowPartialOutputRegion;
+(id)functionConstantValuesTuningParameters:(id)arg1 ;
+(id)compilePipelineForDevice:(id)arg1 functionName:(id)arg2 constantValues:(id)arg3 ;
+(int)outputFormat;
+(char)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(int)formatForInputAtIndex:(int)arg1 ;
@end

