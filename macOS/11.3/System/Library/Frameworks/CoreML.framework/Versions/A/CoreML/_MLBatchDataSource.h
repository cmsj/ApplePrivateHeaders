/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ETDataProvider.h>

@protocol MLBatchProvider;
@class MLNeuralNetworkEngine, NSString;

@interface _MLBatchDataSource : NSObject <ETDataProvider> {

	char _useForPrediction;
	id<MLBatchProvider> _batchProvider;
	MLNeuralNetworkEngine* _nnEngine;

}

@property (nonatomic,readonly) id<MLBatchProvider> batchProvider;              //@synthesize batchProvider=_batchProvider - In the implementation block
@property (nonatomic,readonly) MLNeuralNetworkEngine * nnEngine;               //@synthesize nnEngine=_nnEngine - In the implementation block
@property (nonatomic,readonly) char useForPrediction;                          //@synthesize useForPrediction=_useForPrediction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfDataPoints;
-(id)initWithMLBatchProvider:(id)arg1 forPrediction:(char)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
-(id<MLBatchProvider>)batchProvider;
-(MLNeuralNetworkEngine *)nnEngine;
-(char)useForPrediction;
@end
