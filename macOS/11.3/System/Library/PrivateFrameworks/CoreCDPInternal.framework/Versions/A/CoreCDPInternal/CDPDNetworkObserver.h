/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
@class NSLock, NSMutableDictionary, NSObject;

@interface CDPDNetworkObserver : NSObject {

	char _networkIsReachable;
	NSLock* _clientsLock;
	NSMutableDictionary* _clientsByUUID;
	SCNetworkReachabilityRef _networkReach;
	NSObject*<OS_dispatch_queue> _eventQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)startObservingNetwork;
-(void)_networkReachabilityDidChangeWithFlags:(unsigned)arg1 ;
-(id)addNetworkObserverWithEventHandler:(/*^block*/id)arg1 ;
-(void)removeObserverWithToken:(id)arg1 ;
@end
