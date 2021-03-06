/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableDictionary, NSData;

@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor> {

	NSMutableDictionary* _filter;
	NSMutableDictionary* _pids;
	NSMutableDictionary* _processes;
	NSMutableDictionary* _processImagePaths;
	NSMutableDictionary* _subsystems;
	NSMutableDictionary* _categories;

}

@property (nonatomic,readonly) NSData * data; 
-(void)processComparisonPredicate:(id)arg1 ;
-(void)addProcessID:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addProcess:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addProcessImagePath:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addSubsystem:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addCategory:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 flags:(unsigned long long)arg3 ;
-(unsigned long long)flagsForPredicate:(id)arg1 ;
-(NSData *)data;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
@end

