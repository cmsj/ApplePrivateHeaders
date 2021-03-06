/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ICMusicSubscriptionLeaseSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString, NSOperationQueue;

@interface ICMusicSubscriptionLeaseController : NSObject <ICEnvironmentMonitorObserver, ICMusicSubscriptionLeaseSessionDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _accountDSIDToFairPlayKeyStatus;
	NSMutableDictionary* _cacheKeyToLeaseSession;
	char _hasReceivedUserInteractionEvent;
	char _isRemoteServerLikelyReachable;
	char _isServerReachable;
	NSString* _lastKnownHouseholdID;
	int _leaseDidEndNotificationToken;
	NSOperationQueue* _leaseSessionPreparationOperationQueue;

}

@property (nonatomic,copy,readonly) NSString * lastKnownHouseholdID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)dealloc;
-(id)_init;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)_handlePlaybackLeaseDidEndPushNotification;
-(NSString *)lastKnownHouseholdID;
-(void)musicLeaseSession:(id)arg1 didFinishPlaybackRequest:(id)arg2 withPlaybackResponse:(id)arg3 responseError:(id)arg4 updatedFairPlayKeyStatusList:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)musicLeaseSession:(id)arg1 requestsFairPlayKeyStatusUpdateWithCompletion:(/*^block*/id)arg2 ;
-(void)getLastKnownHouseholdIDWithCompletion:(/*^block*/id)arg1 ;
-(void)getLeaseSessionWithRequestContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)receivedUserInteractionEvent;
@end

