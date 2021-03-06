/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLOrderExpression : NSObject <EFSQLValueExpressable> {

	char _isAscending;
	id<EFSQLExpressable> _expression;

}

@property (nonatomic,readonly) id<EFSQLExpressable> expression;               //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) char isAscending;                              //@synthesize isAscending=_isAscending - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(NSString *)ef_SQLExpression;
-(id)ef_SQLIsolatedExpression;
-(id)initWithExpression:(id)arg1 ascending:(char)arg2 ;
-(id<EFSQLExpressable>)expression;
-(char)isAscending;
@end

