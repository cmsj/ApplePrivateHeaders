/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLVideoCommandEncoderSPI <MTLCommandEncoder>
@required
-(void)updateFence:(id)arg1;
-(void)waitForFence:(id)arg1;
-(void)setMotionEstimationPipeline:(id)arg1;
-(void)generateMotionVectorsForTexture:(id)arg1 previousTexture:(id)arg2 resultBuffer:(id)arg3 bufferOffset:(unsigned long long)arg4;

@end

