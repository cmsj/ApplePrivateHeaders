/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XQuery/XQueryExpr.h>
#import <XQuery/XQueryExprBehavior.h>

@class NSString, NSMutableArray, NSArray;

@interface XQueryElementExpr : XQueryExpr <XQueryExprBehavior> {

	NSString* _name;
	id _nameExpr;
	NSMutableArray* _namespaces;
	NSArray* _attributes;
	NSArray* _items;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)elementeExprWithName:(id)arg1 attributes:(id)arg2 items:(id)arg3 ;
+(id)elementExprWithNameExpr:(id)arg1 value:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(id)evaluateWithContext:(id)arg1 ;
-(void)bindInfoForProlog:(id)arg1 ;
-(id)initWithName:(id)arg1 attributes:(id)arg2 items:(id)arg3 ;
-(id)initWithNameExpr:(id)arg1 value:(id)arg2 ;
-(char)updateNamespacesForElement:(id)arg1 qName:(id)arg2 context:(id)arg3 ;
@end

