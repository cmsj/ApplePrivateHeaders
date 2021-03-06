/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CallKit/CallKit-Structs.h>
@class NSURL, NSMutableDictionary;

@interface CXDatabase : NSObject {

	NSURL* _url;
	sqlite3Ref _database;
	NSMutableDictionary* _sqlQueryToStatements;

}

@property (nonatomic,retain) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) sqlite3Ref database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sqlQueryToStatements;              //@synthesize sqlQueryToStatements=_sqlQueryToStatements - In the implementation block
@property (nonatomic,readonly) long long lastInsertedRowID; 
@property (nonatomic,readonly) int countOfRecordsModifiedByLastQuery; 
-(void)dealloc;
-(id)description;
-(id)init;
-(void)setDatabase:(sqlite3Ref)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(sqlite3Ref)database;
-(char)closeWithError:(id*)arg1 ;
-(long long)lastInsertedRowID;
-(char)beginTransactionWithError:(id*)arg1 ;
-(char)commitTransactionWithError:(id*)arg1 ;
-(char)rollbackTransactionWithError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 readOnly:(char)arg2 error:(id*)arg3 ;
-(char)enableForeignKeysWithError:(id*)arg1 ;
-(char)setBusyTimeout:(double)arg1 error:(id*)arg2 ;
-(char)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
-(char)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id*)arg3 ;
-(char)executeSQL:(id)arg1 withBindings:(id)arg2 transient:(char)arg3 error:(id*)arg4 ;
-(int)countOfRecordsModifiedByLastQuery;
-(char)executeSQL:(id)arg1 error:(id*)arg2 ;
-(char)performTransactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)executeSQL:(id)arg1 withStatementPreparationBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(char)arg4 resultRowHandler:(/*^block*/id)arg5 error:(id*)arg6 ;
-(char)vacuumWithError:(id*)arg1 ;
-(id)namesOfColumnsInTableWithName:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)sqlQueryToStatements;
-(char)executeSQL:(id)arg1 withStatementPreparationBlock:(/*^block*/id)arg2 transient:(char)arg3 error:(id*)arg4 ;
-(id)_statementForSQL:(id)arg1 transient:(char)arg2 error:(id*)arg3 ;
-(void)setSqlQueryToStatements:(NSMutableDictionary *)arg1 ;
@end

