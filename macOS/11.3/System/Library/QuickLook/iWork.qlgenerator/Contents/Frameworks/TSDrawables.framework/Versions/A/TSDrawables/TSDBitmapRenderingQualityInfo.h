/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject {

	NSMutableDictionary* mImageMap;
	int mQuality;
	double mCanvasScale;

}

@property (nonatomic,readonly) int quality; 
@property (nonatomic,readonly) double canvasScale; 
-(int)quality;
-(double)canvasScale;
-(void)cacheProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(CGImageRef)degradedImageRefForProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(id)initWithQuality:(int)arg1 canvasScale:(double)arg2 ;
-(double)qualityScaleForSize:(CGSize)arg1 ;
-(Class)imageMapValueClass;
-(void)doneCaching:(id)arg1 forProvider:(id)arg2 ;
@end

