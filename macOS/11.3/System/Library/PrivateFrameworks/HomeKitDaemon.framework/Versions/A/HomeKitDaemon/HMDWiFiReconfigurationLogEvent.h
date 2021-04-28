/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class HMDAccessory;

@interface HMDWiFiReconfigurationLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	char _usingFailSafeUpdate;
	HMDAccessory* _accessory;
	long long _credentialType;
	HMDAccessory* _routerAccessory;

}

@property (nonatomic,retain) HMDAccessory * accessory;                                           //@synthesize accessory=_accessory - In the implementation block
@property (assign,getter=isUsingFailSafeUpdate,nonatomic) char usingFailSafeUpdate;              //@synthesize usingFailSafeUpdate=_usingFailSafeUpdate - In the implementation block
@property (assign,nonatomic) long long credentialType;                                           //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,retain) HMDAccessory * routerAccessory;                                     //@synthesize routerAccessory=_routerAccessory - In the implementation block
-(id)init;
-(id)eventName;
-(HMDAccessory *)accessory;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(long long)credentialType;
-(void)setCredentialType:(long long)arg1 ;
-(id)serializedEvent;
-(void)setUsingFailSafeUpdate:(char)arg1 ;
-(char)isUsingFailSafeUpdate;
-(HMDAccessory *)routerAccessory;
-(void)setRouterAccessory:(HMDAccessory *)arg1 ;
@end
