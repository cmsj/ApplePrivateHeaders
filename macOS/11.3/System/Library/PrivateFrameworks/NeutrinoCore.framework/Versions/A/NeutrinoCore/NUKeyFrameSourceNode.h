/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NUVideoSourceNode;

@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	NUVideoSourceNode* _videoSourceNode;
	SCD_Struct_NU7 _frameTime;
	CVBufferRef _pixelBuffer;

}
-(void)dealloc;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(SCD_Struct_NU8)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)initWithVideoSource:(id)arg1 time:(SCD_Struct_NU7)arg2 settings:(id)arg3 orientation:(long long)arg4 ;
-(id)initWithSettings:(id)arg1 orientation:(long long)arg2 ;
-(CVBufferRef)_pixelBuffer:(out id*)arg1 ;
@end
