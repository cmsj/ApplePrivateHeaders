/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MTLIndirectDrawArguments : NSObject {

	unsigned long long _primitiveType;
	unsigned long long _vertexStart;
	unsigned long long _vertexCount;
	unsigned long long _instanceCount;
	unsigned long long _baseInstance;

}

@property (assign,nonatomic) unsigned long long primitiveType;              //@synthesize primitiveType=_primitiveType - In the implementation block
@property (assign,nonatomic) unsigned long long vertexStart;                //@synthesize vertexStart=_vertexStart - In the implementation block
@property (assign,nonatomic) unsigned long long vertexCount;                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;              //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) unsigned long long baseInstance;               //@synthesize baseInstance=_baseInstance - In the implementation block
-(unsigned long long)vertexStart;
-(unsigned long long)baseInstance;
-(unsigned long long)instanceCount;
-(unsigned long long)primitiveType;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(unsigned long long)vertexCount;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(void)setVertexStart:(unsigned long long)arg1 ;
-(void)setVertexCount:(unsigned long long)arg1 ;
-(void)setBaseInstance:(unsigned long long)arg1 ;
@end

