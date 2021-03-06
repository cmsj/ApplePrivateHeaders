/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject, NSString;

@interface CWFSCNetworkService : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCDynamicStoreRef _storeRef;
	SCPreferencesRef _prefsRef;
	char _isMonitoringEvents;
	NSString* _serviceID;
	NSString* _serviceName;
	char _isServiceEnabled;
	/*^block*/id _eventHandler;
	NSString* _interfaceName;

}

@property (copy) id eventHandler;                                          //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceID; 
-(char)isMonitoringEvents;
-(char)__updateServiceID;
-(void)__refreshNotificationKeys;
-(id)__IPv4StateConfig;
-(id)__IPv4SetupConfig;
-(id)__IPv6StateConfig;
-(id)__IPv6SetupConfig;
-(id)__DNSStateConfig;
-(id)__DNSSetupConfig;
-(id)__DHCPInfo;
-(id)IPv4Router;
-(id)IPv6Router;
-(id)IPv6ConfigMethod;
-(id)IPv4ConfigMethod;
-(id)DNSDomainName;
-(char)isServiceEnabled;
-(id)DHCPLeaseStartTimestamp;
-(id)DHCPLeaseExpirationTimestamp;
-(void)dealloc;
-(id)init;
-(id)serviceName;
-(void)setEventHandler:(id)arg1 ;
-(NSString *)interfaceName;
-(id)eventHandler;
-(NSString *)serviceID;
-(id)initWithInterfaceName:(id)arg1 ;
-(void)stopEventMonitoring;
-(void)startEventMonitoring;
-(id)IPv6Addresses;
-(id)DNSServerAddresses;
-(id)IPv4Addresses;
-(id)__proxiesSetupConfig;
@end

