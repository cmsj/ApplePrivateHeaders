/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPSecureLocationsXPCProtocol <NSObject>
@required
-(oneway void)subscribeAndFetchLocationForIds:(id)arg1 clientApp:(id)arg2 completion:(/*^block*/id)arg3;
-(oneway void)unsubscribeForId:(id)arg1 clientApp:(id)arg2 completion:(/*^block*/id)arg3;
-(oneway void)latestLocationFromCacheForId:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)publishLocation:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)receivedLocationPayload:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)receivedLocationCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)shouldStartLocationMonitorWithCompletion:(/*^block*/id)arg1;
-(oneway void)shareCurrentKeyWithId:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)performKeyRollWithCompletion:(/*^block*/id)arg1;
-(oneway void)isLocationPublishingDeviceWithCompletion:(/*^block*/id)arg1;
-(oneway void)fetchConfigFromServerWithCompletion:(/*^block*/id)arg1;

@end
