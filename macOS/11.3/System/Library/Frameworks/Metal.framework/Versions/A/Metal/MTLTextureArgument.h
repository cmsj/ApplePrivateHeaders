/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLTextureArgument : MTLArgumentInternal {

	unsigned _textureType : 15;
	unsigned _isDepthTexture : 1;
	unsigned short _textureDataType;

}
-(id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(char)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(BOOL)arg8 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(unsigned long long)textureDataType;
-(char)isDepthTexture;
@end

