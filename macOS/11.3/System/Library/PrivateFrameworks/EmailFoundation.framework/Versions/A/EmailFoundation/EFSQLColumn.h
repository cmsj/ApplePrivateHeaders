/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class NSString, NSData, NSNumber, NSDate;

@interface EFSQLColumn : NSObject {

	long long _index;
	sqlite3_stmtRef _statement;

}

@property (nonatomic,readonly) sqlite3_stmtRef statement;                //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id objectValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSData * dataValue; 
@property (nonatomic,readonly) NSNumber * numberValue; 
@property (nonatomic,readonly) long long databaseIDValue; 
@property (nonatomic,readonly) char boolValue; 
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) NSDate * dateValue; 
-(id)debugDescription;
-(double)doubleValue;
-(NSString *)name;
-(char)boolValue;
-(NSString *)stringValue;
-(long long)integerValue;
-(long long)index;
-(NSDate *)dateValue;
-(id)objectValue;
-(sqlite3_stmtRef)statement;
-(long long)int64Value;
-(NSData *)dataValue;
-(NSNumber *)numberValue;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 index:(long long)arg2 ;
-(id)initWithPreparedStatement:(id)arg1 index:(long long)arg2 ;
-(long long)databaseIDValue;
@end
