/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKSyncRemoteStorage.h>
#import <libobjc.A.dylib/_DKSyncCommonClass.h>

@protocol OS_dispatch_source;
@class NSDictionary, _DKEventTypeResultStatsCounter, NSString, RPCompanionLinkClient, NSMutableDictionary, NSObject, NSMutableSet;

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncRemoteStorage, _DKSyncCommonClass> {

	char _running;
	NSDictionary* _failIfAsleepOption;
	_DKEventTypeResultStatsCounter* _failIfAsleepStats;
	NSString* _deviceID;
	RPCompanionLinkClient* _client;
	NSMutableDictionary* _companionLinkClients;
	unsigned long long _outstandingRequestCount;
	NSObject*<OS_dispatch_source> _companionLinkClientsCleanupTimer;
	double _retryTimeout;
	NSMutableSet* _peerSourceDeviceIDsWithCompletedHandshakes;
	char _isAvailable;

}

@property (assign,nonatomic) char isAvailable;              //@synthesize isAvailable=_isAvailable - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)name;
-(void)start;
-(id)client;
-(void)setDeviceID:(id)arg1 ;
-(char)isAvailable;
-(long long)transportType;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelOutstandingOperations;
-(id)myDeviceID;
-(char)isTransportActiveForPeer:(id)arg1 ;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)transformResponseError:(id)arg1 ;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2 ;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(char)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)setIsAvailable:(char)arg1 ;
@end

