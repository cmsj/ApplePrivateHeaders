/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSUUID, NSDictionary;

@interface CUWiFiDevice : NSObject {

	unsigned _deviceIECategory;
	unsigned _deviceIEFlags;
	int _rssi;
	int _present;
	NSData* _bssid;
	NSData* _deviceIEBluetoothMAC;
	NSData* _deviceIEDeviceID;
	NSString* _deviceIEManufacturer;
	NSString* _deviceIEModel;
	NSString* _deviceIEName;
	NSData* _deviceIDOUI;
	NSData* _deviceIDSetupHash;
	NSUUID* _identifier;
	NSData* _ieData;
	id _platformObject;
	NSDictionary* _rawScanResult;
	NSString* _ssid;

}

@property (assign,nonatomic) int present;                                //@synthesize present=_present - In the implementation block
@property (nonatomic,copy) NSData * bssid;                               //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,copy) NSData * deviceIEBluetoothMAC;                //@synthesize deviceIEBluetoothMAC=_deviceIEBluetoothMAC - In the implementation block
@property (assign,nonatomic) unsigned deviceIECategory;                  //@synthesize deviceIECategory=_deviceIECategory - In the implementation block
@property (nonatomic,copy) NSData * deviceIEDeviceID;                    //@synthesize deviceIEDeviceID=_deviceIEDeviceID - In the implementation block
@property (assign,nonatomic) unsigned deviceIEFlags;                     //@synthesize deviceIEFlags=_deviceIEFlags - In the implementation block
@property (nonatomic,copy) NSString * deviceIEManufacturer;              //@synthesize deviceIEManufacturer=_deviceIEManufacturer - In the implementation block
@property (nonatomic,copy) NSString * deviceIEModel;                     //@synthesize deviceIEModel=_deviceIEModel - In the implementation block
@property (nonatomic,copy) NSString * deviceIEName;                      //@synthesize deviceIEName=_deviceIEName - In the implementation block
@property (nonatomic,copy) NSData * deviceIDOUI;                         //@synthesize deviceIDOUI=_deviceIDOUI - In the implementation block
@property (nonatomic,copy) NSData * deviceIDSetupHash;                   //@synthesize deviceIDSetupHash=_deviceIDSetupHash - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * ieData;                              //@synthesize ieData=_ieData - In the implementation block
@property (nonatomic,retain) id platformObject;                          //@synthesize platformObject=_platformObject - In the implementation block
@property (nonatomic,copy) NSDictionary * rawScanResult;                 //@synthesize rawScanResult=_rawScanResult - In the implementation block
@property (assign,nonatomic) int rssi;                                   //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy) NSString * ssid;                              //@synthesize ssid=_ssid - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(int)present;
-(id)platformObject;
-(void)setPresent:(int)arg1 ;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(unsigned)deviceIEFlags;
-(NSData *)deviceIEDeviceID;
-(NSDictionary *)rawScanResult;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(unsigned)_updateWithDeviceIE:(const char*)arg1 end:(const char*)arg2 ;
-(void)setPlatformObject:(id)arg1 ;
-(void)setIeData:(NSData *)arg1 ;
-(NSData *)ieData;
-(void)setRawScanResult:(NSDictionary *)arg1 ;
-(void)setBssid:(NSData *)arg1 ;
-(NSData *)bssid;
-(NSData *)deviceIEBluetoothMAC;
-(unsigned)deviceIECategory;
-(NSString *)deviceIEManufacturer;
-(NSString *)deviceIEModel;
-(NSString *)deviceIEName;
-(NSData *)deviceIDOUI;
-(NSData *)deviceIDSetupHash;
-(void)setDeviceIEBluetoothMAC:(NSData *)arg1 ;
-(void)setDeviceIECategory:(unsigned)arg1 ;
-(void)setDeviceIEDeviceID:(NSData *)arg1 ;
-(void)setDeviceIEFlags:(unsigned)arg1 ;
-(void)setDeviceIEManufacturer:(NSString *)arg1 ;
-(void)setDeviceIEModel:(NSString *)arg1 ;
-(void)setDeviceIEName:(NSString *)arg1 ;
-(void)setDeviceIDOUI:(NSData *)arg1 ;
-(void)setDeviceIDSetupHash:(NSData *)arg1 ;
@end
