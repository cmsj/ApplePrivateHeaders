/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TXRTextureInfo, NSMutableArray;

@interface TXRDeferredTextureInfo : NSObject {

	TXRTextureInfo* _info;
	NSMutableArray* _mipmaps;

}

@property (nonatomic,retain) TXRTextureInfo * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mipmaps;              //@synthesize mipmaps=_mipmaps - In the implementation block
-(id)initWithMipmapLevelCount:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(char)arg3 ;
-(NSMutableArray *)mipmaps;
-(TXRTextureInfo *)info;
-(void)setInfo:(TXRTextureInfo *)arg1 ;
@end

