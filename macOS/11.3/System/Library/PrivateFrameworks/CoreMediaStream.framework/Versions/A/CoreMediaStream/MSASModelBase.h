/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/Versions/A/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSString, NSObject;

@interface MSASModelBase : NSObject {

	char _dbWasRecreated;
	sqlite3Ref _db;
	NSString* _personID;
	CFDictionaryRef _statements;
	NSObject*<OS_dispatch_queue> _statementQueue;
	NSObject*<OS_dispatch_queue> _dbQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statementQueue;              //@synthesize statementQueue=_statementQueue - In the implementation block
@property (assign,nonatomic) CFDictionaryRef statements;                               //@synthesize statements=_statements - In the implementation block
@property (nonatomic,readonly) sqlite3Ref dbQueueDB;                                   //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) NSString * personID;                                    //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dbQueue;                   //@synthesize dbQueue=_dbQueue - In the implementation block
@property (assign,nonatomic) char dbWasRecreated;                                      //@synthesize dbWasRecreated=_dbWasRecreated - In the implementation block
-(void)beginTransaction;
-(void)endTransaction;
-(sqlite3Ref)db;
-(NSString *)personID;
-(CFDictionaryRef)statements;
-(NSObject*<OS_dispatch_queue>)statementQueue;
-(void)setStatements:(CFDictionaryRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)dbQueue;
-(void)shutDownForDestruction:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)persistentObjectForKey:(id)arg1 ;
-(void)setPersistentObject:(id)arg1 forKey:(id)arg2 ;
-(char)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(id)initWithPersonID:(id)arg1 databasePath:(id)arg2 currentVersion:(int)arg3 ;
-(void)dbQueueInitializeDatabasePath:(id)arg1 currentVersion:(int)arg2 ;
-(sqlite3_stmtRef)statementForString:(id)arg1 ;
-(id)persistentStringForKey:(id)arg1 ;
-(void)setPersistentString:(id)arg1 forKey:(id)arg2 ;
-(void)deletePersistentValueWithKey:(id)arg1 ;
-(id)dbQueuePersistentDataForKey:(id)arg1 ;
-(id)dbQueuePersistentStringForKey:(id)arg1 ;
-(id)dbQueuePersistentObjectForKey:(id)arg1 ;
-(void)dbQueueSetPersistentData:(id)arg1 forKey:(id)arg2 ;
-(void)dbQueueSetPersistentString:(id)arg1 forKey:(id)arg2 ;
-(void)dbQueueSetPersistentObject:(id)arg1 forKey:(id)arg2 ;
-(void)dbQueueDeletePersistentValueWithKey:(id)arg1 ;
-(void)dbQueueBeginTransaction;
-(void)dbQueueEndTransaction;
-(void)dbQueueRollbackTransaction;
-(sqlite3Ref)dbQueueDB;
-(void)setStatementQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)dbWasRecreated;
-(void)setDbWasRecreated:(char)arg1 ;
@end

