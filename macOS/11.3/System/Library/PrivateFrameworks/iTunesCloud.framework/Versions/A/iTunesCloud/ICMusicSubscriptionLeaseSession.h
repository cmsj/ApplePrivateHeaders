/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, ICMusicSubscriptionLeaseSessionDelegate;
@class NSObject, ICMusicSubscriptionLeaseStatus, ICStoreRequestContext, NSDate;

@interface ICMusicSubscriptionLeaseSession : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _automaticRefreshCount;
	NSObject*<OS_dispatch_source> _automaticRefreshTimerSource;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	char _isPerformingAutomaticRefresh;
	ICMusicSubscriptionLeaseStatus* _leaseStatus;
	long long _pendingLeaseAcquisitionRevisionID;
	char _delegatedLeaseSession;
	ICStoreRequestContext* _requestContext;
	id<ICMusicSubscriptionLeaseSessionDelegate> _delegate;
	NSDate* _leaseExpirationDate;

}

@property (nonatomic,__weak,readonly) id<ICMusicSubscriptionLeaseSessionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate;                                                    //@synthesize leaseExpirationDate=_leaseExpirationDate - In the implementation block
@property (getter=isDelegatedLeaseSession,nonatomic,readonly) char delegatedLeaseSession;                            //@synthesize delegatedLeaseSession=_delegatedLeaseSession - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;                                          //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy,readonly) ICMusicSubscriptionLeaseStatus * leaseStatus; 
@property (getter=isAutomaticallyRefreshingLease,nonatomic,readonly) char automaticallyRefreshingLease; 
+(id)_sharedOperationQueue;
-(void)dealloc;
-(id)description;
-(id<ICMusicSubscriptionLeaseSessionDelegate>)delegate;
-(ICStoreRequestContext *)requestContext;
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;
-(id)_initWithRequestContext:(id)arg1 isDelegatedLeaseSession:(char)arg2 delegate:(id)arg3 leaseStatus:(id)arg4 ;
-(ICMusicSubscriptionLeaseStatus *)leaseStatus;
-(char)isAutomaticallyRefreshingLease;
-(id)performPlaybackRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadFairPlayKeyStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handlePlaybackLeaseDidEndPushNotification;
-(void)_handleRemoteServerDidBecomeLikelyReachable;
-(void)_receivedUserInteractionEvent;
-(void)_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2 ;
-(id)_newOperationForPlaybackRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performAutomaticRefresh;
-(void)_onQueue_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2 ;
-(void)_updateAutomaticRefreshProperties;
-(char)isDelegatedLeaseSession;
-(NSDate *)leaseExpirationDate;
@end
