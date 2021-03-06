/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <libobjc.A.dylib/PAPixelFormat.h>
@class NSString;


@protocol PAPixelFormat <NSObject>
@property (readonly) NSString * name; 
@property (readonly) unsigned long long numberOfComponents; 
@property (readonly) unsigned long long bitsPerPixel; 
@property (readonly) unsigned long long bitsPerSample; 
@property (readonly) char hasAlpha; 
@required
-(NSString *)name;
-(unsigned long long)numberOfComponents;
-(unsigned long long)bitsPerSample;
-(unsigned long long)bitsPerPixel;
-(char)hasAlpha;
-(char)isEqualToPixelFormat:(id)arg1;

@end


@class NSString;

@interface PAPixelFormat : NSObject <PAPixelFormat> {

	PixelFormat* _format;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long numberOfComponents; 
@property (readonly) unsigned long long bitsPerPixel; 
@property (readonly) unsigned long long bitsPerSample; 
@property (readonly) char hasAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)outputFormatWithColorSpace:(CGColorSpaceRef)arg1 bitsPerSample:(unsigned long long)arg2 ;
+(id)outputFormatWithColorSpace:(CGColorSpaceRef)arg1 bitsPerSample:(unsigned long long)arg2 hasAlpha:(char)arg3 ;
+(id)inputFormatWithDGFormat:(int)arg1 ;
+(id)_pixelFormatWithDGFormat:(int)arg1 ;
+(id)BGRX8u;
+(id)BGRA8u;
+(id)RGB16u;
+(id)RGBA16u;
+(id)RGBA16h;
+(id)RGBA32f;
+(id)XRGB10u;
+(id)YpCbCr8u_422;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(unsigned long long)numberOfComponents;
-(unsigned long long)bitsPerSample;
-(unsigned long long)bitsPerPixel;
-(char)hasAlpha;
-(unsigned)CGBitmapInfo;
-(int)CIFormat;
-(id)initWithPixelFormat:(const PixelFormat*)arg1 ;
-(char)isEqualToPixelFormat:(id)arg1 ;
-(int)DGFormat;
@end

