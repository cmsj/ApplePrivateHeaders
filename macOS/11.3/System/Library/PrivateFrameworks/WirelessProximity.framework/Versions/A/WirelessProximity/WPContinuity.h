/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/Versions/A/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPContinuityDelegate;
@class NSMutableDictionary;

@interface WPContinuity : WPClient {

	long long _btBandwidthState;
	id<WPContinuityDelegate> _delegate;
	NSMutableDictionary* _transfers;

}

@property (assign,nonatomic,__weak) id<WPContinuityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long btBandwidthState;                                      //@synthesize btBandwidthState=_btBandwidthState - In the implementation block
@property (retain) NSMutableDictionary * transfers;                                 //@synthesize transfers=_transfers - In the implementation block
@property (assign) long long connectionUseCase; 
@property (assign) long long maxAllowedConnectionDelayMs; 
+(unsigned char)clientTypeFromContinuityType:(long long)arg1 ;
+(long long)continuityTypeFromClientType:(unsigned char)arg1 ;
-(id)init;
-(void)invalidate;
-(id<WPContinuityDelegate>)delegate;
-(void)setDelegate:(id<WPContinuityDelegate>)arg1 ;
-(NSMutableDictionary *)transfers;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(char)arg5 duplicates:(char)arg6 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)connectToPeer:(id)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)updateAdvertisingRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)peerTrackingFull;
-(void)peerTrackingAvailable;
-(void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)disconnectedDevice:(id)arg1 withError:(id)arg2 ;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(char)arg3 ;
-(void)connectedDeviceOverLEPipe:(id)arg1 ;
-(void)sendData:(id)arg1 toPeer:(id)arg2 ;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3 ;
-(void)central:(id)arg1 subscribed:(char)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2 ;
-(void)setTransfers:(NSMutableDictionary *)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(char)arg5 ;
-(long long)btBandwidthState;
-(void)setBtBandwidthState:(long long)arg1 ;
-(void)populateClientGATT:(/*^block*/id)arg1 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 ;
-(void)updateScanningRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)updatedNotificationState:(char)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4 ;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5 ;
-(void)bandwidthStateUpdated:(id)arg1 ;
@end

