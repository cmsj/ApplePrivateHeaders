/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/Versions/A/HDRProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState;
@class NSString;

@interface ForwardDmShader : NSObject {

	NSString* _computeKernelName;
	id<MTLComputePipelineState> _computePipeline;

}
-(id)getComputePipeLineStateForDevice:(id)arg1 Library:(id)arg2 Constants:(BOOL*)arg3 ConstantNumber:(unsigned)arg4 ;
-(id)initShaderWithName:(id)arg1 ;
-(id)getComputePipeLineStateForDevice:(id)arg1 Library:(id)arg2 ;
@end

