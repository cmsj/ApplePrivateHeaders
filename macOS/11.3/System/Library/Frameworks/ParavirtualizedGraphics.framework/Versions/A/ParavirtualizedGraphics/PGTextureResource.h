/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ParavirtualizedGraphics.framework/Versions/A/ParavirtualizedGraphics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ParavirtualizedGraphics/ParavirtualizedGraphics-Structs.h>
#import <ParavirtualizedGraphics/PGResource.h>

@protocol MTLTexture, MTLBuffer;
@class PGTask;

@interface PGTextureResource : PGResource {

	PGTask* _task;
	id<MTLTexture> _texture;
	id<MTLBuffer> _transferBuffer;
	unsigned long long _textureAllocationLength;
	unsigned _textureVirtualPage;
	char _generateMipmaps;
	SCD_Struct_PG29* _dimension;

}
+(BOOL)validateTextureDimension:(SCD_Struct_PG29*)arg1 dest:(SCD_Struct_PG29*)arg2 mipLevels:(unsigned)arg3 generateMipmaps:(char)arg4 textureAllocationLength:(unsigned long long)arg5 texture:(id)arg6 ;
-(void)dealloc;
-(void)synchronizeInEncoder:(id)arg1 ;
-(void)synchronizeAndInvalidateInEncoder:(id)arg1 ;
-(id)getResource;
-(id)getTexture;
-(id)initWithTask:(id)arg1 objectType:(unsigned)arg2 descriptor:(void*)arg3 descriptorLength:(unsigned)arg4 texture:(id)arg5 ;
-(void)prepareInEncoder:(id)arg1 ;
-(void)replacePhysical:(id)arg1 ;
-(void)ensurePhysical;
-(void)pageTextureInEncoder:(id)arg1 isDownload:(BOOL)arg2 ;
@end

