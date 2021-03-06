/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNStatefulRequest.h>

@class VNTrajectoryProcessor, NSArray;

@interface VNDetectTrajectoriesRequest : VNStatefulRequest {

	VNTrajectoryProcessor* _trajectoryProcessor;
	float _objectMaximumNormalizedRadius;

}

@property (readonly) long long trajectoryLength; 
@property (assign,nonatomic) float objectMinimumNormalizedRadius; 
@property (assign,nonatomic) float minimumObjectSize; 
@property (assign,nonatomic) float objectMaximumNormalizedRadius;              //@synthesize objectMaximumNormalizedRadius=_objectMaximumNormalizedRadius - In the implementation block
@property (assign,nonatomic) float maximumObjectSize; 
@property (copy,readonly) NSArray * results; 
+(Class)configurationClass;
+(char)setsTimeRangeOnResults;
-(char)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(id)newDefaultRequestInstance;
-(long long)trajectoryLength;
-(float)objectMinimumNormalizedRadius;
-(void)setObjectMinimumNormalizedRadius:(float)arg1 ;
-(float)objectMaximumNormalizedRadius;
-(void)setObjectMaximumNormalizedRadius:(float)arg1 ;
-(id)initWithFrameAnalysisSpacing:(SCD_Struct_VN19)arg1 trajectoryLength:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setobjectMaximumNormalizedRadius:(float)arg1 ;
-(float)minimumObjectSize;
-(void)setMinimumObjectSize:(float)arg1 ;
-(float)maximumObjectSize;
-(void)setMaximumObjectSize:(float)arg1 ;
@end

