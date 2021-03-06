/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSNumber, HAPCharacteristicMetadata;

@interface HAPBTLECharacteristicSignature : HMFObject {

	char _authenticated;
	NSUUID* _characteristicType;
	NSNumber* _serviceInstanceID;
	NSUUID* _serviceType;
	unsigned long long _characteristicProperties;
	HAPCharacteristicMetadata* _characteristicMetadata;

}

@property (nonatomic,copy,readonly) NSUUID * characteristicType;                                //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * serviceInstanceID;                               //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * serviceType;                                       //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) unsigned long long characteristicProperties;                     //@synthesize characteristicProperties=_characteristicProperties - In the implementation block
@property (nonatomic,readonly) HAPCharacteristicMetadata * characteristicMetadata;              //@synthesize characteristicMetadata=_characteristicMetadata - In the implementation block
@property (getter=isAuthenticated,nonatomic,readonly) char authenticated;                       //@synthesize authenticated=_authenticated - In the implementation block
-(NSUUID *)serviceType;
-(NSUUID *)characteristicType;
-(char)isAuthenticated;
-(unsigned long long)characteristicProperties;
-(HAPCharacteristicMetadata *)characteristicMetadata;
-(NSNumber *)serviceInstanceID;
-(id)initWithCharacteristicType:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 characteristicProperties:(unsigned long long)arg4 characteristicMetadata:(id)arg5 authenticated:(char)arg6 ;
@end

