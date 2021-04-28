/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore, CUIRenditionKey;

@interface _CUIInternalLinkRendition : CUIThemeRendition {

	unsigned _nimages;
	CGRect _imageRect[16];
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;
	CGRect _frame;
	CUIStructuredThemeStore* _sourceProvider;
	CUIRenditionKey* _referenceKey;
	CGSize _originalUncroppedSize;
	CGRect _alphaCroppedFrame;

}
-(void)dealloc;
-(id)data;
-(int)pixelFormat;
-(char)isOpaque;
-(id)metrics;
-(id)properties;
-(CGRect)_destinationFrame;
-(CGRect)alphaCroppedRect;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGSize)originalUncroppedSize;
-(CGImageRef)unslicedImage;
-(id)linkingToRendition;
-(CGSize)unslicedSize;
-(id)imageForSliceIndex:(long long)arg1 ;
-(id)maskForSliceIndex:(long long)arg1 ;
-(id)sliceInformation;
-(char)isScaled;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)_sourceRendition;
-(int)bitmapEncoding;
-(char)isInternalLink;
-(char)isTiled;
-(char)edgesOnly;
@end
