/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {

	NSMutableArray* _originalRequests;
	NSMutableDictionary* _kindToOriginalRequestsMapping;
	NSMutableDictionary* _detectorConfigurationOptions;

}
-(id)init;
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(id)detectorConfigurationOptions;
-(id)originalRequests;
-(char)preferBackgroundProcessing;
-(id)processingDevice;
-(void)addOriginalRequest:(id)arg1 forKind:(unsigned long long)arg2 ;
-(void)enumerateOriginalRequestsByKindUsingBlock:(/*^block*/id)arg1 ;
@end

