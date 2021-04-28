/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/Versions/A/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSData, NSString, NSArray, W5WiFiChannel;

@interface W5WiFiScanResult : NSObject <NSCopying, NSSecureCoding> {

	char _isIBSS;
	char _isPasspoint;
	char _isPersonalHotspot;
	char _isAppleSWAP;
	char _supportsWEPCipher;
	char _supportsTKIPCipher;
	int _supportedPHYModes;
	NSDictionary* _scanRecord;
	NSData* _ssid;
	NSString* _ssidString;
	NSString* _bssid;
	NSArray* _supportedSecurityTypes;
	long long _rssi;
	long long _noise;
	NSString* _countryCode;
	long long _beaconInterval;
	NSString* _airPortBaseStationModelName;
	W5WiFiChannel* _channel;

}

@property (nonatomic,copy) NSDictionary * scanRecord;                           //@synthesize scanRecord=_scanRecord - In the implementation block
@property (nonatomic,copy) NSData * ssid;                                       //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * ssidString;                               //@synthesize ssidString=_ssidString - In the implementation block
@property (nonatomic,copy) NSString * bssid;                                    //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,copy) NSArray * supportedSecurityTypes;                    //@synthesize supportedSecurityTypes=_supportedSecurityTypes - In the implementation block
@property (assign,nonatomic) int supportedPHYModes;                             //@synthesize supportedPHYModes=_supportedPHYModes - In the implementation block
@property (assign,nonatomic) long long rssi;                                    //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) long long noise;                                   //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) char isIBSS;                                       //@synthesize isIBSS=_isIBSS - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                              //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) long long beaconInterval;                          //@synthesize beaconInterval=_beaconInterval - In the implementation block
@property (assign,nonatomic) char isPasspoint;                                  //@synthesize isPasspoint=_isPasspoint - In the implementation block
@property (assign,nonatomic) char isPersonalHotspot;                            //@synthesize isPersonalHotspot=_isPersonalHotspot - In the implementation block
@property (assign,nonatomic) char isAppleSWAP;                                  //@synthesize isAppleSWAP=_isAppleSWAP - In the implementation block
@property (nonatomic,copy) NSString * airPortBaseStationModelName;              //@synthesize airPortBaseStationModelName=_airPortBaseStationModelName - In the implementation block
@property (nonatomic,copy) W5WiFiChannel * channel;                             //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) char supportsWEPCipher;                            //@synthesize supportsWEPCipher=_supportsWEPCipher - In the implementation block
@property (assign,nonatomic) char supportsTKIPCipher;                           //@synthesize supportsTKIPCipher=_supportsTKIPCipher - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(W5WiFiChannel *)channel;
-(long long)rssi;
-(void)setRssi:(long long)arg1 ;
-(void)setChannel:(W5WiFiChannel *)arg1 ;
-(NSData *)ssid;
-(void)setSsid:(NSData *)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(NSDictionary *)scanRecord;
-(char)isPasspoint;
-(char)isPersonalHotspot;
-(void)setNoise:(long long)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(long long)noise;
-(NSString *)ssidString;
-(void)setSsidString:(NSString *)arg1 ;
-(void)setIsPasspoint:(char)arg1 ;
-(NSArray *)supportedSecurityTypes;
-(int)supportedPHYModes;
-(char)supportsPHYMode:(int)arg1 ;
-(NSString *)airPortBaseStationModelName;
-(char)isEqualToScanResult:(id)arg1 ;
-(void)setScanRecord:(NSDictionary *)arg1 ;
-(void)setSupportedSecurityTypes:(NSArray *)arg1 ;
-(void)setSupportedPHYModes:(int)arg1 ;
-(long long)beaconInterval;
-(void)setBeaconInterval:(long long)arg1 ;
-(char)isAppleSWAP;
-(void)setIsAppleSWAP:(char)arg1 ;
-(char)isIBSS;
-(void)setIsIBSS:(char)arg1 ;
-(void)setIsPersonalHotspot:(char)arg1 ;
-(void)setAirPortBaseStationModelName:(NSString *)arg1 ;
-(char)supportsWEPCipher;
-(void)setSupportsWEPCipher:(char)arg1 ;
-(char)supportsTKIPCipher;
-(void)setSupportsTKIPCipher:(char)arg1 ;
-(char)supportsSecurity:(long long)arg1 ;
-(long long)strongestSupportedSecurity;
-(int)fastestSupportedPHYMode;
-(char)isAirPortBaseStation:(out id*)arg1 modelID:(out char*)arg2 ;
@end
