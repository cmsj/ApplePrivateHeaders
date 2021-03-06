/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNDetectRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign,nonatomic) unsigned long long requiredVersion; 
@property (assign,nonatomic) float minimumAspectRatio; 
@property (assign,nonatomic) float maximumAspectRatio; 
@property (assign,nonatomic) float quadratureTolerance; 
@property (assign,nonatomic) float minimumSize; 
@property (assign,nonatomic) float minimumConfidence; 
@property (assign,nonatomic) unsigned long long maximumObservations; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
-(float)minimumSize;
-(void)setMinimumSize:(float)arg1 ;
-(float)minimumConfidence;
-(void)setMinimumConfidence:(float)arg1 ;
-(unsigned long long)requiredVersion;
-(void)setRequiredVersion:(unsigned long long)arg1 ;
-(long long)dependencyProcessingOrdinality;
-(char)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(NSArray *)supportedImageSizeSet;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(void)setSortedResults:(id)arg1 ;
-(float)minimumAspectRatio;
-(void)setMinimumAspectRatio:(float)arg1 ;
-(float)maximumAspectRatio;
-(void)setMaximumAspectRatio:(float)arg1 ;
-(float)quadratureTolerance;
-(void)setQuadratureTolerance:(float)arg1 ;
-(unsigned long long)maximumObservations;
-(void)setMaximumObservations:(unsigned long long)arg1 ;
@end

