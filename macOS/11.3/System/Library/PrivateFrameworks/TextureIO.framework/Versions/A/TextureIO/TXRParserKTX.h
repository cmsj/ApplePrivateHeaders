/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TXRParser.h>

@protocol OS_dispatch_queue;
@class TXRTextureInfo, NSDictionary, TXRDeferredTextureInfo, NSObject, NSString;

@interface TXRParserKTX : NSObject <TXRParser> {

	TXRTextureInfo* _textureInfo;
	unsigned _bytesOfKeyValueData;
	char _isCompressed;
	NSDictionary* _internalSizedFormatLookup;
	TXRDeferredTextureInfo* _deferredTextureInfo;
	NSObject*<OS_dispatch_queue> _parserQueue;
	BOOL _shouldFlipVertically;

}

@property (nonatomic,readonly) TXRTextureInfo * textureInfo;              //@synthesize textureInfo=_textureInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)exportTexture:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
+(char)handlesData:(id)arg1 ;
-(char)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(TXRTextureInfo *)textureInfo;
-(id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
-(void)parseImageData:(id)arg1 WithOptions:(id)arg2 bufferAllocator:(id)arg3 ;
-(unsigned long long)determineFormatFromType:(unsigned)arg1 format:(unsigned)arg2 internalFormat:(unsigned)arg3 baseInternalFormat:(unsigned)arg4 ;
@end

