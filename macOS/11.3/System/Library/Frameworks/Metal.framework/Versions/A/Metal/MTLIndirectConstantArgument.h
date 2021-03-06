/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLIndirectConstantArgument : MTLArgumentInternal {

	unsigned short _dataType;
	unsigned short _alignment;
	unsigned short _dataSize;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;

}
-(unsigned long long)bufferALUType;
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(char)arg4 locationIndex:(unsigned long long)arg5 dataType:(unsigned long long)arg6 pixelFormat:(unsigned long long)arg7 aluType:(unsigned long long)arg8 dataSize:(unsigned long long)arg9 alignment:(unsigned long long)arg10 ;
-(unsigned long long)bufferPixelFormat;
-(unsigned long long)indirectConstantDataSize;
-(unsigned long long)indirectConstantAlignment;
-(unsigned long long)indirectConstantDataType;
@end

