/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, MLModel, NSNumber;

@interface CICoreMLModelFilter : CIFilter {

	CIImage* inputImage;
	MLModel* inputModel;
	NSNumber* inputHeadIndex;
	NSNumber* inputSoftmaxNormalization;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) MLModel * inputModel; 
@property (nonatomic,retain) NSNumber * inputHeadIndex; 
@property (nonatomic,retain) NSNumber * inputSoftmaxNormalization; 
+(id)customAttributes;
-(MLModel *)inputModel;
-(void)setInputModel:(MLModel *)arg1 ;
-(NSNumber *)inputHeadIndex;
-(void)setInputHeadIndex:(NSNumber *)arg1 ;
-(NSNumber *)inputSoftmaxNormalization;
-(void)setInputSoftmaxNormalization:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

