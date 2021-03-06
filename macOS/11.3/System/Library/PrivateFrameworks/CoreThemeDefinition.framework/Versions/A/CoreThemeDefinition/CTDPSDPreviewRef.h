/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreUI/CUIPSDImageRef.h>

@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef {

	PSDImageInfo _imageInfo;
	long long _layerCount;
	long long _sliceCount;
	long long _columnWidth;
	long long _rowHeight;
	NSArray* _layerIndexLayout;
	long long _sliceRowCount;
	long long _sliceColumnCount;
	NSArray* _sliceRects;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(long long)sliceRowCount;
-(long long)sliceColumnCount;
-(void)evaluateSliceGrid;
-(id)createImageOfGradientAtLayer:(unsigned)arg1 ;
-(id)createImageFromVerticalSlices:(id)arg1 horizontalSliceCount:(unsigned)arg2 atLayer:(unsigned)arg3 ;
-(id)createSlicedImageAtLayer:(unsigned)arg1 overlayAlphaChannel:(long long)arg2 ;
-(char)hasRegularSliceGrid;
-(long long)numberOfAlphaChannels;
-(char)hasGradient;
-(long long)numberOfGradientLayers;
-(id)imagePreviewAtLayer:(unsigned)arg1 overlayAlphaChannel:(long long)arg2 ;
-(id)createSlicedImageAtLayer:(unsigned)arg1 ;
-(long long)indexOfDrawingLayerType:(long long)arg1 ;
@end

