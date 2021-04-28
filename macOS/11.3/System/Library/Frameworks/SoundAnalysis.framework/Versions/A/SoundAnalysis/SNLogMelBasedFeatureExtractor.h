/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class SNSystemConfiguration, SNLogMelBasedFeatureExtractorConfiguration, NSString;

@interface SNLogMelBasedFeatureExtractor : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	SNSystemConfiguration* _systemConfiguration;
	SNLogMelBasedFeatureExtractorConfiguration* _configuration;
	long long _featurePrintType;

}

@property (assign,nonatomic) long long featurePrintType;                        //@synthesize featurePrintType=_featurePrintType - In the implementation block
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfiguration:(id)arg1 ;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(long long)featurePrintType;
-(void)setFeaturePrintType:(long long)arg1 ;
-(char)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
@end
