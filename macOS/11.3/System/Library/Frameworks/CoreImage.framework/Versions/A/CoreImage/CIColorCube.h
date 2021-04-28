/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter {

	CIImage* inputImage;
	NSNumber* inputCubeDimension;
	NSData* inputCubeData;
	CIImage* _cubeImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputCubeDimension; 
@property (nonatomic,copy) NSData * inputCubeData; 
+(id)customAttributes;
-(char)_checkInputs;
-(id)cubeImage;
-(id)_kernelOpaque;
-(void)setInputCubeData:(NSData *)arg1 ;
-(NSNumber *)inputCubeDimension;
-(void)setInputCubeDimension:(NSNumber *)arg1 ;
-(NSData *)inputCubeData;
-(void)dealloc;
-(id)outputImage;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end
