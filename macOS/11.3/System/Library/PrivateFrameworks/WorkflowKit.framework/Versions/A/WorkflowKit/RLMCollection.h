/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, RLMRealm;


@protocol RLMCollection <NSFastEnumeration,RLMThreadConfined>
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) int type; 
@property (getter=isOptional,nonatomic,readonly) char optional; 
@property (nonatomic,copy,readonly) NSString * objectClassName; 
@property (nonatomic,readonly) RLMRealm * realm; 
@required
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfObject:(id)arg1;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(int)type;
-(id)firstObject;
-(id)lastObject;
-(id)valueForKey:(id)arg1;
-(char)isOptional;
-(RLMRealm *)realm;
-(NSString *)objectClassName;
-(id)addNotificationBlock:(/*^block*/id)arg1;
-(id)objectsWhere:(id)arg1 args:(_va_list_tag*)arg2;
-(id)objectsWithPredicate:(id)arg1;
-(id)objectsWhere:(id)arg1;
-(unsigned long long)indexOfObjectWhere:(id)arg1 args:(_va_list_tag*)arg2;
-(unsigned long long)indexOfObjectWithPredicate:(id)arg1;
-(id)averageOfProperty:(id)arg1;
-(id)sortedResultsUsingDescriptors:(id)arg1;
-(unsigned long long)indexOfObjectWhere:(id)arg1;
-(id)sortedResultsUsingKeyPath:(id)arg1 ascending:(char)arg2;
-(id)minOfProperty:(id)arg1;
-(id)maxOfProperty:(id)arg1;
-(id)sumOfProperty:(id)arg1;

@end

