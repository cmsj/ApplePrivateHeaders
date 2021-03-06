/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKSlideshowElement.h>

@class NSData;

@interface IKSlideshowImage : IKSlideshowElement {

	CGImageSourceRef _tempISR;
	int _tempISRUseCount;
	NSData* _tempData;
	char _tempISRIsDataBased;
	CGImageRef _image;
	CGSize _imageSize;
	CGSize _imageSizeScaledToFit;
	int _orientation;
	char _imageIsLargerThanScreen;

}

@property (assign) CGSize imageSize;                          //@synthesize imageSize=_imageSize - In the implementation block
@property (assign) CGSize imageSizeScaledToFit;               //@synthesize imageSizeScaledToFit=_imageSizeScaledToFit - In the implementation block
@property (assign) int orientation;                           //@synthesize orientation=_orientation - In the implementation block
@property (assign) char imageIsLargerThanScreen;              //@synthesize imageIsLargerThanScreen=_imageIsLargerThanScreen - In the implementation block
+(void)initialize;
-(id)initWithDataSourceHandler:(id)arg1 index:(unsigned long long)arg2 subIndex:(unsigned long long)arg3 ;
-(void)loadThumbnail:(char)arg1 currentCount:(unsigned long long)arg2 ;
-(void)loadThumbnailIfNeeded;
-(void)addPDFOptionsIfNeeded:(id)arg1 ;
-(void)getImageInfoFromCGImage;
-(id)initWithCGImageSourceRef:(CGImageSourceRef)arg1 dataSourceHandler:(id)arg2 index:(unsigned long long)arg3 subIndex:(unsigned long long)arg4 ;
-(void)getImageInfo;
-(void)setupImageSiblings;
-(void)callThumbnailDidLoad:(id)arg1 ;
-(char)imageIsLargerThanScreen;
-(CGSize)imageSizeScaledToFit;
-(void)rotateThumbnail:(int)arg1 ;
-(void)setImageSizeScaledToFit:(CGSize)arg1 ;
-(void)setImageIsLargerThanScreen:(char)arg1 ;
-(id)description;
-(void)cleanup;
-(void)setImage:(CGImageRef)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(void)unload;
-(CGImageRef)image;
-(int)orientation;
-(CGSize)imageSize;
-(CGRect)imageRect;
-(void)setThumbnail:(CGImageRef)arg1 ;
-(CGImageRef)thumbnail;
-(id)debugState;
-(void)load:(char)arg1 ;
-(void)setup;
-(void)enter;
-(void)leave;
-(void)setImageSize:(CGSize)arg1 ;
-(void)rotateRight;
-(void)rotateLeft;
-(double)screenDPI;
@end

