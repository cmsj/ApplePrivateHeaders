/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalKit/MetalKit-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>
#import <libobjc.A.dylib/MDLNamed.h>

@protocol MTLBuffer;
@class NSString, MTKMeshBufferZone, MTKMeshBufferAllocator;

@interface MTKMeshBuffer : NSObject <MDLMeshBuffer, MDLNamed> {

	MTKMeshBufferZone* _zone;
	unsigned long long _length;
	MTKMeshBufferAllocator* _allocator;
	id<MTLBuffer> _buffer;
	unsigned long long _offset;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long length;                       //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) MTKMeshBufferAllocator * allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,readonly) id<MDLMeshBufferZone> zone;                      //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> buffer;                            //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                       //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id<MDLMeshBufferZone>)zone;
-(unsigned long long)length;
-(NSString *)name;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)offset;
-(id<MTLBuffer>)buffer;
-(id)map;
-(id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3 ;
-(id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3 ;
-(MTKMeshBufferAllocator *)allocator;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4 ;
-(id)_initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6 ;
-(id)_newMap;
@end

