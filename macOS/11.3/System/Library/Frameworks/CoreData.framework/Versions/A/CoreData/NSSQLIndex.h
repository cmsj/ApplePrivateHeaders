/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFetchIndexDescription, NSSQLEntity, NSMutableArray;

@interface NSSQLIndex : NSObject {

	NSFetchIndexDescription* _indexDescription;
	NSSQLEntity* _sqlEntity;
	NSMutableArray* _createStrings;
	NSMutableArray* _dropStrings;
	NSMutableArray* _updateStrings;

}

@property (nonatomic,retain,readonly) NSFetchIndexDescription * indexDescription;              //@synthesize indexDescription=_indexDescription - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * sqlEntity;                                        //@synthesize sqlEntity=_sqlEntity - In the implementation block
@property (nonatomic,retain) NSMutableArray * createTableStatements;                           //@synthesize createStrings=_createStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * dropTableStatements;                             //@synthesize dropStrings=_dropStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateTableStatements;                           //@synthesize updateStrings=_updateStrings - In the implementation block
-(NSSQLEntity *)sqlEntity;
-(NSFetchIndexDescription *)indexDescription;
-(id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2 ;
-(id)generateStatementsForStore:(id)arg1 ;
-(id)dropStatementsForStore:(id)arg1 ;
-(id)bulkUpdateStatementsForStore:(id)arg1 ;
-(NSMutableArray *)createTableStatements;
-(void)setCreateTableStatements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dropTableStatements;
-(void)setDropTableStatements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)updateTableStatements;
-(void)setUpdateTableStatements:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(char)isUnique;
@end

