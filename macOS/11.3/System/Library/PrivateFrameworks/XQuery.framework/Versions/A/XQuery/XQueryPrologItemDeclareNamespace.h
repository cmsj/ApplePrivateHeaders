/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XQuery/XQueryPrologItemBehavior.h>

@class NSString;

@interface XQueryPrologItemDeclareNamespace : NSObject <XQueryPrologItemBehavior> {

	NSString* namespaceString;
	NSString* prefix;
	long long line;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)declareNamespace:(id)arg1 forPrefix:(id)arg2 atLine:(long long)arg3 ;
-(void)finalize;
-(void)dealloc;
-(NSString *)description;
-(void)XQueryUpdateProlog:(id)arg1 ;
@end
