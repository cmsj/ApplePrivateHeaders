/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSInputEventConsumer;
@class NSObject, NSMutableSet, NSLock, NSRecursiveLock;

@interface SSInputEventSourceCoordinator : NSObject {

	NSObject*<SSInputEventConsumer> mActiveConsumer;
	NSMutableSet* mEventSources;
	NSMutableSet* mRegisteredConsumers;
	NSLock* mLock;
	NSRecursiveLock* _activeConsumerLock;

}

@property (retain) NSRecursiveLock * activeConsumerLock;                        //@synthesize activeConsumerLock=_activeConsumerLock - In the implementation block
@property (assign) NSObject*<SSInputEventConsumer> activeConsumer; 
+(id)sharedCoordinator;
-(void)dealloc;
-(id)init;
-(void)removeSource:(id)arg1 ;
-(void)addSource:(id)arg1 ;
-(void)registerConsumer:(id)arg1 ;
-(void)unregisterConsumer:(id)arg1 ;
-(NSObject*<SSInputEventConsumer>)activeConsumer;
-(void)setActiveConsumer:(NSObject*<SSInputEventConsumer>)arg1 ;
-(void)deactivateConsumer:(id)arg1 ;
-(void)setActiveConsumerLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)activeConsumerLock;
@end

