/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSData, NSString, CWChannel;

@interface CWNetwork : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _scanRecord;

}

@property (readonly) char supportsEasyConnect; 
@property (readonly) char supportsWPS; 
@property (copy,readonly) NSDictionary * scanRecord; 
@property (readonly) unsigned long long securityType; 
@property (readonly) unsigned long long physicalLayerMode; 
@property (readonly) NSData * bssidData; 
@property (readonly) char isCarPlayNetwork; 
@property (readonly) char isPersonalHotspot; 
@property (readonly) char isPasspoint; 
@property (readonly) long long anqpDomainID; 
@property (readonly) char hasInterworkingIE; 
@property (readonly) long long accessNetworkType; 
@property (readonly) char hasInternet; 
@property (readonly) char isAdditionalStepRequiredForAccess; 
@property (readonly) char isEmergencyServicesReachable; 
@property (readonly) char isUnauthenticatedEmergencyServiceAccessible; 
@property (readonly) long long venueGroup; 
@property (readonly) long long venueType; 
@property (copy,readonly) NSString * hessid; 
@property (readonly) long long aggregateRSSI; 
@property (copy) NSDictionary * scanRecord;                                         //@synthesize scanRecord=_scanRecord - In the implementation block
@property (readonly) NSString * ssid; 
@property (readonly) NSData * ssidData; 
@property (readonly) NSString * bssid; 
@property (readonly) CWChannel * wlanChannel; 
@property (readonly) long long rssiValue; 
@property (readonly) long long noiseMeasurement; 
@property (readonly) NSData * informationElementData; 
@property (readonly) NSString * countryCode; 
@property (readonly) long long beaconInterval; 
@property (readonly) char ibss; 
+(char)supportsSecureCoding;
-(id)accessoryFriendlyName;
-(NSString *)hessid;
-(char)isEqualToNetwork:(id)arg1 ;
-(long long)accessNetworkType;
-(char)isCarPlayNetwork;
-(char)isWiFiNetworkChargeablePublicNetwork;
-(char)supportsEasyConnect;
-(NSData *)bssidData;
-(long long)anqpDomainID;
-(char)hasInternet;
-(char)isAdditionalStepRequiredForAccess;
-(char)isEmergencyServicesReachable;
-(char)isUnauthenticatedEmergencyServiceAccessible;
-(char)isSecureWACDevice;
-(char)supportsPSK;
-(long long)comparePHYMode:(id)arg1 ;
-(id)initWithCoreWiFiScanResult:(id)arg1 ;
-(id)coreWiFiScanResult;
-(long long)aggregateRSSI;
-(id)wirelessProfile;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(char)isOpen;
-(id)channel;
-(id)rssi;
-(NSString *)ssid;
-(CWChannel *)wlanChannel;
-(unsigned long long)securityType;
-(id)ieData;
-(NSString *)bssid;
-(char)ibss;
-(NSDictionary *)scanRecord;
-(char)isPasspoint;
-(char)isPersonalHotspot;
-(NSData *)informationElementData;
-(long long)rssiValue;
-(NSData *)ssidData;
-(long long)venueGroup;
-(long long)venueType;
-(id)phyMode;
-(id)securityMode;
-(id)noise;
-(char)supportsPHYMode:(long long)arg1 ;
-(void)setScanRecord:(NSDictionary *)arg1 ;
-(long long)beaconInterval;
-(char)isAppleSWAP;
-(char)isIBSS;
-(char)supportsSecurity:(long long)arg1 ;
-(long long)strongestSupportedSecurity;
-(long long)fastestSupportedPHYMode;
-(char)hasInterworkingIE;
-(long long)noiseMeasurement;
-(unsigned long long)physicalLayerMode;
-(char)isWiFiNetworkMetered;
-(char)isUnconfiguredBaseStation:(id*)arg1 ;
-(char)isUnconfiguredAirPrintAccessory;
-(char)isUnconfiguredAirPlayAccessory;
-(char)isUnconfiguredAccessory;
-(char)supportsWPS;
-(long long)compareSecurity:(id)arg1 ;
-(id)initWithScanRecord:(id)arg1 ;
-(char)supportsEAP;
-(id)unconfiguredBaseStationName:(unsigned char)arg1 ;
@end
