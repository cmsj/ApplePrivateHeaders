/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MTLIndirectDrawIndexedPatchesArguments : NSObject {

	unsigned long long _numberOfPatchControlPoints;
	unsigned long long _patchStart;
	unsigned long long _patchCount;
	void* _patchIndexBufferVirtualAddress;
	unsigned long long _patchIndexBufferOffset;
	void* _controlPointIndexBufferVirtualAddress;
	unsigned long long _controlPointIndexBufferOffset;
	unsigned long long _instanceCount;
	unsigned long long _baseInstance;

}

@property (assign,nonatomic) unsigned long long numberOfPatchControlPoints;              //@synthesize numberOfPatchControlPoints=_numberOfPatchControlPoints - In the implementation block
@property (assign,nonatomic) unsigned long long patchStart;                              //@synthesize patchStart=_patchStart - In the implementation block
@property (assign,nonatomic) unsigned long long patchCount;                              //@synthesize patchCount=_patchCount - In the implementation block
@property (assign,nonatomic) void* patchIndexBufferVirtualAddress;                       //@synthesize patchIndexBufferVirtualAddress=_patchIndexBufferVirtualAddress - In the implementation block
@property (assign,nonatomic) void* controlPointIndexBufferVirtualAddress;                //@synthesize controlPointIndexBufferVirtualAddress=_controlPointIndexBufferVirtualAddress - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;                           //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) unsigned long long baseInstance;                            //@synthesize baseInstance=_baseInstance - In the implementation block
-(unsigned long long)baseInstance;
-(unsigned long long)numberOfPatchControlPoints;
-(unsigned long long)patchStart;
-(unsigned long long)patchCount;
-(void*)patchIndexBufferVirtualAddress;
-(void*)controlPointIndexBufferVirtualAddress;
-(unsigned long long)instanceCount;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(void)setBaseInstance:(unsigned long long)arg1 ;
-(void)setPatchStart:(unsigned long long)arg1 ;
-(void)setPatchCount:(unsigned long long)arg1 ;
-(void)setNumberOfPatchControlPoints:(unsigned long long)arg1 ;
-(void)setPatchIndexBufferVirtualAddress:(void*)arg1 ;
-(void)setControlPointIndexBufferVirtualAddress:(void*)arg1 ;
@end

