/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@class HMFUnfairLock, NSUUID, HMAccessory, NSString, HMApplicationData, HMBulletinBoardNotification, NSURL, NSNumber, _HMContext, HMMutableArray, NSArray, NSDictionary;

@interface HMService : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	char _nameModifiable;
	char _userInteractive;
	char _primaryService;
	char _mediaSourceDisplayOrderModifiable;
	NSUUID* _uniqueIdentifier;
	HMAccessory* _accessory;
	NSString* _serviceType;
	NSString* _name;
	NSString* _configuredName;
	NSString* _defaultName;
	NSString* _associatedServiceType;
	NSString* _serviceSubtype;
	long long _configurationState;
	HMApplicationData* _applicationData;
	HMBulletinBoardNotification* _bulletinBoardNotificationInternal;
	NSURL* _homeObjectURLInternal;
	NSNumber* _mediaSourceIdentifier;
	_HMContext* _context;
	NSNumber* _instanceID;
	HMMutableArray* _currentCharacteristics;
	NSNumber* _lastKnownDiscoveryMode;
	NSNumber* _lastKnownOperatingStateValue;
	NSNumber* _lastKnownOperatingStateAbnormalReasonsValue;
	NSUUID* _uuid;
	NSArray* _linkedServiceInstanceIDs;
	NSArray* _mediaSourceDisplayOrder;

}

@property (copy,readonly) NSDictionary * serializedDictionaryRepresentation; 
@property (nonatomic,retain) _HMContext * context;                                                           //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSNumber * instanceID;                                                        //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                                                 //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                                           //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * defaultName;                                                         //@synthesize defaultName=_defaultName - In the implementation block
@property (nonatomic,copy) NSString * associatedServiceType;                                                 //@synthesize associatedServiceType=_associatedServiceType - In the implementation block
@property (nonatomic,copy) NSString * serviceSubtype;                                                        //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (assign,nonatomic) long long configurationState;                                                   //@synthesize configurationState=_configurationState - In the implementation block
@property (nonatomic,readonly) HMBulletinBoardNotification * bulletinBoardNotificationInternal;              //@synthesize bulletinBoardNotificationInternal=_bulletinBoardNotificationInternal - In the implementation block
@property (nonatomic,readonly) NSURL * homeObjectURLInternal;                                                //@synthesize homeObjectURLInternal=_homeObjectURLInternal - In the implementation block
@property (nonatomic,copy) HMMutableArray * currentCharacteristics;                                          //@synthesize currentCharacteristics=_currentCharacteristics - In the implementation block
@property (nonatomic,copy) NSNumber * lastKnownDiscoveryMode;                                                //@synthesize lastKnownDiscoveryMode=_lastKnownDiscoveryMode - In the implementation block
@property (nonatomic,copy) NSNumber * lastKnownOperatingStateValue;                                          //@synthesize lastKnownOperatingStateValue=_lastKnownOperatingStateValue - In the implementation block
@property (nonatomic,copy) NSNumber * lastKnownOperatingStateAbnormalReasonsValue;                           //@synthesize lastKnownOperatingStateAbnormalReasonsValue=_lastKnownOperatingStateAbnormalReasonsValue - In the implementation block
@property (nonatomic,retain) NSNumber * mediaSourceIdentifier;                                               //@synthesize mediaSourceIdentifier=_mediaSourceIdentifier - In the implementation block
@property (assign) char nameModifiable;                                                                      //@synthesize nameModifiable=_nameModifiable - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * linkedServiceInstanceIDs;                                      //@synthesize linkedServiceInstanceIDs=_linkedServiceInstanceIDs - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * configuredName;                                                        //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,retain) NSArray * mediaSourceDisplayOrder;                                              //@synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder - In the implementation block
@property (assign,nonatomic) char mediaSourceDisplayOrderModifiable;                                         //@synthesize mediaSourceDisplayOrderModifiable=_mediaSourceDisplayOrderModifiable - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSArray * characteristics; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isUserInteractive,nonatomic,readonly) char userInteractive;                                //@synthesize userInteractive=_userInteractive - In the implementation block
@property (getter=isPrimaryService,nonatomic,readonly) char primaryService;                                  //@synthesize primaryService=_primaryService - In the implementation block
@property (nonatomic,copy,readonly) NSArray * linkedServices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (nonatomic,retain) HMApplicationData * applicationData;                                            //@synthesize applicationData=_applicationData - In the implementation block
+(char)supportsSecureCoding;
+(id)logCategory;
+(id)serviceWithServiceReference:(id)arg1 home:(id)arg2 ;
+(id)serviceWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
+(long long)_mapToServiceConfigurationStateFromIsConfiguredValue:(id)arg1 ;
+(void)initializeCharacteristicDictionaries;
+(id)_serviceTypeAsString:(id)arg1 ;
+(id)defaultCharacteristicByServiceDictionary;
+(id)characteristicBlacklistForShortcutConditions;
+(id)_mapToIsConfiguredValueFromServiceConfigurationState:(long long)arg1 ;
+(id)__localizedDescriptionForServiceType:(id)arg1 ;
+(id)localizedDescriptionForServiceType:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(NSString *)defaultName;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(HMApplicationData *)applicationData;
-(NSNumber *)instanceID;
-(NSArray *)linkedServices;
-(long long)configurationState;
-(NSArray *)characteristics;
-(NSNumber *)mediaSourceIdentifier;
-(void)setMediaSourceIdentifier:(NSNumber *)arg1 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(id)logIdentifier;
-(void)_unconfigure;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bulletinBoardNotification;
-(NSDictionary *)serializedDictionaryRepresentation;
-(NSArray *)linkedServiceInstanceIDs;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_findCharacteristic:(id)arg1 ;
-(id)homeObjectURL;
-(NSUUID *)applicationDataIdentifier;
-(void)_removeCharacteristic:(id)arg1 ;
-(void)_addCharacteristic:(id)arg1 ;
-(void)_handleUpdateName:(id)arg1 ;
-(void)_handleUpdateDefaultName:(id)arg1 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg1 ;
-(void)_handleUpdateServiceSubtype:(id)arg1 ;
-(void)_handleUpdateConfigurationState:(long long)arg1 ;
-(void)_handleMediaSourceIdentifierUpdated:(id)arg1 ;
-(id)_findCharacteristicWithUniqueIdentifier:(id)arg1 ;
-(NSArray *)mediaSourceDisplayOrder;
-(char)mediaSourceDisplayOrderModifiable;
-(void)setMediaSourceDisplayOrder:(NSArray *)arg1 ;
-(HMBulletinBoardNotification *)bulletinBoardNotificationInternal;
-(HMMutableArray *)currentCharacteristics;
-(id)_serviceTypeDescription;
-(id)characteristicsSupportedForShortcutConditions;
-(NSNumber *)lastKnownDiscoveryMode;
-(NSNumber *)lastKnownOperatingStateValue;
-(NSNumber *)lastKnownOperatingStateAbnormalReasonsValue;
-(NSURL *)homeObjectURLInternal;
-(char)isNameModifiable;
-(void)_updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)associatedServiceType;
-(void)_updateConfigurationState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultName:(NSString *)arg1 ;
-(char)isUserInteractive;
-(void)setAssociatedServiceType:(NSString *)arg1 ;
-(NSString *)serviceSubtype;
-(void)setServiceSubtype:(NSString *)arg1 ;
-(void)setConfigurationState:(long long)arg1 ;
-(void)setLastKnownDiscoveryMode:(NSNumber *)arg1 ;
-(void)_addLastKnownSleepDiscoveryModeDidUpdateDelegateCallbackToOperations:(id)arg1 ;
-(void)setLastKnownOperatingStateValue:(NSNumber *)arg1 ;
-(void)setLastKnownOperatingStateAbnormalReasonsValue:(NSNumber *)arg1 ;
-(void)_addLastKnownOperatingStateWithResponsesDidUpdateDelegateCallbackToOperations:(id)arg1 ;
-(void)setMediaSourceDisplayOrderModifiable:(char)arg1 ;
-(char)isPrimaryService;
-(char)_hasCharacteristic:(id)arg1 ;
-(id)defaultCharacteristic;
-(char)hasSleepDiscoveryMode;
-(long long)lastKnownSleepDiscoveryMode;
-(char)hasOperatingState;
-(char)hasOperatingStateAbnormalReasons;
-(long long)lastKnownOperatingState;
-(unsigned long long)lastKnownOperatingStateAbnormalReasons;
-(void)updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateConfigurationState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleUpdateServicePrimary:(id)arg1 ;
-(void)_handleMarkServiceInteractive:(id)arg1 ;
-(char)_hasCharacteristicOfType:(id)arg1 ;
-(char)nameModifiable;
-(void)setNameModifiable:(char)arg1 ;
-(void)setCurrentCharacteristics:(HMMutableArray *)arg1 ;
@end

