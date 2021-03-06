/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSArray, NSString;

@interface NSOperation : NSObject {

	SCD_Struct_NS57* _iop;

}

@property (getter=isCancelled,readonly) char cancelled; 
@property (getter=isExecuting,readonly) char executing; 
@property (getter=isFinished,readonly) char finished; 
@property (getter=isConcurrent,readonly) char concurrent; 
@property (getter=isAsynchronous,readonly) char asynchronous; 
@property (getter=isReady,readonly) char ready; 
@property (copy,readonly) NSArray * dependencies; 
@property (assign) long long queuePriority; 
@property (copy) id completionBlock; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingFinished;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingReady;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingExecuting;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingCancelled;
+(id)keyPathsForValuesAffectingIsCancelled;
+(id)currentOperation;
+(char)_removesDependenciesAfterFinish;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)init;
-(NSString *)name;
-(void)setObservationInfo:(void*)arg1 ;
-(void)waitUntilFinished;
-(void)setQueuePriority:(long long)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)start;
-(void)cancel;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(char)isCancelled;
-(void)main;
-(void*)observationInfo;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_implicitObservationInfo;
-(char)isFinished;
-(char)isExecuting;
-(char)isReady;
-(char)isConcurrent;
-(char)isAsynchronous;
-(NSArray *)dependencies;
-(id)__graphDescription:(unsigned long long)arg1 ;
-(long long)queuePriority;
-(double)threadPriority;
-(void)setThreadPriority:(double)arg1 ;
-(/*^block*/id)_copyCompletionBlock;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(long long)qualityOfService;
-(void)waitUntilFinishedOrTimeout:(double)arg1 ;
-(void)addDependency:(id)arg1 ;
-(void)removeDependency:(id)arg1 ;
-(void)removeAllDependencies;
@end

