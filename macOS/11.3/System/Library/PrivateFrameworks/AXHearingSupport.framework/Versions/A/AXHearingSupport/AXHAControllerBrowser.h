/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXHearingSupport.framework/Versions/A/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXIDCManager.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <AXHearingSupport/AXIDCRemoteControllerDelegate.h>
#import <AXHearingSupport/AXHADeviceControllerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, AXHearingSlaveController, NSMutableArray, NSString;

@interface AXHAControllerBrowser : AXIDCManager <NSNetServiceBrowserDelegate, AXIDCRemoteControllerDelegate, AXHADeviceControllerProtocol> {

	NSObject*<OS_dispatch_queue> _deviceUpdatesQueue;
	NSMutableDictionary* _deviceUpdatesDescription;
	AXHearingSlaveController* _slaveController;
	NSMutableArray* _updateDeviceBlocks;

}

@property (nonatomic,retain) AXHearingSlaveController * slaveController;                     //@synthesize slaveController=_slaveController - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateDeviceBlocks;                            //@synthesize updateDeviceBlocks=_updateDeviceBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<AXIDCManagerSecurityDelegate> securityDelegate; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3 ;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3 ;
-(void)resolveMasterWithCompletion:(/*^block*/id)arg1 ;
-(void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2 ;
-(void)controller:(id)arg1 didFinishSendingData:(id)arg2 ;
-(void)controller:(id)arg1 didReceiveData:(id)arg2 ;
-(void)controllerDidFinishConnecting:(id)arg1 ;
-(void)setUpdateDeviceBlocks:(NSMutableArray *)arg1 ;
-(void)setSlaveController:(AXHearingSlaveController *)arg1 ;
-(void)logWifiName;
-(void)becomeMaster;
-(char)shouldBecomeMaster;
-(AXHearingSlaveController *)slaveController;
-(void)repairSplitConnection;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forControllers:(id)arg3 ;
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2 ;
-(char)shouldRelinquishConnectionForReason:(long long)arg1 ;
-(NSMutableArray *)updateDeviceBlocks;
-(void)writePayload:(id)arg1 toControllers:(id)arg2 ;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1 ;
-(void)stopPropertyUpdates;
@end
