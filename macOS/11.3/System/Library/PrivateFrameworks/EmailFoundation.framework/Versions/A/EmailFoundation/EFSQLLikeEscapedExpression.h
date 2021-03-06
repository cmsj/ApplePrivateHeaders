/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@class NSString;

@interface EFSQLLikeEscapedExpression : NSObject <EFSQLValueExpressable> {

	unsigned short _escapeCharacter;
	NSString* _value;
	unsigned long long _pattern;

}

@property (nonatomic,readonly) NSString * value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned short escapeCharacter;                //@synthesize escapeCharacter=_escapeCharacter - In the implementation block
@property (nonatomic,readonly) unsigned long long pattern;                    //@synthesize pattern=_pattern - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)value;
-(unsigned long long)pattern;
-(id)initWithValue:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(NSString *)ef_SQLExpression;
-(id)ef_SQLIsolatedExpression;
-(id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 ;
-(id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 escapeCharacter:(unsigned short)arg3 ;
-(unsigned short)escapeCharacter;
@end

