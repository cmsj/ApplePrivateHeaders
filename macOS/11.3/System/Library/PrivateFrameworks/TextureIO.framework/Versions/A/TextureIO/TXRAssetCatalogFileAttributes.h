/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextureIO/TextureIO-Structs.h>
@interface TXRAssetCatalogFileAttributes : NSObject {

	CGColorSpaceRef _colorSpace;
	unsigned char _exifOrientation;
	unsigned long long _fileFormat;

}

@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (assign,nonatomic) unsigned char exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long fileFormat;              //@synthesize fileFormat=_fileFormat - In the implementation block
-(id)init;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(unsigned char)exifOrientation;
-(void)setExifOrientation:(unsigned char)arg1 ;
-(unsigned long long)fileFormat;
-(void)setFileFormat:(unsigned long long)arg1 ;
@end

