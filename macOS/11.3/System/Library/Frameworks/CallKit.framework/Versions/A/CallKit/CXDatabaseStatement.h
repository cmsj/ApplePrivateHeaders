/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CallKit/CallKit-Structs.h>
@interface CXDatabaseStatement : NSObject {

	sqlite3_stmtRef _statement;
	sqlite3Ref _database;

}

@property (assign,nonatomic) sqlite3_stmtRef statement;              //@synthesize statement=_statement - In the implementation block
@property (assign,nonatomic) sqlite3Ref database;                    //@synthesize database=_database - In the implementation block
-(void)finalize;
-(void)dealloc;
-(id)init;
-(void)setDatabase:(sqlite3Ref)arg1 ;
-(sqlite3Ref)database;
-(sqlite3_stmtRef)statement;
-(void)setStatement:(sqlite3_stmtRef)arg1 ;
-(char)bindInt64:(long long)arg1 atIndex:(int)arg2 error:(id*)arg3 ;
-(char)bindText:(const char*)arg1 ofLength:(int)arg2 atIndex:(int)arg3 error:(id*)arg4 ;
-(id)initWithSQL:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(char)bind:(id)arg1 error:(id*)arg2 ;
-(char)executeWithError:(id*)arg1 ;
-(char)executeWithExpectedColumnCount:(long long)arg1 resultRowHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
@end
