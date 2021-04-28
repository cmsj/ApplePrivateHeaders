/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData, CIContext;

@interface CISmartToneFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputExposure;
	NSNumber* inputContrast;
	NSNumber* inputBrightness;
	NSNumber* inputShadows;
	NSNumber* inputHighlights;
	NSNumber* inputBlack;
	NSNumber* inputRawHighlights;
	NSNumber* inputLocalLight;
	NSData* _inputLightMap;
	NSNumber* inputUseCube;
	id inputUseCubeColorSpace;
	CIImage* _cubeImage;
	NSData* _cubeData;
	CIContext* _cubeContext;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputExposure; 
@property (nonatomic,retain) NSNumber * inputContrast; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputShadows; 
@property (nonatomic,retain) NSNumber * inputHighlights; 
@property (nonatomic,retain) NSNumber * inputBlack; 
@property (nonatomic,retain) NSNumber * inputRawHighlights; 
@property (nonatomic,retain) NSNumber * inputLocalLight; 
@property (nonatomic,retain) NSData * inputLightMap;                     //@synthesize inputLightMap=_inputLightMap - In the implementation block
@property (nonatomic,retain) NSNumber * inputUseCube; 
@property (nonatomic,retain) id inputUseCubeColorSpace; 
+(id)customAttributes;
-(NSNumber *)inputUseCube;
-(id)inputUseCubeColorSpace;
-(void)setInputLightMap:(NSData *)arg1 ;
-(void)setInputUseCube:(NSNumber *)arg1 ;
-(void)setInputUseCubeColorSpace:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(char)_isIdentity;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputExposure:(NSNumber *)arg1 ;
-(NSNumber *)inputExposure;
-(NSNumber *)inputContrast;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(NSNumber *)inputBrightness;
-(void)setInputShadows:(NSNumber *)arg1 ;
-(NSNumber *)inputShadows;
-(void)setInputHighlights:(NSNumber *)arg1 ;
-(NSNumber *)inputHighlights;
-(void)setInputBlack:(NSNumber *)arg1 ;
-(NSNumber *)inputBlack;
-(void)setInputLocalLight:(NSNumber *)arg1 ;
-(NSNumber *)inputLocalLight;
-(void)setInputRawHighlights:(NSNumber *)arg1 ;
-(NSNumber *)inputRawHighlights;
-(NSData *)inputLightMap;
-(id)_kernelBneg;
-(id)_kernelBpos;
-(id)_kernelC;
-(id)_kernelH;
-(id)_kernelRH;
@end
