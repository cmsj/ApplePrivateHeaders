/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSQLUpdateStatementValue.h>

@protocol EFSQLValueExpressable;
@class NSMutableDictionary, NSString;

@interface EFSQLUpdateStatement : NSObject <EFSQLUpdateStatementValue> {

	id<EFSQLValueExpressable> _whereClause;
	NSMutableDictionary* _bindables;
	NSMutableDictionary* _expressables;
	NSString* _table;
	unsigned long long _conflictResolution;

}

@property (nonatomic,copy,readonly) NSString * queryString; 
@property (nonatomic,retain) id<EFSQLValueExpressable> whereClause;              //@synthesize whereClause=_whereClause - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)queryString;
-(id)initWithTable:(id)arg1 ;
-(id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(id<EFSQLValueExpressable>)whereClause;
-(void)setWhereClause:(id<EFSQLValueExpressable>)arg1 ;
@end

