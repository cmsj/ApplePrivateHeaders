/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLVisibleFunctionTableSPI <MTLVisibleFunctionTable>
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain) id<MTLBuffer> globalBuffer; 
@property (assign,nonatomic) unsigned long long globalBufferOffset; 
@optional
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)resourceIndex;
-(id<MTLBuffer>)globalBuffer;
-(void)setGlobalBuffer:(id)arg1;
-(unsigned long long)globalBufferOffset;
-(void)setGlobalBufferOffset:(unsigned long long)arg1;

@required
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2;
-(void)setValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setValue:(unsigned long long)arg1 withRange:(NSRange)arg2;

@end
