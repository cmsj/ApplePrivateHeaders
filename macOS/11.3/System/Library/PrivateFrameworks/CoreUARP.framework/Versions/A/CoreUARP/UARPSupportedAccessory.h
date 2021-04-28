/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/Versions/A/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UARPAccessoryHardwareID;

@interface UARPSupportedAccessory : NSObject {

	NSString* _appleModelNumber;
	NSString* _productGroup;
	NSString* _productNumber;
	unsigned long long _capabilities;
	UARPAccessoryHardwareID* _hardwareID;

}

@property (readonly) NSString * appleModelNumber;                       //@synthesize appleModelNumber=_appleModelNumber - In the implementation block
@property (readonly) NSString * productGroup;                           //@synthesize productGroup=_productGroup - In the implementation block
@property (readonly) NSString * productNumber;                          //@synthesize productNumber=_productNumber - In the implementation block
@property (readonly) unsigned long long capabilities;                   //@synthesize capabilities=_capabilities - In the implementation block
@property (readonly) UARPAccessoryHardwareID * hardwareID;              //@synthesize hardwareID=_hardwareID - In the implementation block
@property (readonly) NSString * identifier; 
+(id)supportedAccessories;
+(id)findByHardwareID:(id)arg1 ;
+(void)addSupportedHIDAccessories:(id)arg1 ;
+(void)addSupportedBluetoothAccessories:(id)arg1 ;
+(void)addSupportedUSBAccessories:(id)arg1 ;
+(id)newSupportedHIDAccessory:(unsigned long long)arg1 vendorID:(unsigned short)arg2 productID:(unsigned short)arg3 appleModelNumber:(id)arg4 ;
+(id)newSupportedHIDAccessory:(unsigned long long)arg1 vendorID:(unsigned short)arg2 productID:(unsigned short)arg3 productGroup:(id)arg4 productNumber:(id)arg5 ;
+(id)newSupportedUSBAccessory:(unsigned long long)arg1 vendorID:(unsigned short)arg2 productID:(unsigned short)arg3 appleModelNumber:(id)arg4 ;
+(id)newSupportedBluetoothAccessory:(unsigned long long)arg1 vendorIDSource:(long long)arg2 vendorID:(unsigned short)arg3 productID:(unsigned short)arg4 productVersion:(unsigned short)arg5 appleModelNumber:(id)arg6 ;
+(id)supportedAccessoriesByTransport:(long long)arg1 ;
+(id)findByAppleModelNumber:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)identifier;
-(unsigned long long)capabilities;
-(NSString *)productGroup;
-(NSString *)productNumber;
-(NSString *)appleModelNumber;
-(id)initWithHardwareID:(id)arg1 capabilities:(unsigned long long)arg2 ;
-(id)initWithHardwareID:(id)arg1 appleModelNumber:(id)arg2 capabilities:(unsigned long long)arg3 ;
-(id)initWithHardwareID:(id)arg1 productGroup:(id)arg2 productNumber:(id)arg3 capabilities:(unsigned long long)arg4 ;
-(UARPAccessoryHardwareID *)hardwareID;
@end
