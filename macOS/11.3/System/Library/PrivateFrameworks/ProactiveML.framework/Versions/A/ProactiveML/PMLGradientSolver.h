/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PMLModelWeights, PMLSparseMatrix, PMLModelRegressor;

@interface PMLGradientSolver : NSObject {

	float _learningRate;
	float _stoppingThreshold;
	unsigned long long _minIterations;
	/*^block*/id _gradientCalculator;
	/*^block*/id _predictionCalculator;
	/*^block*/id _batchPredictionCalculator;
	char _intercept;
	PMLModelWeights* _weights;
	PMLSparseMatrix* _covariates;
	PMLModelRegressor* _objective;

}

@property (nonatomic,retain) PMLModelWeights * weights;                  //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain) PMLSparseMatrix * covariates;               //@synthesize covariates=_covariates - In the implementation block
@property (nonatomic,retain) PMLModelRegressor * objective;              //@synthesize objective=_objective - In the implementation block
@property (assign,nonatomic) char intercept;                             //@synthesize intercept=_intercept - In the implementation block
-(id)init;
-(PMLModelWeights *)weights;
-(void)setWeights:(PMLModelWeights *)arg1 ;
-(float)predict:(id)arg1 ;
-(PMLModelRegressor *)objective;
-(char)intercept;
-(void)setObjective:(PMLModelRegressor *)arg1 ;
-(void)setIntercept:(char)arg1 ;
-(id)initWithLearningRate:(float)arg1 minIterations:(unsigned long long)arg2 stoppingThreshold:(float)arg3 weights:(id)arg4 intercept:(char)arg5 gradientCalculator:(/*^block*/id)arg6 predictionCalculator:(/*^block*/id)arg7 batchPredictionCalculator:(/*^block*/id)arg8 ;
-(void)solve;
-(id)computeAvgGradientWithIterations:(unsigned long long)arg1 ;
-(void)setCovariates:(PMLSparseMatrix *)arg1 ;
-(void)solveWithAvgGradient:(float*)arg1 maxNumberOfIterations:(unsigned long long)arg2 ;
-(id)batchPredict:(id)arg1 ;
-(void)solveForCovariates:(id)arg1 objectives:(id)arg2 ;
-(PMLSparseMatrix *)covariates;
@end

