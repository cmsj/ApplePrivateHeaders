/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/Versions/A/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SiriCoreSQLiteDatabase;

@interface SiriCoreSyncDatabase : NSObject {

	NSString* _path;
	SiriCoreSQLiteDatabase* _db;
	char _inTransaction;
	char _debugMode;

}

@property (assign,nonatomic) char inTransaction;              //@synthesize inTransaction=_inTransaction - In the implementation block
@property (assign,nonatomic) char debugMode;                  //@synthesize debugMode=_debugMode - In the implementation block
+(id)currentSyncDatabase;
+(void)removeCurrentSyncDatabase;
-(id)initWithPath:(id)arg1 ;
-(char)openWithError:(id*)arg1 ;
-(char)prepare;
-(char)debugMode;
-(void)setDebugMode:(char)arg1 ;
-(char)inTransaction;
-(char)closeWithError:(id*)arg1 ;
-(char)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(char)beginTransactionWithError:(id*)arg1 ;
-(char)commitTransactionWithError:(id*)arg1 ;
-(char)rollbackTransactionWithError:(id*)arg1 ;
-(char)_insertSyncRec:(id)arg1 intoTable:(id)arg2 error:(id*)arg3 ;
-(int)_countKey:(id)arg1 fromTable:(id)arg2 updatedAfter:(id)arg3 error:(id*)arg4 ;
-(char)_enumerateKey:(id)arg1 updatedAfter:(id)arg2 fromTable:(id)arg3 usingBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(char)succeedOrRollbackOnFail:(id)arg1 error:(id*)arg2 whileExecuting:(/*^block*/id)arg3 ;
-(char)donate:(id)arg1 error:(id*)arg2 ;
-(char)remove:(id)arg1 error:(id*)arg2 ;
-(char)removeAllItemsOfKey:(id)arg1 error:(id*)arg2 ;
-(char)markAsSent:(id)arg1 error:(id*)arg2 ;
-(int)countRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 ;
-(int)countItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 ;
-(int)countSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 ;
-(char)enumerateItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)enumerateRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)enumerateSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setInTransaction:(char)arg1 ;
@end

