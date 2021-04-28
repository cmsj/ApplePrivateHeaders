/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/Versions/A/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class NSMapTable, NSString;

@interface QLSqliteDatabaseStatementWrapper : NSObject {

	sqlite3_stmtRef _stmt;
	NSMapTable* _inUseTable;
	NSString* _key;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,getter=isInUse,nonatomic) char inUse; 
@property (assign,nonatomic) sqlite3_stmtRef stmt;                   //@synthesize stmt=_stmt - In the implementation block
-(void)dealloc;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(char)isInUse;
-(sqlite3_stmtRef)stmt;
-(void)setInUse:(char)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 key:(id)arg2 inUseTable:(id)arg3 ;
-(void)setStmt:(sqlite3_stmtRef)arg1 ;
@end
