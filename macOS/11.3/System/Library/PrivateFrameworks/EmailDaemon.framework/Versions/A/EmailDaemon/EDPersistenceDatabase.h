/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDPersistenceDatabaseConnectionPoolDelegate.h>
#import <libobjc.A.dylib/EDPersistenceDatabaseConnectionDelegate.h>

@class EFSQLSchema, EFSQLPropertyMapper, EDPersistenceDatabaseConnectionPool, EDProtectedDatabasePersistence, NSString;

@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionPoolDelegate, EDPersistenceDatabaseConnectionDelegate> {

	char _setupIsComplete;
	EFSQLSchema* _schema;
	EFSQLSchema* _protectedSchema;
	EFSQLPropertyMapper* _propertyMapper;
	EDPersistenceDatabaseConnectionPool* _connectionPool;
	EDProtectedDatabasePersistence* _protectedDatabasePersistence;
	NSString* _basePath;
	NSString* _databaseName;
	NSString* _fullPath;

}

@property (nonatomic,readonly) EDProtectedDatabasePersistence * protectedDatabasePersistence;              //@synthesize protectedDatabasePersistence=_protectedDatabasePersistence - In the implementation block
@property (nonatomic,readonly) NSString * basePath;                                                        //@synthesize basePath=_basePath - In the implementation block
@property (nonatomic,readonly) NSString * databaseName;                                                    //@synthesize databaseName=_databaseName - In the implementation block
@property (nonatomic,readonly) NSString * fullPath;                                                        //@synthesize fullPath=_fullPath - In the implementation block
@property (nonatomic,readonly) char databaseIsCorrupt; 
@property (nonatomic,readonly) char enforceDataProtection; 
@property (assign) char setupIsComplete;                                                                   //@synthesize setupIsComplete=_setupIsComplete - In the implementation block
@property (nonatomic,readonly) char isNestedDatabaseCall; 
@property (nonatomic,readonly) char writersAreWaiting; 
@property (nonatomic,readonly) EFSQLSchema * schema;                                                       //@synthesize schema=_schema - In the implementation block
@property (nonatomic,readonly) EFSQLSchema * protectedSchema;                                              //@synthesize protectedSchema=_protectedSchema - In the implementation block
@property (nonatomic,readonly) EFSQLPropertyMapper * propertyMapper;                                       //@synthesize propertyMapper=_propertyMapper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(EFSQLSchema *)schema;
-(NSString *)databaseName;
-(NSString *)basePath;
-(void)closeAllConnections;
-(void)checkInConnection:(id)arg1 ;
-(NSString *)fullPath;
-(void)scheduleRecurringActivity;
-(char)performReadBlock:(/*^block*/id)arg1 ;
-(char)performWriteBlock:(/*^block*/id)arg1 ;
-(void)reconcileJournalWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)performDatabaseWorkInBlockWithHighPriority:(/*^block*/id)arg1 ;
-(EFSQLPropertyMapper *)propertyMapper;
-(char)enforceDataProtection;
-(char)setupIsComplete;
-(char)isNestedDatabaseCall;
-(char)performWithOptions:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)checkOutConnectionIsWriter:(char)arg1 ;
-(EDProtectedDatabasePersistence *)protectedDatabasePersistence;
-(EFSQLSchema *)protectedSchema;
-(void)handleExceptionCreatingConnection:(id)arg1 ;
-(id)fileProtectionForDatabaseType:(long long)arg1 ;
-(id)urlForDatabasePath:(id)arg1 type:(long long)arg2 fileProtection:(id)arg3 ;
-(id)openConnectionIsWriter:(char)arg1 ;
-(id)urlForDatabasePath:(id)arg1 type:(long long)arg2 ;
-(id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7 ;
-(char)writersAreWaiting;
-(char)performDatabaseSetupUsingTransaction:(char)arg1 block:(/*^block*/id)arg2 ;
-(char)databaseIsCorrupt;
-(void)setSetupIsComplete:(char)arg1 ;
@end

