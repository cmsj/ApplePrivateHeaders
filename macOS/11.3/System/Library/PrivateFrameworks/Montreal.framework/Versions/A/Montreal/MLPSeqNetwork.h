/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Versions/A/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/MLPNetwork.h>
#import <libobjc.A.dylib/MLPLearningRateDecayHandlerDelegate.h>

@class MLPLearningRateDecayHandler, NSString;

@interface MLPSeqNetwork : MLPNetwork <MLPLearningRateDecayHandlerDelegate> {

	MLPLearningRateDecayHandler* _seqLearningRateDecayHandler;

}

@property (retain) MLPLearningRateDecayHandler * seqLearningRateDecayHandler;              //@synthesize seqLearningRateDecayHandler=_seqLearningRateDecayHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLayers:(id)arg1 ;
-(void)setOptimizerParams:(id)arg1 ;
-(void)createLayerKernels;
-(void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(/*^block*/id)arg4 semaphore:(id)arg5 ;
-(unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4 ;
-(id)computeInference:(id)arg1 ;
-(void)setSeqLearningRateDecayHandler:(MLPLearningRateDecayHandler *)arg1 ;
-(MLPLearningRateDecayHandler *)seqLearningRateDecayHandler;
-(float)computeLoss:(id)arg1 ;
-(void)decayHandler:(id)arg1 didUpdateLearningRate:(float)arg2 ;
@end

