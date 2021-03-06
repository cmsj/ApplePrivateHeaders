/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLPipelineLibrarySPI.h>

@protocol MTLDevice;
@class NSString, NSArray;

@interface _MTLPipelineLibrary : _MTLObjectWithLabel <MTLPipelineLibrarySPI> {

	PipelineLibraryData* _pipelineLibraryData;
	id<MTLDevice> _device;
	NSArray* _pipelineNames;
	char _disableRunTimeCompilation;

}

@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device;                                      //@synthesize device=_device - In the implementation block
@property (readonly) NSArray * pipelineNames;                                   //@synthesize pipelineNames=_pipelineNames - In the implementation block
@property (assign) char disableRunTimeCompilation;                              //@synthesize disableRunTimeCompilation=_disableRunTimeCompilation - In the implementation block
@property (nonatomic,readonly) id<MTLPipelineCache> pipelineCache; 
@property (nonatomic,readonly) id<MTLPipelineCache> functionCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 pipelineLibraryData:(PipelineLibraryData*)arg2 ;
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(NSArray *)pipelineNames;
-(char)disableRunTimeCompilation;
-(void)setDisableRunTimeCompilation:(char)arg1 ;
-(id<MTLPipelineCache>)pipelineCache;
-(id<MTLPipelineCache>)functionCache;
@end

