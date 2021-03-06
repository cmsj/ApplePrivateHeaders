/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DRTopicInterestModeling.h>

@protocol OS_dispatch_queue;
@class NSObject, _DKKnowledgeStorage;

@interface _DRTopicInterestModel : NSObject <_DRTopicInterestModeling> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	_DKKnowledgeStorage* _storage;

}

@property (retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (retain) _DKKnowledgeStorage * storage;                       //@synthesize storage=_storage - In the implementation block
+(id)topicActionCategoryType;
+(id)topicPresentedCategory;
+(id)topicSelectedCategory;
+(id)predicateForTopicInteractionsBefore:(id)arg1 ;
+(id)predicateForTopicsWithPrefix:(id)arg1 ;
+(id)newsStorageDirectory;
+(id)predicateForTopicInteractionsAfter:(id)arg1 ;
-(id)init;
-(_DKKnowledgeStorage *)storage;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithStorageDirectory:(id)arg1 ;
-(id)initWithStorageDirectory:(id)arg1 localOnly:(char)arg2 ;
-(void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2 ;
-(void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2 ;
-(void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2 ;
-(id)computeSummaryWithFilter:(id)arg1 ;
-(void)enumerateTopicCountsWithFilter:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)purgeEntriesEarlierThanDate:(id)arg1 ;
@end

