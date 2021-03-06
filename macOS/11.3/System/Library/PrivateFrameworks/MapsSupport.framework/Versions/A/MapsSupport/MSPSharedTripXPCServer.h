/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPSharedTripXPCServer <NSObject>
@required
-(void)checkinWithCompletion:(/*^block*/id)arg1;
-(void)fetchSharingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startSharingTripWithContacts:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startSharingTripWithMessagesContacts:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startSharingTripWithMessagesGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)stopSharingTripWithContacts:(id)arg1;
-(void)stopSharingTripWithMessagesGroup:(id)arg1;
-(void)stopSharingTrip;
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1;
-(void)blockSharedTrip:(id)arg1;

@end

