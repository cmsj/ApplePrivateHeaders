/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedImage : CUINamedLookup {

	double _scale;
	cuiniproperties _imageProperties;

}

@property (readonly) CGRect NS_alignmentRect; 
@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) long long imageType; 
@property (nonatomic,readonly) SCD_Struct_CU1 edgeInsets; 
@property (nonatomic,readonly) long long resizingMode; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) SCD_Struct_CU1 alignmentEdgeInsets; 
@property (nonatomic,readonly) int blendMode; 
@property (nonatomic,readonly) char hasSliceInformation; 
@property (nonatomic,readonly) char hasAlignmentInformation; 
@property (nonatomic,readonly) char isVectorBased; 
@property (nonatomic,readonly) char preservedVectorRepresentation; 
@property (nonatomic,readonly) char isTemplate; 
@property (nonatomic,readonly) long long templateRenderingMode; 
@property (nonatomic,readonly) char isStructured; 
@property (nonatomic,readonly) char isFlippable; 
@property (nonatomic,readonly) int exifOrientation; 
@property (nonatomic,readonly) char isAlphaCropped; 
@property (nonatomic,readonly) CGImageRef croppedImage; 
-(CGRect)NS_alignmentRect;
-(long long)resizingModeWithSubtype:(long long)arg1 ;
-(char)hasAlignmentInformation;
-(CGSize)size;
-(id)description;
-(double)scale;
-(CGImageRef)image;
-(SCD_Struct_CU1)alignmentEdgeInsets;
-(SCD_Struct_CU1)edgeInsets;
-(long long)resizingMode;
-(char)isTemplate;
-(char)isFlippable;
-(int)blendMode;
-(double)opacity;
-(id)baseKey;
-(long long)imageType;
-(int)exifOrientation;
-(long long)templateRenderingMode;
-(char)isStructured;
-(CGImageRef)croppedImage;
-(char)hasSliceInformation;
-(char)isAlphaCropped;
-(CGRect)alphaCroppedRect;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(char)_cacheRenditionProperties;
-(CGSize)originalUncroppedSize;
-(char)isVectorBased;
-(char)preservedVectorRepresentation;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
-(double)positionOfSliceBoundary:(unsigned)arg1 ;
@end

