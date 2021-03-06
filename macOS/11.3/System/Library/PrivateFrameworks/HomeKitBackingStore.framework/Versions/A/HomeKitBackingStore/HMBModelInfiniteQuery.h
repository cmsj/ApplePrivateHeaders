/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModelFiniteQuery.h>

@class NSString;

@interface HMBModelInfiniteQuery : HMBModelFiniteQuery {

	NSString* _sequenceArgumentName;

}

@property (copy,readonly) NSString * sequenceArgumentName;              //@synthesize sequenceArgumentName=_sequenceArgumentName - In the implementation block
+(id)queryWithSQLPredicate:(id)arg1 sequenceArgumentName:(id)arg2 indexedProperties:(id)arg3 arguments:(id)arg4 ;
-(id)performQueryOn:(id)arg1 arguments:(id)arg2 ;
-(id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 sequenceArgumentName:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7 ;
-(NSString *)sequenceArgumentName;
@end

