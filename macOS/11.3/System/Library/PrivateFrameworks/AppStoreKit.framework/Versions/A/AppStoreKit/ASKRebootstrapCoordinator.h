/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASKStorefrontChangeProvider, NSHashTable;

@interface ASKRebootstrapCoordinator : NSObject {

	char _hasPendingNotification;
	ASKStorefrontChangeProvider* _changeObserver;
	NSHashTable* _handlerTokens;
	/*^block*/id _appBootstrapHandler;
	long long _delayCount;

}

@property (nonatomic,readonly) ASKStorefrontChangeProvider * changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) NSHashTable * handlerTokens;                               //@synthesize handlerTokens=_handlerTokens - In the implementation block
@property (nonatomic,copy) id appBootstrapHandler;                                        //@synthesize appBootstrapHandler=_appBootstrapHandler - In the implementation block
@property (assign,nonatomic) long long delayCount;                                        //@synthesize delayCount=_delayCount - In the implementation block
@property (assign,nonatomic) char hasPendingNotification;                                 //@synthesize hasPendingNotification=_hasPendingNotification - In the implementation block
+(id)sharedCoordinator;
-(id)init;
-(long long)delayCount;
-(void)notify;
-(ASKStorefrontChangeProvider *)changeObserver;
-(void)scheduleNotification;
-(NSHashTable *)handlerTokens;
-(id)registerCleanupHandler:(/*^block*/id)arg1 ;
-(void)setHasPendingNotification:(char)arg1 ;
-(id)appBootstrapHandler;
-(void)setDelayCount:(long long)arg1 ;
-(char)hasPendingNotification;
-(void)setAppBootstrapHandler:(id)arg1 ;
-(void)beginDelayingNotifications;
-(void)endDelayingNotifications;
-(void)simulateStorefrontChange;
-(void)registerAppBootstrapHandler:(/*^block*/id)arg1 ;
@end

