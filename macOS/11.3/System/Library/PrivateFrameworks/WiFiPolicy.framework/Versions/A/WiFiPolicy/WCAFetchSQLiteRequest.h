/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WCAFetchRequest.h>

@class NSDictionary, NSString, NSArray;

@interface WCAFetchSQLiteRequest : WCAFetchRequest {

	NSDictionary* _parameters;
	NSString* _tableName;
	NSArray* _columnNames;
	long long _limit;

}

@property (nonatomic,copy) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSString * tableName;                   //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy) NSArray * columnNames;                  //@synthesize columnNames=_columnNames - In the implementation block
@property (assign,nonatomic) long long limit;                      //@synthesize limit=_limit - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)limit;
-(void)setLimit:(long long)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setTableName:(NSString *)arg1 ;
-(NSString *)tableName;
-(NSArray *)columnNames;
-(void)setColumnNames:(NSArray *)arg1 ;
@end

