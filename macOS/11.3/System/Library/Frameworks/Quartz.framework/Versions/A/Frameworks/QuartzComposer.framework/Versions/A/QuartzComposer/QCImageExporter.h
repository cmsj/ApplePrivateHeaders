/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <libobjc.A.dylib/QCImageExporter.h>

@protocol QCImageExporter
@required
+(id)exporterForImageManager:(id)arg1;
-(id)supportedRepresentationTypes;
-(id)createRepresentationOfType:(id)arg1 withProvider:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6;

@end


@class QCImageManager;

@interface QCImageExporter : NSObject <QCImageExporter> {

	QCImageManager* _manager;
	void** _unused[4];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)exporterForImageManager:(id)arg1 ;
-(id)description;
-(id)imageManager;
-(CGRect)boundsForProvider:(id)arg1 withTransformation:(id)arg2 ;
-(id)bestPixelFormatWithCompatibility:(unsigned long long)arg1 forProvider:(id)arg2 usingColorSpace:(CGColorSpace*)arg3 ;
-(id)supportedRepresentationTypes;
-(id)createRepresentationOfType:(id)arg1 withProvider:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)initWithImageManager:(id)arg1 ;
@end
