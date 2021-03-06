/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNPoolingBlock : VCPCNNBlock {

	int _px;
	int _py;
	int _chunk;

}
+(id)poolingBlockWithPoolX:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
-(char)useGPU;
-(int)forward;
-(char)supportGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
@end

