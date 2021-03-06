/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKSQLitePool : NSObject {

	char _traced;
	char _drainScheduled;
	/*^block*/id _factory;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _dbs;

}

@property (nonatomic,retain) NSMutableArray * dbs;                            //@synthesize dbs=_dbs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char drainScheduled;                             //@synthesize drainScheduled=_drainScheduled - In the implementation block
@property (nonatomic,readonly) id factory;                                    //@synthesize factory=_factory - In the implementation block
@property (assign,nonatomic) char traced;                                     //@synthesize traced=_traced - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)traced;
-(void)setTraced:(char)arg1 ;
-(id)initWithFactory:(/*^block*/id)arg1 queueAttr:(id)arg2 ;
-(NSMutableArray *)dbs;
-(id)_openDatabaseWithError:(id*)arg1 ;
-(id)_acquireDatabaseWithError:(id*)arg1 ;
-(void)_scheduleDrain;
-(void)_closeDatabase:(id)arg1 ;
-(void)releaseDatabase:(id)arg1 ;
-(char)performWithDatabase:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)_drain;
-(id)initWithFactory:(/*^block*/id)arg1 ;
-(id)acquireDatabase:(char)arg1 ;
-(id)acquireDatabaseWithError:(id*)arg1 ;
-(void)closeAll;
-(void)performWithDatabase:(/*^block*/id)arg1 ;
-(id)factory;
-(void)setDbs:(NSMutableArray *)arg1 ;
-(char)drainScheduled;
-(void)setDrainScheduled:(char)arg1 ;
@end

