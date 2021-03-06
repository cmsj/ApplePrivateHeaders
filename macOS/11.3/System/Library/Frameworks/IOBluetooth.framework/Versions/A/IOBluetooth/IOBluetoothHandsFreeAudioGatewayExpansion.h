/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IOBluetoothHandsFreeAudioGatewayExpansion : NSObject {

	unsigned _vendorID;
	unsigned _productID;
	unsigned _version;
	int _batteryLevel;
	char _dockState;
	char _isSiriActive;

}

@property (assign) unsigned vendorID;               //@synthesize vendorID=_vendorID - In the implementation block
@property (assign) unsigned productID;              //@synthesize productID=_productID - In the implementation block
@property (assign) unsigned version;                //@synthesize version=_version - In the implementation block
@property (assign) int batteryLevel;                //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign) char dockState;                  //@synthesize dockState=_dockState - In the implementation block
@property (assign) char isSiriActive;               //@synthesize isSiriActive=_isSiriActive - In the implementation block
-(char)dockState;
-(void)setDockState:(char)arg1 ;
-(void)setIsSiriActive:(char)arg1 ;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)vendorID;
-(unsigned)productID;
-(void)setVendorID:(unsigned)arg1 ;
-(void)setProductID:(unsigned)arg1 ;
-(int)batteryLevel;
-(void)setBatteryLevel:(int)arg1 ;
-(char)isSiriActive;
@end

