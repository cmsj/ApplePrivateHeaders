/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSData, NSDictionary;

@interface AVCameraCalibrationDataInternal : NSObject {

	SCD_Struct_AV43 intrinsicMatrix;
	CGSize intrinsicMatrixReferenceDimensions;
	SCD_Struct_AV44 extrinsicMatrix;
	float pixelSize;
	NSData* lensDistortionCoefficients;
	NSData* inverseLensDistortionCoefficients;
	CGPoint lensDistortionCenter;
	NSData* lensDistortionLookupTable;
	NSData* inverseLensDistortionLookupTable;
	NSDictionary* cameraCalibrationDataDictionary;

}
@end
