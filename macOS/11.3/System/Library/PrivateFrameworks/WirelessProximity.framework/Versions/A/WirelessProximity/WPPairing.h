/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/Versions/A/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPPairingDelegate;
@class NSMutableSet;

@interface WPPairing : WPClient {

	char _allowScreenOffScanning;
	id<WPPairingDelegate> _delegate;
	NSMutableSet* _ignoredDevices;

}

@property (assign,nonatomic,__weak) id<WPPairingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableSet * ignoredDevices;                                //@synthesize ignoredDevices=_ignoredDevices - In the implementation block
@property (assign) char allowScreenOffScanning;                                  //@synthesize allowScreenOffScanning=_allowScreenOffScanning - In the implementation block
-(void)invalidate;
-(id<WPPairingDelegate>)delegate;
-(void)setDelegate:(id<WPPairingDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 ;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(char)arg2 scanMode:(long long)arg3 ;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(char)arg2 ;
-(void)startProximityPairingServiceScanning;
-(void)stopProximityPairingServiceScanning;
-(void)ignoreDeviceUntilNextUnlock:(id)arg1 ignoreDevice:(char)arg2 ;
-(NSMutableSet *)ignoredDevices;
-(void)setIgnoredDevices:(NSMutableSet *)arg1 ;
-(char)allowScreenOffScanning;
-(void)setAllowScreenOffScanning:(char)arg1 ;
@end

