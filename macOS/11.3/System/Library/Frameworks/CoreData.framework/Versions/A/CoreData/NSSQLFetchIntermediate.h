/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLSelectIntermediate, NSSQLGroupByIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate, NSMutableArray, NSMutableDictionary;

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate {

	NSSQLSelectIntermediate* _selectClause;
	NSSQLGroupByIntermediate* _groupByClause;
	NSSQLHavingIntermediate* _havingClause;
	NSSQLOffsetIntermediate* _offsetClause;
	NSMutableArray* _groupByKeypaths;
	char _isDictionaryCountFetch;
	NSMutableArray* _joinIntermediates;
	NSMutableDictionary* _joinKeypaths;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(char)isFunctionScoped;
-(id)_generateJoinSQLStringInContext:(id)arg1 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)fetchIntermediate;
-(char)isDictionaryCountFetch;
-(void)setDictionaryCountFetch:(char)arg1 ;
-(void)setSelectIntermediate:(id)arg1 ;
-(id)selectIntermediate;
-(id)groupByIntermediate;
-(void)setGroupByIntermediate:(id)arg1 ;
-(void)addGroupByKeypath:(id)arg1 ;
-(char)groupByClauseContainsKeypath:(id)arg1 ;
-(id)havingIntermediate;
-(void)setHavingIntermediate:(id)arg1 ;
-(void)setOffsetIntermediate:(id)arg1 ;
-(void)addJoinIntermediate:(id)arg1 atKeypathWithComponents:(id)arg2 ;
-(id)finalJoinForKeypathWithComponents:(id)arg1 ;
-(void)promoteToOuterJoinsAlongKeypathWithComponents:(id)arg1 ;
-(void)promoteToOuterJoinAtKeypathWithComponents:(id)arg1 ;
-(id)joinIntermediates;
-(void)selectDistinct;
-(void)dealloc;
-(id)initWithScope:(id)arg1 ;
@end

