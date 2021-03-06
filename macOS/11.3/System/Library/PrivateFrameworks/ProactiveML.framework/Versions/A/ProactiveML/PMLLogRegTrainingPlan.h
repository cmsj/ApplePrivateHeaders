/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLPlanProtocol.h>

@protocol PMLLogRegTrackerProtocol, PMLNoiseStrategy, PMLTransformerProtocol;
@class PMLTrainingStore, PMLSessionDescriptor, PMLModelWeights, NSArray, NSString;

@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol> {

	PMLTrainingStore* _store;
	id<PMLLogRegTrackerProtocol> _tracker;
	id<PMLNoiseStrategy> _noiseStrategy;
	PMLSessionDescriptor* _sessionDescriptor;
	unsigned long long _maxSessionsLimit;
	unsigned long long _sessionsInBatch;
	unsigned long long _currentServerIteration;
	PMLModelWeights* _currentModelWeights;
	unsigned long long _localGradientIterations;
	float _localLearningRate;
	float _stoppingThreshold;
	unsigned long long _localMinimumIterations;
	char _useOnlyAppleInternalSessions;
	double _skew;
	double _threshold;
	char _isMultiLabel;
	unsigned long long _positiveLabel;
	unsigned long long _evaluationLevel;
	char _reportScale;
	id<PMLTransformerProtocol> _transformer;
	NSArray* _refeaturizationDescriptors;
	char _intercept;
	NSString* _planId;

}

@property (nonatomic,readonly) PMLTrainingStore * store;                                //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<PMLLogRegTrackerProtocol> tracker;                    //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) unsigned long long currentServerIteration;               //@synthesize currentServerIteration=_currentServerIteration - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;                //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSessionsLimit;                     //@synthesize maxSessionsLimit=_maxSessionsLimit - In the implementation block
@property (nonatomic,readonly) PMLModelWeights * currentModelWeights;                   //@synthesize currentModelWeights=_currentModelWeights - In the implementation block
@property (nonatomic,readonly) float localLearningRate;                                 //@synthesize localLearningRate=_localLearningRate - In the implementation block
@property (nonatomic,readonly) float stoppingThreshold;                                 //@synthesize stoppingThreshold=_stoppingThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long localMinimumIterations;               //@synthesize localMinimumIterations=_localMinimumIterations - In the implementation block
@property (nonatomic,readonly) unsigned long long localGradientIterations;              //@synthesize localGradientIterations=_localGradientIterations - In the implementation block
@property (nonatomic,readonly) char useOnlyAppleInternalSessions;                       //@synthesize useOnlyAppleInternalSessions=_useOnlyAppleInternalSessions - In the implementation block
@property (nonatomic,readonly) char isMultiLabel;                                       //@synthesize isMultiLabel=_isMultiLabel - In the implementation block
@property (nonatomic,readonly) unsigned long long positiveLabel;                        //@synthesize positiveLabel=_positiveLabel - In the implementation block
@property (nonatomic,readonly) char intercept;                                          //@synthesize intercept=_intercept - In the implementation block
@property (nonatomic,readonly) unsigned long long evaluationLevel;                      //@synthesize evaluationLevel=_evaluationLevel - In the implementation block
@property (nonatomic,readonly) char reportScale;                                        //@synthesize reportScale=_reportScale - In the implementation block
@property (nonatomic,readonly) id<PMLTransformerProtocol> transformer;                  //@synthesize transformer=_transformer - In the implementation block
@property (nonatomic,readonly) NSArray * refeaturizationDescriptors;                    //@synthesize refeaturizationDescriptors=_refeaturizationDescriptors - In the implementation block
@property (nonatomic,readonly) NSString * planId;                                       //@synthesize planId=_planId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)planWithStore:(id)arg1 tracker:(id)arg2 sessionDescriptor:(id)arg3 arguments:(id)arg4 ;
-(NSString *)description;
-(id)init;
-(PMLTrainingStore *)store;
-(char)intercept;
-(id<PMLTransformerProtocol>)transformer;
-(id<PMLLogRegTrackerProtocol>)tracker;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)runWithError:(id*)arg1 ;
-(NSString *)planId;
-(unsigned long long)maxSessionsLimit;
-(unsigned long long)evaluationLevel;
-(id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(id)arg4 sessionDescriptor:(id)arg5 maxSessionsLimit:(unsigned long long)arg6 sessionsInBatch:(unsigned long long)arg7 currentServerIteration:(unsigned long long)arg8 currentModelWeights:(id)arg9 localLearningRate:(float)arg10 stoppingThreshold:(float)arg11 localMinimumIterations:(unsigned long long)arg12 localGradientIterations:(unsigned long long)arg13 useOnlyAppleInternalSessions:(char)arg14 skew:(double)arg15 threshold:(double)arg16 isMultiLabel:(char)arg17 intercept:(char)arg18 positiveLabel:(unsigned long long)arg19 evaluationLevel:(unsigned long long)arg20 reportScale:(char)arg21 transformer:(id)arg22 refeaturizationDescriptors:(id)arg23 ;
-(id)evaluationMetricsForPredictions:(id)arg1 objectives:(id)arg2 predicate:(/*^block*/id)arg3 start:(id)arg4 ;
-(void)loadSessionsWithBlock:(/*^block*/id)arg1 ;
-(id)normalizeRegressor:(id)arg1 ;
-(unsigned long long)currentServerIteration;
-(PMLModelWeights *)currentModelWeights;
-(float)localLearningRate;
-(float)stoppingThreshold;
-(unsigned long long)localMinimumIterations;
-(unsigned long long)localGradientIterations;
-(char)useOnlyAppleInternalSessions;
-(char)isMultiLabel;
-(unsigned long long)positiveLabel;
-(char)reportScale;
-(NSArray *)refeaturizationDescriptors;
@end

