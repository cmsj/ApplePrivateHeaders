/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class SNDetectorHeadConfiguration, NSString;

@interface SNDetectorHead : NSObject <SNAnalyzing> {

	SNDetectorHeadConfiguration* _configuration;
	NSString* _detectorBoxName;
	shared_ptr<DSPGraph::Graph>* _graph;
	NSString* _inputFeatureName;
	NSString* _outputConfidenceFeatureName;
	NSString* _outputDetectedFeatureName;

}

@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)completeTimingInfoInResult:(id)arg1 windowLengthFrames:(unsigned)arg2 usingBox:(Box*)arg3 ;
-(id)initWithConfiguration:(id)arg1 ;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(char)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(void)primeGraph;
@end

