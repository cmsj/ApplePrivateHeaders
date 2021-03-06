/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>

@class NSDictionary;

@interface BWVideoFormat : BWFormat {

	unsigned long long _width;
	unsigned long long _height;
	unsigned _pixelFormat;
	unsigned long long _bytesPerRowAlignment;
	unsigned long long _planeAlignment;
	unsigned long long _extendedWidth;
	unsigned long long _extendedHeight;
	unsigned _cacheMode;
	char _prewireBuffers;
	char _memoryPoolUseAllowed;
	NSDictionary* _pixelBufferAttributes;
	int _colorSpaceProperties;

}

@property (assign,nonatomic) unsigned long long width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                            //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                 //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRowAlignment;              //@synthesize bytesPerRowAlignment=_bytesPerRowAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long planeAlignment;                    //@synthesize planeAlignment=_planeAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long extendedWidth;                     //@synthesize extendedWidth=_extendedWidth - In the implementation block
@property (assign,nonatomic) unsigned long long extendedHeight;                    //@synthesize extendedHeight=_extendedHeight - In the implementation block
@property (assign,nonatomic) unsigned cacheMode;                                   //@synthesize cacheMode=_cacheMode - In the implementation block
@property (assign,nonatomic) char prewireBuffers;                                  //@synthesize prewireBuffers=_prewireBuffers - In the implementation block
@property (assign,nonatomic) char memoryPoolUseAllowed;                            //@synthesize memoryPoolUseAllowed=_memoryPoolUseAllowed - In the implementation block
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes;               //@synthesize pixelBufferAttributes=_pixelBufferAttributes - In the implementation block
@property (nonatomic,readonly) int colorSpaceProperties;                           //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
+(void)initialize;
+(id)pixelBufferAttachmentsForColorSpaceProperties:(int)arg1 ;
+(id)colorInfoWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned)arg2 sourceDimensions:(SCD_Struct_BW12)arg3 requestedPixelFormat:(unsigned)arg4 ;
+(id)formatByResolvingRequirements:(id)arg1 ;
+(int)colorSpacePropertiesForSourceThatSupportsWideColor:(char)arg1 sourceColorSpace:(int)arg2 sourcePixelFormat:(unsigned)arg3 sourceDimensions:(SCD_Struct_BW12)arg4 requestedPixelFormat:(unsigned)arg5 ;
+(id)formatByResolvingRequirements:(id)arg1 printErrors:(char)arg2 ;
+(id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2 printErrors:(char)arg3 ;
+(int)colorSpacePropertiesWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned)arg2 sourceDimensions:(SCD_Struct_BW12)arg3 requestedPixelFormat:(unsigned)arg4 ;
+(int)colorSpacePropertiesForPixelBufferAttachments:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)setPixelFormat:(unsigned)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned)pixelFormat;
-(void)setCacheMode:(unsigned)arg1 ;
-(unsigned)cacheMode;
-(unsigned)mediaType;
-(NSDictionary *)pixelBufferAttributes;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)setPrewireBuffers:(char)arg1 ;
-(void)setBytesPerRowAlignment:(unsigned long long)arg1 ;
-(void)setPlaneAlignment:(unsigned long long)arg1 ;
-(int)colorSpaceProperties;
-(unsigned long long)bytesPerRowAlignment;
-(unsigned long long)planeAlignment;
-(char)prewireBuffers;
-(void)setMemoryPoolUseAllowed:(char)arg1 ;
-(char)memoryPoolUseAllowed;
-(id)_initWithResolvedPixelBufferAttributes:(id)arg1 colorSpaceProperties:(int)arg2 memoryPoolUseAllowed:(char)arg3 ;
-(unsigned long long)extendedWidth;
-(unsigned long long)extendedHeight;
-(char)isHLGColorSpace;
-(void)setExtendedWidth:(unsigned long long)arg1 ;
-(void)setExtendedHeight:(unsigned long long)arg1 ;
@end

