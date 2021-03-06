/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, _CSIRenditionBlockData, NSMutableArray;

@interface _CUIThemePixelRendition : CUIThemeRendition {

	unsigned _nimages;
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;
	_CSIRenditionBlockData* _cachedBlockDataBGRX;
	_CSIRenditionBlockData* _cachedBlockDataRGBX;
	_CSIRenditionBlockData* _cachedBlockDataGray;
	unsigned long long _sourceRowbytes;
	NSMutableArray* _layers;
	CGSize _unslicedSize;

}
-(void)dealloc;
-(int)pixelFormat;
-(id)metrics;
-(id)layerReferences;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGImageRef)unslicedImage;
-(unsigned long long)sourceRowbytes;
-(CGSize)unslicedSize;
-(id)imageForSliceIndex:(long long)arg1 ;
-(id)maskForSliceIndex:(long long)arg1 ;
-(id)sliceInformation;
-(char)isScaled;
-(char)isTiled;
-(char)edgesOnly;
-(id)copySharedBlockDataWithPixelFormat:(int)arg1 ;
-(void)setSharedBlockData:(id)arg1 ;
@end

