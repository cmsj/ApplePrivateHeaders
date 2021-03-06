/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XQuery/XQuery-Structs.h>
#import <XQuery/XQueryExpr.h>
#import <XQuery/XQueryExprBehavior.h>

@class NSMutableArray, NSArray, NSString;

@interface XQueryFLWORExpr : XQueryExpr <XQueryExprBehavior> {

	NSMutableArray* _forLet;
	id _whereExpr;
	NSArray* _orderSpecs;
	id _returnExpr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exprWithForLet:(id)arg1 whereExpr:(id)arg2 orderSpecs:(id)arg3 returnExpr:(id)arg4 ;
-(void)finalize;
-(void)dealloc;
-(id)evaluateWithContext:(id)arg1 ;
-(void)bindInfoForProlog:(id)arg1 ;
-(id)initWithForLet:(id)arg1 whereExpr:(id)arg2 orderSpecs:(id)arg3 returnExpr:(id)arg4 ;
-(void)processItem:(ArrayOrSingleton*)arg1 withContext:(id)arg2 ;
-(void)evaluateStartingAt:(long long)arg1 toResults:(ArrayOrSingleton*)arg2 withContext:(id)arg3 ;
-(id)orderSpecs;
@end

