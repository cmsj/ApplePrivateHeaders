/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAP2CharacteristicTupleValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMFMerging.h>

@class HMFUnfairLock, NSDate, NSNumber, NSString, HAPService, HAPCharacteristicMetadata, CBCharacteristic;

@interface HAPCharacteristic : HMFObject <HAP2CharacteristicTupleValue, NSCopying, HMFMerging> {

	HMFUnfairLock* _lock;
	char _eventNotificationsEnabled;
	char _shouldValidateValueAfterReading;
	char _prohibitCaching;
	char _implicitWriteWithResponse;
	NSDate* _valueUpdatedTime;
	id _value;
	NSNumber* _stateNumber;
	NSString* _type;
	NSNumber* _instanceID;
	HAPService* _service;
	unsigned long long _properties;
	HAPCharacteristicMetadata* _metadata;
	HAPCharacteristicMetadata* _accessoryMetadata;

}

@property (setter=setCBCharacteristic:,nonatomic,retain) CBCharacteristic * cbCharacteristic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * type;                                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                                                         //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HAPService * service;                                                                 //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                                                               //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) char eventNotificationsEnabled;                                                              //@synthesize eventNotificationsEnabled=_eventNotificationsEnabled - In the implementation block
@property (nonatomic,copy) HAPCharacteristicMetadata * metadata;                                                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) HAPCharacteristicMetadata * accessoryMetadata;                                             //@synthesize accessoryMetadata=_accessoryMetadata - In the implementation block
@property (nonatomic,retain) NSDate * valueUpdatedTime;                                                                   //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
@property (assign,nonatomic) char shouldValidateValueAfterReading;                                                        //@synthesize shouldValidateValueAfterReading=_shouldValidateValueAfterReading - In the implementation block
@property (getter=isWriteWithResponseImplicitlySupported,nonatomic,readonly) char implicitWriteWithResponse;              //@synthesize implicitWriteWithResponse=_implicitWriteWithResponse - In the implementation block
@property (setter=setValue:,nonatomic,copy) id value;                                                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                                                                    //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) char supportsAdditionalAuthorizationData; 
@property (nonatomic,readonly) char supportsWriteWithResponse; 
@property (assign,nonatomic) char prohibitCaching;                                                                        //@synthesize prohibitCaching=_prohibitCaching - In the implementation block
+(id)hap2_shortTypeFromUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HAPService *)service;
-(HAPCharacteristicMetadata *)metadata;
-(void)setMetadata:(HAPCharacteristicMetadata *)arg1 ;
-(unsigned long long)properties;
-(void)setProperties:(unsigned long long)arg1 ;
-(void)setService:(HAPService *)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(NSNumber *)instanceID;
-(char)mergeObject:(id)arg1 ;
-(char)shouldMergeObject:(id)arg1 ;
-(NSDate *)valueUpdatedTime;
-(void)setValueUpdatedTime:(NSDate *)arg1 ;
-(id)propertiesDescription;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)stateNumber;
-(void)setEventNotificationsEnabled:(char)arg1 ;
-(char)shouldValidateValueAfterReading;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(char)eventNotificationsEnabled;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(char)arg6 metadata:(id)arg7 ;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(char)arg6 implicitWriteWithResponse:(char)arg7 metadata:(id)arg8 ;
-(HAPCharacteristicMetadata *)accessoryMetadata;
-(void)setShouldValidateValueAfterReading:(char)arg1 ;
-(char)hap2_canUseCachedValue;
-(CBCharacteristic *)cbCharacteristic;
-(void)setCBCharacteristic:(id)arg1 ;
-(char)isEqualToCharacteristic:(id)arg1 ;
-(char)hap2_mergeWithCharacteristic:(id)arg1 ;
-(char)isWriteWithResponseImplicitlySupported;
-(char)prohibitCaching;
-(void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2 ;
-(id)_generateValidMetadata:(id)arg1 ;
-(char)supportsAdditionalAuthorizationData;
-(char)supportsWriteWithResponse;
-(void)setProhibitCaching:(char)arg1 ;
@end
