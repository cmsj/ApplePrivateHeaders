/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSArray, NSDictionary, NSString;

@interface IOBluetoothPreferences : NSObject {

	NSUserDefaults* bluetoothPrefs;
	NSArray* _previouslyPairedDevices;

}

@property (assign) char wasUpdated; 
@property (retain) NSArray * previouslyPairedDevices;                            //@synthesize previouslyPairedDevices=_previouslyPairedDevices - In the implementation block
@property (readonly) char isServer; 
@property (assign) char discoverable; 
@property (assign) char poweredOn; 
@property (assign) char isLocked; 
@property (assign) char remoteWakeEnabled; 
@property (readonly) NSArray * favoriteDevices; 
@property (readonly) NSArray * pairedDevices; 
@property (readonly) NSArray * BRPairedDevices; 
@property (readonly) NSArray * LEPairedDevices; 
@property (readonly) NSArray * usbBluetoothDevices; 
@property (readonly) NSArray * configuredDevices; 
@property (readonly) NSArray * hidDevices; 
@property (readonly) NSArray * panDevices; 
@property (readonly) NSArray * idsPairedDevices; 
@property (readonly) NSArray * fastConnectReadyDevices; 
@property (readonly) NSArray * idsPairedDevicesForUser; 
@property (readonly) NSArray * serialDevices; 
@property (readonly) NSArray * disallowRoleSwitchDevices; 
@property (readonly) NSArray * MagicCloudPairedDevices; 
@property (readonly) NSDictionary * deviceAccessTimes; 
@property (readonly) NSDictionary * deviceCache; 
@property (assign) char fileTransferServicesEnabled; 
@property (copy) NSString * OBEXPushDestinationDirectory; 
@property (copy) NSString * OBEXBrowseRootDirectory; 
@property (assign) int OBEXFileHandling; 
@property (assign) int OBEXBrowseConnectionHandling; 
@property (assign) unsigned OBEXOtherDataDisposition; 
@property (assign) char OBEXFTPRequiresPairing; 
@property (assign) char OBEXFileTransferAllowsDelete; 
@property (assign) char OBEXObjectPushRequiresPairing; 
@property (assign) char autoSeekKeyboard; 
@property (assign) char autoSeekPointingDevice; 
@property (assign) char loggingEnabled; 
@property (readonly) char disableUIServerLegacyPairingConfirmation; 
@property (readonly) char disableUIServerSSPConfirmation; 
@property (readonly) NSArray * launchableApplications; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)sharedPreferences;
-(void)addFavoriteDevice:(id)arg1 ;
-(void)removeFavoriteDevice:(id)arg1 ;
-(NSArray *)hidDevices;
-(NSArray *)panDevices;
-(NSArray *)serialDevices;
-(NSArray *)idsPairedDevices;
-(NSArray *)BRPairedDevices;
-(NSArray *)MagicCloudPairedDevices;
-(id)systemPreferenceForKey:(id)arg1 ;
-(void)setRemoteWakeEnabled:(char)arg1 ;
-(char)OBEXFTPRequiresPairing;
-(void)setOBEXFTPRequiresPairing:(char)arg1 ;
-(char)OBEXObjectPushRequiresPairing;
-(void)setOBEXObjectPushRequiresPairing:(char)arg1 ;
-(void)setOBEXFileHandling:(int)arg1 ;
-(void)setOBEXBrowseConnectionHandling:(int)arg1 ;
-(unsigned)OBEXOtherDataDisposition;
-(void)setOBEXOtherDataDisposition:(unsigned)arg1 ;
-(NSString *)OBEXPushDestinationDirectory;
-(void)setOBEXPushDestinationDirectory:(NSString *)arg1 ;
-(NSString *)OBEXBrowseRootDirectory;
-(void)setOBEXBrowseRootDirectory:(NSString *)arg1 ;
-(void)setFileTransferServicesEnabled:(char)arg1 ;
-(char)fileTransferServicesEnabled;
-(void)setWasUpdated:(char)arg1 ;
-(void)setPreviouslyPairedDevices:(NSArray *)arg1 ;
-(void)updatePreferencesInBluetoothd;
-(char)userReallyWantsBTOff;
-(void)_setPoweredOn:(char)arg1 ;
-(void)removeLaunchableApplication:(id)arg1 ;
-(NSArray *)idsPairedDevicesForUser;
-(NSArray *)fastConnectReadyDevices;
-(void)updateDeviceAccessTime:(id)arg1 ;
-(void)setOBEXFileTransferAllowsDelete:(char)arg1 ;
-(char)disableUIServerSSPConfirmation;
-(NSArray *)previouslyPairedDevices;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(void)dealloc;
-(id)init;
-(void)synchronize;
-(char)isServer;
-(char)isLocked;
-(NSArray *)pairedDevices;
-(void)setPreference:(id)arg1 forKey:(id)arg2 ;
-(char)loggingEnabled;
-(void)setLoggingEnabled:(char)arg1 ;
-(char)poweredOn;
-(void)setPoweredOn:(char)arg1 ;
-(void)deviceWasUpdated:(id)arg1 ;
-(id)attributesForDevice:(id)arg1 ;
-(NSArray *)configuredDevices;
-(NSArray *)usbBluetoothDevices;
-(NSArray *)favoriteDevices;
-(NSDictionary *)deviceAccessTimes;
-(void)setIsLocked:(char)arg1 ;
-(char)wasUpdated;
-(void)postPreferencesChangedNotification;
-(char)discoverable;
-(void)setDiscoverable:(char)arg1 ;
-(char)OBEXFileTransferAllowsDelete;
-(NSDictionary *)deviceCache;
-(NSArray *)disallowRoleSwitchDevices;
-(void)setInquiryThreshold:(char)arg1 ;
-(char)remoteWakeEnabled;
-(int)OBEXFileHandling;
-(int)OBEXBrowseConnectionHandling;
-(char)autoSeekKeyboard;
-(void)setAutoSeekKeyboard:(char)arg1 ;
-(char)autoSeekPointingDevice;
-(void)setAutoSeekPointingDevice:(char)arg1 ;
-(void)addLaunchableApplication:(id)arg1 ;
-(void)setDefaultInquiryTime:(unsigned char)arg1 ;
-(NSArray *)LEPairedDevices;
-(char)safeToPowerOff:(char)arg1 ;
-(NSArray *)launchableApplications;
-(char)disableUIServerLegacyPairingConfirmation;
@end

