/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIPerspectiveAutoCalc.h>

@class CIImage;

@interface CIPerspectiveAutoCalcV1 : CIPerspectiveAutoCalc {

	float3x3 K;
	float3x3 invK;
	float3x3 T;
	float3x3 invT;
	CIImage* gradMap;
	unsigned long long gradMapW;
	unsigned long long gradMapH;
	* gradMapBmp;
	unsigned long long gradMapRb;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>>* vLines;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>>* hLines;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>>* vLineCluster;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>>* hLineCluster;
	BOOL vGuidesValid;
	BOOL hGuidesValid;
	float vGuidesAOE;
	float hGuidesAOE;
	SCD_Struct_CI8 vGuide0;
	SCD_Struct_CI8 vGuide1;
	SCD_Struct_CI8 hGuide0;
	SCD_Struct_CI8 hGuide1;
	PseudoRand pseudoRando;
	float rX;
	float rY;
	float rZ;
	float pitchCorrectionAreaCoverage;
	float yawCorrectionAreaCoverage;
	double minimumPitchCorrectionAreaCoverage;
	double minimumYawCorrectionAreaCoverage;

}

@property (assign) double minimumPitchCorrectionAreaCoverage; 
@property (assign) double minimumYawCorrectionAreaCoverage; 
@property (readonly) float pitchCorrectionAreaCoverage; 
@property (readonly) float yawCorrectionAreaCoverage; 
-(id)initWithContext:(id)arg1 image:(id)arg2 config:(const SCD_Struct_CI31*)arg3 ;
-(void)standardizeImage;
-(void)createGradientMap;
-(void)normalizeGradientMap;
-(void)thresholdGradientMap;
-(void)extractLineSegments;
-(void)clusterLineSegments;
-(void)setMinimumPitchCorrectionAreaCoverage:(double)arg1 ;
-(void)setMinimumYawCorrectionAreaCoverage:(double)arg1 ;
-(float)pitchCorrectionAreaCoverage;
-(float)yawCorrectionAreaCoverage;
-(void)rangeLimitGradientMap;
-(void)computeGuides;
-(double)minimumPitchCorrectionAreaCoverage;
-(double)minimumYawCorrectionAreaCoverage;
-(void)dealloc;
-(double)confidence;
-(BOOL)compute;
-(void)computeTransform;
@end

