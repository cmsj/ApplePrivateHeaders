/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@class NSString, NSData;

@interface MDLTexture : NSObject <MDLNamed> {

	NSString* _name;
	MDLTextureData _textureData;
	long long _channelEncoding;
	NSData* _topLeftOriginData[14];
	NSData* _bottomLeftOriginData[14];
	char _selfCreating;
	char _alphaValuesSet;
	char _hasAlphaValues;

}

@property (nonatomic,readonly)  dimensions; 
@property (nonatomic,readonly) long long rowStride; 
@property (nonatomic,readonly) unsigned long long channelCount; 
@property (nonatomic,readonly) unsigned long long mipLevelCount; 
@property (nonatomic,readonly) long long channelEncoding;                     //@synthesize channelEncoding=_channelEncoding - In the implementation block
@property (assign,nonatomic) char isCube; 
@property (assign,nonatomic) char hasAlphaValues; 
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
+(id)textureNamed:(id)arg1 assetResolver:(id)arg2 ;
+(id)textureWithURL:(id)arg1 ;
+(id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions:(float)arg3 ;
+(id)textureWithURL:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
+(id)textureWithData:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
+(id)textureNamed:(id)arg1 bundle:(id)arg2 ;
+(id)_textureCubeWithSingleImageNamed:(id)arg1 bundle:(id)arg2 ;
+(id)textureCubeWithImagesNamed:(id)arg1 bundle:(id)arg2 ;
+(id)textureResourceNamed:(id)arg1 assetResolver:(id)arg2 ;
+(id)textureFromResource:(id)arg1 ;
+(id)textureCubeWithImagesNamed:(id)arg1 ;
+(id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 ;
+(id)textureNamed:(id)arg1 ;
-(id)texelDataWithBottomLeftOrigin;
-(MDLTextureData*)textureData;
-(id)allocateDataAtLevel:(long long)arg1 ;
-(void)clearTexelData;
-(id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2 ;
-(id)texelDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(char)arg2 ;
-(void)loadDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(char)arg2 selector:(SEL)arg3 ;
-(void)loadDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(char)arg2 selector:(SEL)arg3 ;
-(char)writeToURL:(id)arg1 level:(unsigned long long)arg2 ;
-(char)writeToURL:(id)arg1 type:(CFStringRef)arg2 ;
-(char)writeToURL:(id)arg1 type:(CFStringRef)arg2 level:(unsigned long long)arg3 ;
-(CGImageRef)imageFromTextureAtLevel:(unsigned long long)arg1 ;
-(id)texelDataWithTopLeftOrigin:(unsigned long long)arg1 ;
-(id)texelDataWithTopLeftOrigin;
-(void)setTexelDataWithTopLeftOrigin:(id)arg1 atMipLevel:(long long)arg2 ;
-(long long)rowStride;
-(void)setIsCube:(char)arg1 ;
-(char)hasAlphaValues;
-(void)setHasAlphaValues:(char)arg1 ;
-(void)setTexelDataWithBottomLeftOrigin:(id)arg1 atMipLevel:(long long)arg2 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)channelCount;
-()dimensions;
-(char)isCube;
-(unsigned long long)mipLevelCount;
-(long long)channelEncoding;
-(id)texelDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(char)arg2 ;
-(char)writeToURL:(id)arg1 ;
-(id)initWithData:(id)arg1 topLeftOrigin:(char)arg2 name:(id)arg3 dimensions:(long long)arg4 rowStride:(unsigned long long)arg5 channelCount:(long long)arg6 channelEncoding:(char)arg7 ;
-(CGImageRef)imageFromTexture;
@end
