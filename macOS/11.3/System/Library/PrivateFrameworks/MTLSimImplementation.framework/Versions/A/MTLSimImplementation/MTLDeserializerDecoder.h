/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MTLSimImplementation.framework/Versions/A/MTLSimImplementation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeserializerDecoder <NSObject>
@property (readonly) unsigned char type; 
@required
-(unsigned char)type;
-(void)fault;
-(void)decodeWithHeader:(SCD_Struct_MT0*)arg1 withIterator:(id)arg2;

@end

