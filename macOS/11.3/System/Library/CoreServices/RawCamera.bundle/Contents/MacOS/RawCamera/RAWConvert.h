/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSArray, NSNumber, CIVector;

@interface RAWConvert : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSArray* inputNeutral;
	NSNumber* inputRange;
	NSNumber* inputFactor;
	NSNumber* inputCalibrationIlluminant1;
	NSNumber* inputCalibrationIlluminant2;
	NSArray* inputXYZtoCamera1;
	NSArray* inputXYZtoCamera2;
	NSArray* inputCameraCalibration1;
	NSArray* inputCameraCalibration2;
	NSArray* inputReduction1;
	NSArray* inputReduction2;
	NSArray* inputForwardMatrix1;
	NSArray* inputForwardMatrix2;
	NSNumber* inputShouldUseForwardMatrix;
	NSNumber* inputShouldRecoverHighlights;
	NSNumber* inputShouldLinearize;
	CIVector* inputBlacks;

}

@property (readonly) CCameraProfile* cameraProfile; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)outputImage;
-(id)blendFactor;
-(id)customAttributes;
-(CCameraProfile*)cameraProfile;
-(id)outputMatrix;
-(CWhitePoint)neutralWhitePointWithProfile:(CCameraProfile*)arg1 ;
-(void)setInputNeutral:(id)arg1 ;
-(CMatrix*)matrixFromArray:(id)arg1 rowCount:(unsigned long long)arg2 columnCount:(unsigned long long)arg3 ;
-(id)inputNeutralXY;
@end

