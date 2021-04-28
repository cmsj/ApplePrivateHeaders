/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSCore.framework/Versions/A/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSCore/MPSCore-Structs.h>
@class NSString;

@interface MPSState : NSObject {

	MPSStateResource* _resources;
	unsigned long long _resourceCount;
	unsigned long long _readCount;
	NSString* _label;
	unsigned short _flags;
	char _updatedAlready;

}

@property (nonatomic,readonly) unsigned long long resourceCount;              //@synthesize resourceCount=_resourceCount - In the implementation block
@property (assign,nonatomic) unsigned long long readCount;                    //@synthesize readCount=_readCount - In the implementation block
@property (nonatomic,readonly) char isTemporary; 
@property (copy) NSString * label; 
@property (nonatomic,retain,readonly) id<MTLResource> resource; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)readCount;
-(void)setReadCount:(unsigned long long)arg1 ;
-(unsigned long long)resourceSize;
-(id)initWithResource:(id)arg1 ;
-(id<MTLResource>)resource;
-(char)isTemporary;
-(id)initWithResources:(id)arg1 ;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 textureDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 ;
-(unsigned long long)resourceTypeAtIndex:(unsigned long long)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(MPSStateTextureInfo)textureInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bufferSizeAtIndex:(unsigned long long)arg1 ;
-(id)resourceAtIndex:(unsigned long long)arg1 allocateMemory:(char)arg2 ;
-(unsigned long long)resourceCount;
@end
