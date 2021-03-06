/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSData, NSString;

@interface CBControllerInfo : NSObject <CUXPCCodable> {

	unsigned _supportedServices;
	NSData* _hardwareAddressData;
	NSString* _firmwareVersion;

}

@property (nonatomic,copy) NSData * hardwareAddressData;              //@synthesize hardwareAddressData=_hardwareAddressData - In the implementation block
@property (nonatomic,copy) NSString * firmwareVersion;                //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (assign,nonatomic) unsigned supportedServices;              //@synthesize supportedServices=_supportedServices - In the implementation block
-(NSData *)hardwareAddressData;
-(void)setHardwareAddressData:(NSData *)arg1 ;
-(void)setSupportedServices:(unsigned)arg1 ;
-(id)description;
-(NSString *)firmwareVersion;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(unsigned)supportedServices;
@end

