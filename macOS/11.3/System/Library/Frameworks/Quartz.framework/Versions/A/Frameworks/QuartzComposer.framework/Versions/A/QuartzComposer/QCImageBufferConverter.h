/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <libobjc.A.dylib/QCImageBufferConverter.h>

@protocol QCImageBufferConverter
@required
+(id)converterForImageManager:(id)arg1;
-(char)supportsCropping;
-(char)supportsTransformation;
-(id)supportedTextureBufferFormatsForFormat:(id)arg1;
-(id)createTextureBufferFromImageBuffer:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7;
-(id)supportedPixelBufferFormatsForFormat:(id)arg1;
-(id)createPixelBufferFromImageBuffer:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6;
-(char)supportsColorMatching;

@end


@class QCImageManager;

@interface QCImageBufferConverter : NSObject <QCImageBufferConverter> {

	QCImageManager* _manager;
	void** _unused[4];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)converterForImageManager:(id)arg1 ;
-(id)description;
-(id)imageManager;
-(char)supportsCropping;
-(char)supportsTransformation;
-(id)supportedTextureBufferFormatsForFormat:(id)arg1 ;
-(id)createTextureBufferFromImageBuffer:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(id)supportedPixelBufferFormatsForFormat:(id)arg1 ;
-(id)createPixelBufferFromImageBuffer:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(char)supportsColorMatching;
-(id)initWithImageManager:(id)arg1 ;
@end
