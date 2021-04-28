/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContext, NSString, NSArray, HMBSQLQueryStatement, HMBSQLStatement, NSHashTable;

@interface HMBLocalSQLQueryTable : HMFObject {

	char _finalized;
	HMBLocalSQLContext* _context;
	Class _modelClass;
	NSString* _modelType;
	NSArray* _columnFields;
	NSArray* _columnNames;
	HMBSQLQueryStatement* _selectAll;
	NSString* _dropTableSQL;
	HMBSQLStatement* _deleteAll;
	HMBSQLStatement* _updateRecord;
	HMBSQLStatement* _deleteRecord;
	NSHashTable* _userQueries;

}

@property (nonatomic,readonly) HMBSQLStatement * deleteAll;                      //@synthesize deleteAll=_deleteAll - In the implementation block
@property (nonatomic,readonly) HMBSQLStatement * updateRecord;                   //@synthesize updateRecord=_updateRecord - In the implementation block
@property (nonatomic,readonly) HMBSQLStatement * deleteRecord;                   //@synthesize deleteRecord=_deleteRecord - In the implementation block
@property (nonatomic,readonly) NSHashTable * userQueries;                        //@synthesize userQueries=_userQueries - In the implementation block
@property (assign,nonatomic) char finalized;                                     //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,__weak,readonly) HMBLocalSQLContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) Class modelClass;                                 //@synthesize modelClass=_modelClass - In the implementation block
@property (nonatomic,readonly) NSString * modelType;                             //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,readonly) NSArray * columnFields;                           //@synthesize columnFields=_columnFields - In the implementation block
@property (nonatomic,readonly) NSArray * columnNames;                            //@synthesize columnNames=_columnNames - In the implementation block
@property (nonatomic,readonly) HMBSQLQueryStatement * selectAll;                 //@synthesize selectAll=_selectAll - In the implementation block
@property (nonatomic,readonly) NSString * dropTableSQL;                          //@synthesize dropTableSQL=_dropTableSQL - In the implementation block
-(void)finalize;
-(void)dealloc;
-(HMBLocalSQLContext *)context;
-(NSString *)modelType;
-(char)finalized;
-(Class)modelClass;
-(HMBSQLQueryStatement *)selectAll;
-(NSArray *)columnFields;
-(NSArray *)columnNames;
-(HMBSQLStatement *)deleteAll;
-(id)buildQueriableFieldsForModel:(id)arg1 ;
-(unsigned long long)_deleteQueryForRecordRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)_updateQueryForZoneRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 encodedColumns:(id)arg3 error:(id*)arg4 ;
-(HMBSQLStatement *)deleteRecord;
-(HMBSQLStatement *)updateRecord;
-(NSHashTable *)userQueries;
-(void)setFinalized:(char)arg1 ;
-(id)initWithContext:(id)arg1 queryModel:(Class)arg2 prepareOnly:(char)arg3 ;
-(id)performQueryOn:(id)arg1 properties:(id)arg2 filter:(/*^block*/id)arg3 ;
-(unsigned long long)_deleteAllQueriesForZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSString *)dropTableSQL;
@end
