/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPFMIPRegisterInfo.h>
#import <SPOwner/SPSettingsConfigurating.h>

@protocol SPBeaconManagerXPCProtocol, OS_dispatch_queue;
@class NSUUID, NSString, NSSet, NSDate, NSNumber, NSUserDefaults, FMXPCServiceDescription, FMXPCSession, NSOperationQueue, NSObject;

@interface SPSettingsConfiguration : NSObject <SPFMIPRegisterInfo, SPSettingsConfigurating> {

	NSUserDefaults* _sharedDefaults;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	FMXPCServiceDescription* _userAgentServiceDescription;
	FMXPCSession* _userAgentSession;
	id<SPBeaconManagerXPCProtocol> _proxy;
	id<SPBeaconManagerXPCProtocol> _userAgentProxy;
	id _serviceSettingsChangedNotificationToken;
	NSOperationQueue* _notificationQueue;
	NSString* _serviceState;
	NSSet* _serviceDisabledReasons;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSUUID * baUUID; 
@property (nonatomic,copy,readonly) NSString * serviceState; 
@property (nonatomic,copy,readonly) NSSet * serviceDisabledReasons; 
@property (nonatomic,copy,readonly) NSDate * beaconZoneCreationDate; 
@property (nonatomic,copy,readonly) NSNumber * beaconZoneCreationErrorCode; 
@property (nonatomic,copy,readonly) NSDate * lastKeyRollDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;                       //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FMXPCServiceDescription * userAgentServiceDescription;              //@synthesize userAgentServiceDescription=_userAgentServiceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * userAgentSession;                                    //@synthesize userAgentSession=_userAgentSession - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> proxy;                               //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> userAgentProxy;                      //@synthesize userAgentProxy=_userAgentProxy - In the implementation block
@property (assign,nonatomic,__weak) id serviceSettingsChangedNotificationToken;                  //@synthesize serviceSettingsChangedNotificationToken=_serviceSettingsChangedNotificationToken - In the implementation block
@property (nonatomic,retain) NSOperationQueue * notificationQueue;                               //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,retain) NSUserDefaults * sharedDefaults;                                    //@synthesize sharedDefaults=_sharedDefaults - In the implementation block
@property (nonatomic,copy) NSString * serviceState;                                              //@synthesize serviceState=_serviceState - In the implementation block
@property (nonatomic,copy) NSSet * serviceDisabledReasons;                                       //@synthesize serviceDisabledReasons=_serviceDisabledReasons - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)proxy;
-(FMXPCSession *)session;
-(void)setNotificationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)notificationQueue;
-(void)setSession:(FMXPCSession *)arg1 ;
-(NSUserDefaults *)sharedDefaults;
-(void)setProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(FMXPCSession *)userAgentSession;
-(FMXPCServiceDescription *)userAgentServiceDescription;
-(void)setUserAgentSession:(FMXPCSession *)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)userAgentProxy;
-(void)setUserAgentServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(id)serviceSettingsConfiguration;
-(NSUUID *)baUUID;
-(NSDate *)beaconZoneCreationDate;
-(NSNumber *)beaconZoneCreationErrorCode;
-(NSDate *)lastKeyRollDate;
-(NSString *)serviceState;
-(NSSet *)serviceDisabledReasons;
-(void)setUserAgentProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(void)setServiceState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)serviceSettingsChangedNotificationToken;
-(void)setServiceSettingsChangedNotificationToken:(id)arg1 ;
-(void)beginRefreshingServiceStateWithBlock:(/*^block*/id)arg1 ;
-(void)setSharedDefaults:(NSUserDefaults *)arg1 ;
-(void)setServiceState:(NSString *)arg1 ;
-(void)setServiceDisabledReasons:(NSSet *)arg1 ;
@end

