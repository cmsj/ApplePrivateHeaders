/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/Versions/A/HomeKitEventRouter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, HMETopicRouterDelegate;
@class NSObject, HMETrieNode, NSMapTable;

@interface HMETopicRouter : NSObject {

	NSObject*<OS_os_log> _logger;
	HMETrieNode* _rootNode;
	NSMapTable* _registrations;
	id<HMETopicRouterDelegate> _delegate;

}

@property (nonatomic,readonly) HMETrieNode * rootNode;                        //@synthesize rootNode=_rootNode - In the implementation block
@property (nonatomic,readonly) NSMapTable * registrations;                    //@synthesize registrations=_registrations - In the implementation block
@property (__weak,readonly) id<HMETopicRouterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<HMETopicRouterDelegate>)delegate;
-(HMETrieNode *)rootNode;
-(id)initWithDelegate:(id)arg1 ;
-(NSMapTable *)registrations;
-(void)unregisterConsumer:(id)arg1 ;
-(id)dumpStateDescription;
-(void)changeRegistrationsForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 ;
-(void)unregisterConsumer:(id)arg1 topicFilters:(id)arg2 ;
-(void)registerConsumer:(id)arg1 topicFilters:(id)arg2 ;
-(id)consumersForTopic:(id)arg1 ;
-(id)minimalSpanningTopicFilters;
-(id)allRegisteredTopicFilters;
@end

