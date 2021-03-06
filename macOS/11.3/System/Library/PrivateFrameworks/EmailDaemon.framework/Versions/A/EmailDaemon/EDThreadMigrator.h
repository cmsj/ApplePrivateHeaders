/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol EFScheduler, EDThreadMigratorDelegate;
@class EMThreadScope, EFLocked, EDThreadPersistence, EDInMemoryThreadQueryHandler, NSString;

@interface EDThreadMigrator : NSObject <EFLoggable> {

	EMThreadScope* _threadScope;
	EFLocked* _state;
	id<EFScheduler> _workScheduler;
	EDThreadPersistence* _threadPersistence;
	EDInMemoryThreadQueryHandler* _queryHandler;
	id<EDThreadMigratorDelegate> _delegate;
	double _threadFinalizationInterval;

}

@property (nonatomic,readonly) EMThreadScope * threadScope;                               //@synthesize threadScope=_threadScope - In the implementation block
@property (nonatomic,readonly) EFLocked * state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> workScheduler;                             //@synthesize workScheduler=_workScheduler - In the implementation block
@property (nonatomic,readonly) EDThreadPersistence * threadPersistence;                   //@synthesize threadPersistence=_threadPersistence - In the implementation block
@property (nonatomic,readonly) EDInMemoryThreadQueryHandler * queryHandler;               //@synthesize queryHandler=_queryHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<EDThreadMigratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double threadFinalizationInterval;                           //@synthesize threadFinalizationInterval=_threadFinalizationInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id<EDThreadMigratorDelegate>)delegate;
-(EFLocked *)state;
-(void)start;
-(void)reset;
-(void)cancel;
-(id<EFScheduler>)workScheduler;
-(EDThreadPersistence *)threadPersistence;
-(EMThreadScope *)threadScope;
-(void)_finishMigrating;
-(void)_migrateNextBatchWithGeneration:(unsigned long long)arg1 ;
-(EDInMemoryThreadQueryHandler *)queryHandler;
-(void)_scheduleFinalizationForBatchedObjectIDs:(id)arg1 withGeneration:(unsigned long long)arg2 forDelete:(char)arg3 ;
-(void)_failMigration;
-(double)threadFinalizationInterval;
-(id)initWithThreadScope:(id)arg1 threadPersistence:(id)arg2 queryHandler:(id)arg3 delegate:(id)arg4 ;
-(void)addObjectIDsToMigrate:(id)arg1 ;
-(void)changeObjectIDsToMigrate:(id)arg1 ;
-(void)deleteObjectIDsToMigrate:(id)arg1 ;
-(void)setThreadFinalizationInterval:(double)arg1 ;
@end

