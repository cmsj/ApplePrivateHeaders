/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSString;

@interface MRAVClusterController : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSHashTable* _observers;
	NSString* _localPairingIdentity;
	NSString* _clusterUID;
	NSString* _clusterLeaderUID;
	unsigned _clusterType;
	unsigned long long _previousClusterStatus;
	int _airplayClusterStatusNotificationToken;

}

@property (nonatomic,readonly) char needsCommandRedirection; 
@property (nonatomic,readonly) unsigned long long clusterStatus; 
@property (nonatomic,readonly) unsigned clusterType; 
@property (nonatomic,readonly) NSString * clusterLeaderUID; 
+(id)sharedController;
+(char)canBeClusterMember;
+(id)getClusterUID;
+(id)getClusterLeaderUID;
+(unsigned)getClusterType;
-(id)init;
-(unsigned)clusterType;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(unsigned long long)clusterStatus;
-(void)deviceInfoDidChangeNotification:(id)arg1 ;
-(void)updateClusterInformation;
-(void)onQueue_notifyObserversWithClusterStatus:(unsigned long long)arg1 ;
-(char)needsCommandRedirection;
-(NSString *)clusterLeaderUID;
-(void)getClusterStatus:(/*^block*/id)arg1 ;
-(void)getClusterLeaderEndpoint:(/*^block*/id)arg1 ;
@end

