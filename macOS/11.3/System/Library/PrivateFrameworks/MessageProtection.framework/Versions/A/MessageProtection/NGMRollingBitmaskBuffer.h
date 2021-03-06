/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NGMRollingBitmaskBuffer : NSObject {

	unsigned _upper_buffer_index;
	unsigned _valid_values_buffer_size;
	char* _valid_values_buffer;

}

@property (assign) unsigned upper_buffer_index;                    //@synthesize upper_buffer_index=_upper_buffer_index - In the implementation block
@property (assign) char* valid_values_buffer;                      //@synthesize valid_values_buffer=_valid_values_buffer - In the implementation block
@property (assign) unsigned valid_values_buffer_size;              //@synthesize valid_values_buffer_size=_valid_values_buffer_size - In the implementation block
-(void)dealloc;
-(id)init;
-(id)bufferData;
-(char*)valid_values_buffer;
-(unsigned)valid_values_buffer_size;
-(id)initWithData:(id)arg1 upperBufferIndex:(unsigned)arg2 ;
-(char)processIncomingCounter:(unsigned)arg1 ;
-(unsigned)upper_buffer_index;
-(void)setUpper_buffer_index:(unsigned)arg1 ;
-(void)setValid_values_buffer:(char*)arg1 ;
-(void)setValid_values_buffer_size:(unsigned)arg1 ;
@end

