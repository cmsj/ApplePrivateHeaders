/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@protocol NUMutablePurgeableImage, OS_dispatch_queue;
@class NSObject, NUPixelFormat, NUColorSpace, NUImageLayout;

@interface NUImageAccumulationNode : NURenderNode {

	id<NUMutablePurgeableImage> _image;
	NSObject*<OS_dispatch_queue> _queue;
	NUPixelFormat* _pixelFormat;
	NUColorSpace* _colorSpace;
	NUImageLayout* _layout;
	SCD_Struct_NU8 _imageSize;

}

@property (nonatomic,readonly) NUImageLayout * layout;                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU8 imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * pixelFormat;                    //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) NUColorSpace * colorSpace;                      //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,readonly) id<NUMutablePurgeableImage> image; 
-(NUPixelFormat *)pixelFormat;
-(NUImageLayout *)layout;
-(id<NUMutablePurgeableImage>)image;
-(NUColorSpace *)colorSpace;
-(id)_image;
-(SCD_Struct_NU8)imageSize;
-(id)debugQuickLookObject;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithImageSize:(SCD_Struct_NU8)arg1 tileSize:(SCD_Struct_NU8)arg2 borderSize:(SCD_Struct_NU8)arg3 pixelFormat:(id)arg4 colorSpace:(id)arg5 input:(id)arg6 ;
-(id)_newImage;
@end
