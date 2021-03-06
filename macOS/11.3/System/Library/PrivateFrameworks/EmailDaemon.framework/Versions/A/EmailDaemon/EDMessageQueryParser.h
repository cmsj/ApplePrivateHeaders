/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDSearchableIndex, EFSQLObjectPropertyMapper, EFSearchableIndexObjectPropertyMapper, EDMessageQueryTransformer;

@interface EDMessageQueryParser : NSObject {

	EDSearchableIndex* _searchableIndex;
	EFSQLObjectPropertyMapper* _sqlPropertyMapper;
	EFSearchableIndexObjectPropertyMapper* _searchableIndexMapper;
	EDMessageQueryTransformer* _transformer;

}

@property (nonatomic,readonly) EDMessageQueryTransformer * transformer;                                    //@synthesize transformer=_transformer - In the implementation block
@property (nonatomic,readonly) EDSearchableIndex * searchableIndex;                                        //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,readonly) EFSQLObjectPropertyMapper * sqlPropertyMapper;                              //@synthesize sqlPropertyMapper=_sqlPropertyMapper - In the implementation block
@property (nonatomic,readonly) EFSearchableIndexObjectPropertyMapper * searchableIndexMapper;              //@synthesize searchableIndexMapper=_searchableIndexMapper - In the implementation block
+(id)performSearchableIndexQueryPredicate:(id)arg1 propertyMapper:(id)arg2 searchableIndex:(id)arg3 ;
-(EDMessageQueryTransformer *)transformer;
-(EDSearchableIndex *)searchableIndex;
-(EFSearchableIndexObjectPropertyMapper *)searchableIndexMapper;
-(id)sqlQueryForQuery:(id)arg1 predicate:(id)arg2 ;
-(EFSQLObjectPropertyMapper *)sqlPropertyMapper;
-(id)initWithSchema:(id)arg1 protectedSchema:(id)arg2 searchableIndex:(id)arg3 accountsProvider:(id)arg4 vipManager:(id)arg5 messagePersistence:(id)arg6 mailboxPersistence:(id)arg7 ;
-(id)sqlQueryForQuery:(id)arg1 ;
@end

