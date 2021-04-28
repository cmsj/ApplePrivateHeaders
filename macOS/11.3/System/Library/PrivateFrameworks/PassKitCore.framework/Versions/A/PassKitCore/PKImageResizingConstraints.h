/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKImageResizingConstraints : NSObject {

	int _constraintType;
	double _fixedDimension;
	CGSize _size;
	double _minAspectRatio;
	double _maxAspectRatio;
	char _respectAspectRatioRange;
	char _outputMirrored;
	double _outputScale;
	double _outputBorderTrim;
	double _outputCornerRadius;

}

@property (assign,nonatomic) double outputScale;                     //@synthesize outputScale=_outputScale - In the implementation block
@property (assign,nonatomic) double outputBorderTrim;                //@synthesize outputBorderTrim=_outputBorderTrim - In the implementation block
@property (assign,nonatomic) double outputCornerRadius;              //@synthesize outputCornerRadius=_outputCornerRadius - In the implementation block
@property (assign,nonatomic) char outputMirrored;                    //@synthesize outputMirrored=_outputMirrored - In the implementation block
+(id)constraintsWithAspectFillToSize:(CGSize)arg1 ;
+(id)constraintsWithFixedWidth:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithFixedHeight:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithFixedLargeDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithFixedSmallDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithMaxSize:(CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithMinSize:(CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithMaxSize:(CGSize)arg1 ;
+(id)constraintsWithMinSize:(CGSize)arg1 ;
+(id)constraintsWithFixedSize:(CGSize)arg1 ;
+(id)constraintsWithAspectFitToSize:(CGSize)arg1 ;
-(id)init;
-(char)getPixelCropRect:(CGRect*)arg1 pixelOutputSize:(CGSize*)arg2 forImage:(id)arg3 ;
-(double)outputScale;
-(char)outputMirrored;
-(id)resizedImage:(id)arg1 ;
-(CGRect)_getDrawRectForImage:(CGImageRef)arg1 withOutputSize:(CGSize)arg2 ;
-(char)_getPixelCropRect:(CGRect*)arg1 pixelOutputSize:(CGSize*)arg2 forImageSize:(CGSize)arg3 scale:(double)arg4 ;
-(id)_flippedConstraints;
-(void)setOutputScale:(double)arg1 ;
-(char)_reasonable;
-(double)outputBorderTrim;
-(void)setOutputBorderTrim:(double)arg1 ;
-(double)outputCornerRadius;
-(void)setOutputCornerRadius:(double)arg1 ;
-(void)setOutputMirrored:(char)arg1 ;
@end
