/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol HMFLocking;
@class NSMutableSet, NSSet, HMDCharacteristicMetadata, NSDate, HMDHAPAccessory, HMDService, NSNumber, NSData, NSString, NSDictionary, NSUUID;

@interface HMDCharacteristic : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMFDumpState> {

	id<HMFLocking> _lock;
	NSMutableSet* _notificationRegistrations;
	char _notificationRegisteredWithRemoteGateway;
	char _broadcastNotificationEnabled;
	NSSet* _hapCharacteristicTuples;
	HMDCharacteristicMetadata* _metadata;
	NSDate* _notificationEnabledTime;
	HMDHAPAccessory* _accessory;
	HMDService* _service;
	NSNumber* _stateNumber;
	NSData* _authorizationData;
	NSString* _characteristicType;
	id _lastKnownValue;
	NSDate* _lastKnownValueUpdateTime;
	NSNumber* _characteristicInstanceID;
	long long _characteristicProperties;

}

@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,retain) NSSet * hapCharacteristicTuples;                           //@synthesize hapCharacteristicTuples=_hapCharacteristicTuples - In the implementation block
@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSString * characteristicType;                             //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,retain) id lastKnownValue;                                         //@synthesize lastKnownValue=_lastKnownValue - In the implementation block
@property (nonatomic,retain) NSDate * lastKnownValueUpdateTime;                         //@synthesize lastKnownValueUpdateTime=_lastKnownValueUpdateTime - In the implementation block
@property (nonatomic,retain) NSNumber * characteristicInstanceID;                       //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (assign,nonatomic) long long characteristicProperties;                        //@synthesize characteristicProperties=_characteristicProperties - In the implementation block
@property (nonatomic,copy,readonly) NSSet * notificationRegistrations; 
@property (nonatomic,retain) NSDate * notificationEnabledTime;                          //@synthesize notificationEnabledTime=_notificationEnabledTime - In the implementation block
@property (assign,nonatomic) char notificationRegisteredWithRemoteGateway;              //@synthesize notificationRegisteredWithRemoteGateway=_notificationRegisteredWithRemoteGateway - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDService * service;                             //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSNumber * instanceID; 
@property (nonatomic,readonly) long long properties; 
@property (nonatomic,copy,readonly) id value; 
@property (setter=setStateNumber:,nonatomic,copy) NSNumber * stateNumber;               //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) HMDCharacteristicMetadata * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSData * authorizationData;                                  //@synthesize authorizationData=_authorizationData - In the implementation block
@property (assign,nonatomic) char broadcastNotificationEnabled;                         //@synthesize broadcastNotificationEnabled=_broadcastNotificationEnabled - In the implementation block
@property (readonly) char shouldIgnoreCacheValueForRead; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(char)value:(id)arg1 differentThan:(id)arg2 ;
+(/*^block*/id)sortComparatorForCharacteristicDictionary;
+(id)currentTargetStateCharacteristicTypeMap;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(id)value;
-(NSString *)contextID;
-(HMDService *)service;
-(NSString *)characteristicType;
-(HMDCharacteristicMetadata *)metadata;
-(long long)properties;
-(HMDHAPAccessory *)accessory;
-(NSNumber *)instanceID;
-(char)updateWithDictionary:(id)arg1 ;
-(id)attributeDescriptions;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(char)isNotificationEnabled;
-(NSDate *)notificationEnabledTime;
-(void)setNotificationEnabledTime:(NSDate *)arg1 ;
-(id)dumpState;
-(void)unconfigure;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)stateNumber;
-(long long)characteristicProperties;
-(void)setCharacteristicProperties:(long long)arg1 ;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(NSData *)authorizationData;
-(NSNumber *)characteristicInstanceID;
-(void)setAuthorizationData:(NSData *)arg1 ;
-(NSUUID *)contextSPIUniqueIdentifier;
-(NSDictionary *)bulletinContext;
-(NSSet *)notificationRegistrations;
-(char)supportsNotification;
-(char)isNonHomeNotificationsEnabled;
-(char)isClientNotificationEnabled;
-(char)isNotificationEnabledForClientIdentifierPrefix:(id)arg1 ;
-(char)isNonClientNotificationEnabled;
-(NSDate *)lastKnownValueUpdateTime;
-(char)notificationRegisteredWithRemoteGateway;
-(char)isValueUpdatedFromHAPCharacteristic:(id)arg1 ;
-(id)lastKnownValue;
-(void)updateValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 ;
-(char)shouldIgnoreCacheValueForRead;
-(id)validateValueForWrite:(id)arg1 outValue:(id*)arg2 ;
-(char)supportsRead;
-(NSString *)serializedIdentifier;
-(id)characteristicForHAPAccessory:(id)arg1 ;
-(void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(void)setNotificationEnabled:(char)arg1 forClientIdentifier:(id)arg2 ;
-(void)setNotificationRegisteredWithRemoteGateway:(char)arg1 ;
-(char)deregisterNotificationForClientIdentifier:(id)arg1 ;
-(char)isNotificationEnabledForClientIdentifier:(id)arg1 ;
-(char)deregisterNotificationIfNotLastForClientIdentifier:(id)arg1 ;
-(void)setBroadcastNotificationEnabled:(char)arg1 ;
-(char)supportsWrite;
-(id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3 ;
-(void)configureWithCharacteristic:(id)arg1 ;
-(void)updateLastKnownValue;
-(id)getCharacteristicDictionary;
-(char)broadcastNotificationEnabled;
-(id)characteristicTypeDescription;
-(id)shortTypeDescription;
-(NSSet *)hapCharacteristicTuples;
-(void)setLastKnownValue:(id)arg1 ;
-(void)setLastKnownValueUpdateTime:(NSDate *)arg1 ;
-(id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(void)setHapCharacteristicTuples:(NSSet *)arg1 ;
-(char)setNotificationEnabled:(char)arg1 forClientIdentifier:(id)arg2 removeLast:(char)arg3 ;
-(id)validateValueForNotify:(id)arg1 outValue:(id*)arg2 ;
-(void)updateService:(id)arg1 accessory:(id)arg2 ;
-(void)setCharacteristicInstanceID:(NSNumber *)arg1 ;
@end

