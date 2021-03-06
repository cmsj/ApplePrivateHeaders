/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSLock;

@interface ICScannerImageRep : NSObject {

	unsigned char _backgroundGrayValue;
	char _bufferUpdated;
	char _useOverlay;
	unsigned _bitmapInfo;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bitsPerComponent;
	unsigned long long _bitsPerPixel;
	unsigned long long _bytesPerRow;
	CGColorSpaceRef _colorspace;
	char* _buffer;
	long long _bufferSize;
	long long _bufferSizeUsed;
	NSLock* _bufferLock;
	char* _overlayBuffer;
	long long _overlayBufferSize;
	CGRect _overlayRect;

}

@property (nonatomic,retain) NSLock * bufferLock;                      //@synthesize bufferLock=_bufferLock - In the implementation block
@property (assign,nonatomic) char bufferUpdated;                       //@synthesize bufferUpdated=_bufferUpdated - In the implementation block
@property (assign,nonatomic) char useOverlay;                          //@synthesize useOverlay=_useOverlay - In the implementation block
@property (assign,nonatomic) CGRect overlayRectInternal;               //@synthesize overlayRect=_overlayRect - In the implementation block
@property (assign,nonatomic) char* overlayBuffer;                      //@synthesize overlayBuffer=_overlayBuffer - In the implementation block
@property (assign,nonatomic) long long overlayBufferSize;              //@synthesize overlayBufferSize=_overlayBufferSize - In the implementation block
@property (readonly) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long bitsPerComponent;              //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (readonly) unsigned long long bitsPerPixel;                  //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (readonly) unsigned long long bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (readonly) CGColorSpaceRef colorspace;                       //@synthesize colorspace=_colorspace - In the implementation block
@property (readonly) unsigned bitmapInfo;                              //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
@property (readonly) char* buffer;                                     //@synthesize buffer=_buffer - In the implementation block
@property (readonly) long long bufferSize;                             //@synthesize bufferSize=_bufferSize - In the implementation block
@property (readonly) long long bufferSizeUsed;                         //@synthesize bufferSizeUsed=_bufferSizeUsed - In the implementation block
@property (assign) unsigned char backgroundGrayValue;                  //@synthesize backgroundGrayValue=_backgroundGrayValue - In the implementation block
-(void)setBackgroundGrayValue:(unsigned char)arg1 ;
-(id)initWithBufferSize:(unsigned long long)arg1 andBytesPerRow:(unsigned long long)arg2 ;
-(void)clearOverviewImageBuffer;
-(void)setBufferSizeUsed:(long long)arg1 ;
-(unsigned long long)copyFromOffset:(long long)arg1 length:(unsigned long long)arg2 toBuffer:(char*)arg3 ;
-(void)copyToRow:(long long)arg1 numRows:(unsigned long long)arg2 fromRGBBuffer:(const char*)arg3 withBytesPerRow:(unsigned long long)arg4 ;
-(char)copyOverlayBuffer:(id)arg1 toRect:(CGRect)arg2 ;
-(CGImageRef)copyCGImage:(char*)arg1 ;
-(void)clearOverlay;
-(CGRect)overlayRectInternal;
-(void)setOverlayRectInternal:(CGRect)arg1 ;
-(long long)bufferSizeUsed;
-(unsigned char)backgroundGrayValue;
-(NSLock *)bufferLock;
-(void)setBufferLock:(NSLock *)arg1 ;
-(char)bufferUpdated;
-(void)setBufferUpdated:(char)arg1 ;
-(char*)overlayBuffer;
-(void)setOverlayBuffer:(char*)arg1 ;
-(long long)overlayBufferSize;
-(void)setOverlayBufferSize:(long long)arg1 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(char*)buffer;
-(unsigned long long)bytesPerRow;
-(unsigned long long)bitsPerPixel;
-(unsigned long long)bitsPerComponent;
-(unsigned)bitmapInfo;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(long long)bufferSize;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorspace;
-(void)setBitsPerPixel:(unsigned long long)arg1 ;
-(void)setBitsPerComponent:(unsigned long long)arg1 ;
-(void)setBitmapInfo:(unsigned)arg1 ;
-(CGRect)overlayRect;
-(void)setOverlayRect:(CGRect)arg1 ;
-(char)useOverlay;
-(void)setUseOverlay:(char)arg1 ;
@end

