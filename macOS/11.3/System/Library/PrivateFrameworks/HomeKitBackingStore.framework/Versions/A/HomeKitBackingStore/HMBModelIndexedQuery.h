/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModelUnindexedQuery.h>

@class NSString, NSArray;

@interface HMBModelIndexedQuery : HMBModelUnindexedQuery {

	NSString* _indexNameSuffix;
	NSArray* _indexedColumns;

}

@property (nonatomic,readonly) NSString * indexNameSuffix;              //@synthesize indexNameSuffix=_indexNameSuffix - In the implementation block
@property (nonatomic,readonly) NSArray * indexedColumns;                //@synthesize indexedColumns=_indexedColumns - In the implementation block
@property (nonatomic,readonly) NSString * indexName; 
+(id)queryWithSQLPredicate:(id)arg1 ascending:(char)arg2 indexedProperties:(id)arg3 arguments:(id)arg4 ;
-(NSArray *)indexedColumns;
-(NSString *)indexName;
-(char)hasExpectedIndexes;
-(id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7 ;
-(NSString *)indexNameSuffix;
@end

