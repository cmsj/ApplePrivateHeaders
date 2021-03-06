/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MTLPipelineLibrarySPI <MTLPipelineLibrary>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * pipelineNames; 
@property (assign) char disableRunTimeCompilation; 
@property (nonatomic,readonly) id<MTLPipelineCache> pipelineCache; 
@property (nonatomic,readonly) id<MTLPipelineCache> functionCache; 
@required
-(id<MTLDevice>)device;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(NSArray *)pipelineNames;
-(char)disableRunTimeCompilation;
-(void)setDisableRunTimeCompilation:(char)arg1;
-(id<MTLPipelineCache>)pipelineCache;
-(id<MTLPipelineCache>)functionCache;

@end

