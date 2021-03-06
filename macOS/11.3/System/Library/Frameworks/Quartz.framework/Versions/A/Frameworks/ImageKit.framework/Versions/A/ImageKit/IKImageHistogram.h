/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class IKScanUIControllerAdvanced;

@interface IKImageHistogram : NSView {

	IKScanUIControllerAdvanced* _scanUIController;
	CGRect _selectionRectInch;
	CGRect _selectionRectPixels;
	char _isGray;
	char _isDirty;
	char _updating;
	CGImageRef _image;
	unsigned long long _histA[256];
	unsigned long long _histR[256];
	unsigned long long _histG[256];
	unsigned long long _histB[256];
	unsigned long long* _histogram[4];

}

@property (assign) IKScanUIControllerAdvanced * scanUIController;              //@synthesize scanUIController=_scanUIController - In the implementation block
@property (assign) char isGray;                                                //@synthesize isGray=_isGray - In the implementation block
-(void)updateHistogram;
-(IKScanUIControllerAdvanced *)scanUIController;
-(void)setScanUIController:(IKScanUIControllerAdvanced *)arg1 ;
-(char)isGray;
-(void)updateCGImage;
-(void)update_vImageBufferFromImageGray:(CGImageRef)arg1 ;
-(void)update_vImageBufferFromImageRGB:(CGImageRef)arg1 ;
-(void)update_vImageBufferFromImage:(CGImageRef)arg1 ;
-(void)setIsGray:(char)arg1 ;
-(void)dealloc;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)fittingSize;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSelectionRect:(CGRect)arg1 ;
@end

