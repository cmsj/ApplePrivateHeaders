/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetoothUI.framework/Versions/A/IOBluetoothUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol IOBluetoothDevicePairDelegate;
@class IOBluetoothDevice, IOBluetoothDevicePair, IOBluetoothPasskeyDisplay, NSString, IOBluetoothDevicePairViewControllerExpansion;

@interface IOBluetoothDevicePairViewController : NSViewController {

	id<IOBluetoothDevicePairDelegate> _delegate;
	IOBluetoothDevice* _device;
	IOBluetoothDevicePair* _devicePair;
	IOBluetoothPasskeyDisplay* _passkeyDisplay;
	char _useCustomPINCode;
	NSString* _PINCode;
	IOBluetoothDevicePairViewControllerExpansion* _expansion;

}

@property (retain) IOBluetoothDevicePair * devicePair;                      //@synthesize devicePair=_devicePair - In the implementation block
@property (retain) IOBluetoothPasskeyDisplay * passkeyDisplay;              //@synthesize passkeyDisplay=_passkeyDisplay - In the implementation block
@property (assign) NSString * PINCode;                                      //@synthesize PINCode=_PINCode - In the implementation block
@property (retain) IOBluetoothDevice * device;                              //@synthesize device=_device - In the implementation block
@property (__weak) id<IOBluetoothDevicePairDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IOBluetoothDevicePairDelegate>)delegate;
-(void)setDelegate:(id<IOBluetoothDevicePairDelegate>)arg1 ;
-(IOBluetoothDevice *)device;
-(void)stop;
-(void)loadView;
-(void)setDevice:(IOBluetoothDevice *)arg1 ;
-(void)devicePairingStarted:(id)arg1 ;
-(void)devicePairingConnecting:(id)arg1 ;
-(void)devicePairingPINCodeRequest:(id)arg1 ;
-(void)devicePairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned)arg2 ;
-(void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned)arg2 ;
-(void)devicePairingFinished:(id)arg1 error:(int)arg2 ;
-(void)deviceSimplePairingComplete:(id)arg1 status:(unsigned char)arg2 ;
-(int)pairWithDevice:(id)arg1 usingPincode:(id)arg2 ;
-(int)pairWithDevice:(id)arg1 ;
-(IOBluetoothPasskeyDisplay *)passkeyDisplay;
-(void)setPINCode:(NSString *)arg1 ;
-(void)setDevicePair:(IOBluetoothDevicePair *)arg1 ;
-(IOBluetoothDevicePair *)devicePair;
-(NSString *)PINCode;
-(void)devicePairingKeypressNotification:(id)arg1 type:(unsigned char)arg2 ;
-(void)setPasskeyDisplay:(IOBluetoothPasskeyDisplay *)arg1 ;
@end

