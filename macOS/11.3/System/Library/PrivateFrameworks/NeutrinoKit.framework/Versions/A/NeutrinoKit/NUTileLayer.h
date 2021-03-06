/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/Versions/A/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol NUPurgeableTextureImage;
@interface NUTileLayer : CALayer {

	id<NUPurgeableTextureImage> _image;
	SCD_Struct_NU4 _imageRect;

}

@property (readonly) SCD_Struct_NU4 imageRect;                       //@synthesize imageRect=_imageRect - In the implementation block
@property (readonly) id<NUPurgeableTextureImage> image;              //@synthesize image=_image - In the implementation block
-(void)dealloc;
-(id<NUPurgeableTextureImage>)image;
-(SCD_Struct_NU4)imageRect;
-(id)initWithImage:(id)arg1 tile:(id)arg2 ;
@end

