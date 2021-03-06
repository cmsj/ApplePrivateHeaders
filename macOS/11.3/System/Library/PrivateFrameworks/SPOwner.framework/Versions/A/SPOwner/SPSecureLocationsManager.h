/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPSecureLocationsXPCProtocol.h>

@protocol OS_dispatch_queue, SPSecureLocationsXPCProtocol;
@class NSObject, FMXPCServiceDescription, FMXPCSession, NSString;

@interface SPSecureLocationsManager : NSObject <SPSecureLocationsXPCProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPSecureLocationsXPCProtocol> _proxy;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPSecureLocationsXPCProtocol> proxy;                    //@synthesize proxy=_proxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)exportedInterface;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<SPSecureLocationsXPCProtocol>)proxy;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(id)remoteInterface;
-(void)setProxy:(id<SPSecureLocationsXPCProtocol>)arg1 ;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(void)interruptionHandler:(id)arg1 ;
-(void)invalidationHandler:(id)arg1 ;
-(oneway void)subscribeAndFetchLocationForIds:(id)arg1 clientApp:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)unsubscribeForId:(id)arg1 clientApp:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)latestLocationFromCacheForId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)publishLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)receivedLocationPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)receivedLocationCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)shouldStartLocationMonitorWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)shareCurrentKeyWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)performKeyRollWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)isLocationPublishingDeviceWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)fetchConfigFromServerWithCompletion:(/*^block*/id)arg1 ;
@end

