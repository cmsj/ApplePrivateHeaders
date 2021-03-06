/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, PKPaymentService, NSMutableDictionary, NSString;

@interface PKDeviceSharingCapabilitiesManager : NSObject <PKPaymentServiceDelegate> {

	NSHashTable* _observers;
	os_unfair_lock_s _lockObservers;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _replyQueue;
	PKPaymentService* _paymentService;
	NSMutableDictionary* _fetchStatusByAppleID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)didReceiveDeviceSharingCapabilities:(id)arg1 forHandle:(id)arg2 ;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)_sendDeviceSharingCapabilitiesUpdated:(id)arg1 maximumPossibleDevices:(long long)arg2 forAppleID:(id)arg3 ;
-(void)_sendDeviceSharingCapabilitiesUpdated:(id)arg1 newSharingCapabilties:(id)arg2 forAppleID:(id)arg3 ;
-(void)fetchDeviceCapabilitesForAppleIDs:(id)arg1 ;
-(id)currentFetchStatusForAppleID:(id)arg1 ;
@end

