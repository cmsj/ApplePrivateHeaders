/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@class NUSourceNode;

@interface NUSourceContainerNode : NURenderNode

@property (readonly) NUSourceNode * primarySourceNode; 
+(id)sourceContainerNodeFromSource:(id)arg1 error:(out id*)arg2 ;
-(unsigned long long)_hash;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(id)preparedSourceNodeForPipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(out id*)arg4 ;
-(id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(SCD_Struct_NU8*)arg2 error:(out id*)arg3 ;
-(char)isEqualToRenderNode:(id)arg1 ;
@end

