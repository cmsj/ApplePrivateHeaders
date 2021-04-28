/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureSourceCompanionFormat : NSObject {

	int _formatIndex;
	SCD_Struct_BW12 _fesDimensions;
	SCD_Struct_BW12 _fesInputCropDimensions;
	SCD_Struct_BW12 _outputCropDimensionsWhenFesIsEnabled;
	SCD_Struct_BW12 _sensorCropDimensions;
	SCD_Struct_BW12 _highQualitySensorDimensions;
	SCD_Struct_BW12 _postGDCCropDimensions;
	SCD_Struct_BW12 _geometricDistortionCorrectedNativeDimensions;
	char _sifrEnabled;

}

@property (readonly) int formatIndex;                                                           //@synthesize formatIndex=_formatIndex - In the implementation block
@property (readonly) SCD_Struct_BW12 fesDimensions;                                             //@synthesize fesDimensions=_fesDimensions - In the implementation block
@property (readonly) SCD_Struct_BW12 fesInputCropDimensions;                                    //@synthesize fesInputCropDimensions=_fesInputCropDimensions - In the implementation block
@property (readonly) SCD_Struct_BW12 outputCropDimensionsWhenFesIsEnabled;                      //@synthesize outputCropDimensionsWhenFesIsEnabled=_outputCropDimensionsWhenFesIsEnabled - In the implementation block
@property (readonly) SCD_Struct_BW12 sensorCropDimensions;                                      //@synthesize sensorCropDimensions=_sensorCropDimensions - In the implementation block
@property (readonly) SCD_Struct_BW12 postGDCCropDimensions;                                     //@synthesize postGDCCropDimensions=_postGDCCropDimensions - In the implementation block
@property (readonly) SCD_Struct_BW12 highQualitySensorDimensions;                               //@synthesize highQualitySensorDimensions=_highQualitySensorDimensions - In the implementation block
@property (readonly) SCD_Struct_BW12 geometricDistortionCorrectedNativeDimensions;              //@synthesize geometricDistortionCorrectedNativeDimensions=_geometricDistortionCorrectedNativeDimensions - In the implementation block
@property (readonly) char sifrEnabled;                                                          //@synthesize sifrEnabled=_sifrEnabled - In the implementation block
-(void)dealloc;
-(id)description;
-(int)formatIndex;
-(SCD_Struct_BW12)sensorCropDimensions;
-(SCD_Struct_BW12)postGDCCropDimensions;
-(id)initWithCompanionFormatDictionary:(id)arg1 ;
-(SCD_Struct_BW12)fesDimensions;
-(SCD_Struct_BW12)geometricDistortionCorrectedNativeDimensions;
-(SCD_Struct_BW12)fesInputCropDimensions;
-(SCD_Struct_BW12)outputCropDimensionsWhenFesIsEnabled;
-(char)sifrEnabled;
-(SCD_Struct_BW12)highQualitySensorDimensions;
@end
