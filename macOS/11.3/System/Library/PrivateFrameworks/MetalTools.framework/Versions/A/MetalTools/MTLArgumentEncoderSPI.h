/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _MTLIndirectArgumentBufferLayout;


@protocol MTLArgumentEncoderSPI <MTLArgumentEncoder>
@property (nonatomic,readonly) _MTLIndirectArgumentBufferLayout * layout; 
@required
-(_MTLIndirectArgumentBufferLayout *)layout;
-(void)setFunctionPointer:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setFunctionPointers:(const id*)arg1 withRange:(NSRange)arg2;

@end
