/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/Versions/A/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingUtilities/AXPSAPDevice.h>

@class NSMutableArray, NSString, NSArray, CBPeripheral;

@interface AXFakePSAPDevice : AXPSAPDevice {

	NSMutableArray* _leftFakePrograms;
	NSMutableArray* _rightFakePrograms;
	/*^block*/id _writeBlock;
	char _isConnecting;
	char _connected;
	unsigned long long _deviceType;
	NSString* _name;
	NSArray* _manufacturer;
	NSArray* _model;
	NSString* _leftUUID;
	NSString* _rightUUID;
	NSString* _leftFirmwareVersion;
	NSString* _rightFirmwareVersion;
	NSString* _leftHardwareVersion;
	NSString* _rightHardwareVersion;
	CBPeripheral* leftPeripheral;
	CBPeripheral* rightPeripheral;
	unsigned long long _type;
	unsigned long long _excludedProperties;

}

@property (assign,nonatomic) char connected;                                     //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * manufacturer;                             //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSArray * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * leftUUID;                                //@synthesize leftUUID=_leftUUID - In the implementation block
@property (nonatomic,retain) NSString * rightUUID;                               //@synthesize rightUUID=_rightUUID - In the implementation block
@property (assign,nonatomic) char isConnecting;                                  //@synthesize isConnecting=_isConnecting - In the implementation block
@property (nonatomic,retain) NSString * leftFirmwareVersion;                     //@synthesize leftFirmwareVersion=_leftFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightFirmwareVersion;                    //@synthesize rightFirmwareVersion=_rightFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * leftHardwareVersion;                     //@synthesize leftHardwareVersion=_leftHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightHardwareVersion;                    //@synthesize rightHardwareVersion=_rightHardwareVersion - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;                      //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long excludedProperties;              //@synthesize excludedProperties=_excludedProperties - In the implementation block
@property (nonatomic,retain) CBPeripheral * leftPeripheral; 
@property (nonatomic,retain) CBPeripheral * rightPeripheral; 
-(void)dealloc;
-(NSString *)name;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(void)disconnect;
-(char)isConnected;
-(id)valueForProperty:(unsigned long long)arg1 ;
-(unsigned long long)deviceType;
-(NSArray *)model;
-(void)setModel:(NSArray *)arg1 ;
-(char)connected;
-(void)setConnected:(char)arg1 ;
-(void)connect;
-(NSArray *)manufacturer;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(void)setManufacturer:(NSArray *)arg1 ;
-(id)initWithDeviceType:(unsigned long long)arg1 ;
-(char)isConnecting;
-(char)isPersistent;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2 ;
-(id)persistentRepresentation;
-(char)hasConnection;
-(void)persist;
-(void)setIsConnecting:(char)arg1 ;
-(void)setLeftUUID:(NSString *)arg1 ;
-(void)setRightUUID:(NSString *)arg1 ;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(void)setLeftFirmwareVersion:(NSString *)arg1 ;
-(void)setRightFirmwareVersion:(NSString *)arg1 ;
-(void)setLeftHardwareVersion:(NSString *)arg1 ;
-(void)setRightHardwareVersion:(NSString *)arg1 ;
-(char)leftAvailable;
-(char)rightAvailable;
-(id)leftPrograms;
-(id)rightPrograms;
-(char)isLeftConnected;
-(char)isRightConnected;
-(char)programsListsAreEqual;
-(char)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2 ;
-(char)showCombinedPrograms;
-(char)didLoadRequiredProperties;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(char)didLoadBasicProperties;
-(id)manufacturerForType;
-(id)modelForType;
-(void)createPrograms;
-(unsigned long long)excludedProperties;
-(unsigned long long)availablePropertiesForPeripheral:(id)arg1 ;
-(char)deviceSupportsProperty:(unsigned long long)arg1 ;
-(void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3 ;
-(void)writeSignedInt:(char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3 ;
-(void)registerWriteBlock:(/*^block*/id)arg1 ;
-(void)setNewName:(id)arg1 ;
-(CBPeripheral *)leftPeripheral;
-(void)setLeftPeripheral:(CBPeripheral *)arg1 ;
-(CBPeripheral *)rightPeripheral;
-(void)setRightPeripheral:(CBPeripheral *)arg1 ;
-(void)setExcludedProperties:(unsigned long long)arg1 ;
-(char)isFakeDevice;
@end

