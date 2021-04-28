/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSMutableArray, NSDictionary;

@interface AVCaptureStillImageOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* stillImageRequests;
	char squareCropEnabled;
	CGSize previewImageSize;
	unsigned imageDataFormatType;
	float jpegQuality;
	char jpegQualitySpecified;
	char noiseReductionEnabled;
	NSDictionary* outputSettings;
	char isCapturingPhoto;
	char SISSupported;
	char SISEnabled;
	char SISActive;
	char highResStillEnabled;
	unsigned shutterSoundID;
	SCD_Struct_AV40 preparedBracket;
	NSMutableArray* prepareRequests;
	unsigned long long maxBracketedCaptureCount;
	char lensStabilizationDuringBracketedCaptureSupported;
	char lensStabilizationDuringBracketedCaptureEnabled;
	char bravoImageFusionSupported;

}
-(void)dealloc;
-(id)init;
@end
