/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLTBitmapFormat : NSObject <NSSecureCoding> {

	unsigned _bitmapInfo;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bitsPerComponent;
	unsigned long long _bitsPerPixel;
	unsigned long long _bytesPerRow;
	CGColorSpaceRef _colorSpace;

}

@property (assign) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (assign) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (assign) unsigned long long bitsPerComponent;              //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (assign) unsigned long long bitsPerPixel;                  //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign) unsigned long long bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign) unsigned bitmapInfo;                              //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
@property (retain) CGColorSpaceRef colorSpace;                       //@synthesize colorSpace=_colorSpace - In the implementation block
+(char)supportsSecureCoding;
+(id)bitmapFormatWithBitmapImage:(CGImageRef)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)bytesPerRow;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(unsigned long long)bitsPerPixel;
-(unsigned long long)bitsPerComponent;
-(unsigned)bitmapInfo;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(void)setBitsPerPixel:(unsigned long long)arg1 ;
-(char)isEqualToFormat:(id)arg1 ;
-(void)setBitsPerComponent:(unsigned long long)arg1 ;
-(void)setBitmapInfo:(unsigned)arg1 ;
-(id)initWithBitmapContext:(CGContextRef)arg1 ;
@end

