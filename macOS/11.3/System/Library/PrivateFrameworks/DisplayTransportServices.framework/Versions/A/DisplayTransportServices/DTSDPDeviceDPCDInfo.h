/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DisplayTransportServices.framework/Versions/A/DisplayTransportServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayTransportServices/DisplayTransportServices-Structs.h>
#import <libobjc.A.dylib/DTSDisplayPortDeviceInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DTSDPDeviceDPCDInfo : NSObject <DTSDisplayPortDeviceInfo, NSSecureCoding, NSCopying> {

	char _branch;
	unsigned char _hardwareMajorVersion;
	unsigned char _hardwareMinorVersion;
	unsigned char _firmwareMajorVersion;
	unsigned char _firmwareMinorVersion;
	unsigned _oui;
	NSString* _deviceIdentifier;

}

@property (assign,nonatomic) unsigned oui;                                    //@synthesize oui=_oui - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                     //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,getter=isBranch,nonatomic) char branch;                     //@synthesize branch=_branch - In the implementation block
@property (assign,nonatomic) unsigned char hardwareMajorVersion;              //@synthesize hardwareMajorVersion=_hardwareMajorVersion - In the implementation block
@property (assign,nonatomic) unsigned char hardwareMinorVersion;              //@synthesize hardwareMinorVersion=_hardwareMinorVersion - In the implementation block
@property (assign,nonatomic) unsigned char firmwareMajorVersion;              //@synthesize firmwareMajorVersion=_firmwareMajorVersion - In the implementation block
@property (assign,nonatomic) unsigned char firmwareMinorVersion;              //@synthesize firmwareMinorVersion=_firmwareMinorVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setOui:(unsigned)arg1 ;
-(unsigned)oui;
-(unsigned char)firmwareMajorVersion;
-(unsigned char)firmwareMinorVersion;
-(unsigned char)hardwareMajorVersion;
-(unsigned char)hardwareMinorVersion;
-(char)isBranch;
-(void)setBranch:(char)arg1 ;
-(void)setHardwareMajorVersion:(unsigned char)arg1 ;
-(void)setHardwareMinorVersion:(unsigned char)arg1 ;
-(void)setFirmwareMajorVersion:(unsigned char)arg1 ;
-(void)setFirmwareMinorVersion:(unsigned char)arg1 ;
@end

