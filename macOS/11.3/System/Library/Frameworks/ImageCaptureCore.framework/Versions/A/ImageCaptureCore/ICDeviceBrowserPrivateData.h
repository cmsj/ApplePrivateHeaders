/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSLock;

@interface ICDeviceBrowserPrivateData : NSObject {

	id _delegate;
	char _browsing;
	unsigned long long _browsedDeviceTypeMask;
	NSMutableDictionary* _launchParams;
	NSMutableArray* _internalDevices;
	NSMutableArray* _launchedButNonExistent;
	NSLock* _internalDevicesLock;
	NSMutableArray* _TWAINDevices;
	NSLock* _TWAINDevicesLock;

}

@property (assign) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign) char browsing;                                         //@synthesize browsing=_browsing - In the implementation block
@property (assign) unsigned long long browsedDeviceTypeMask;              //@synthesize browsedDeviceTypeMask=_browsedDeviceTypeMask - In the implementation block
@property (retain) NSMutableDictionary * launchParams;                    //@synthesize launchParams=_launchParams - In the implementation block
@property (retain) NSMutableArray * internalDevices;                      //@synthesize internalDevices=_internalDevices - In the implementation block
@property (retain) NSMutableArray * launchedButNonExistent;               //@synthesize launchedButNonExistent=_launchedButNonExistent - In the implementation block
@property (retain) NSMutableArray * TWAINDevices;                         //@synthesize TWAINDevices=_TWAINDevices - In the implementation block
-(void)setLaunchedButNonExistent:(NSMutableArray *)arg1 ;
-(void)setTWAINDevices:(NSMutableArray *)arg1 ;
-(void)lockInternalDevices;
-(void)unlockInternalDevices;
-(void)lockTWAINDevices;
-(NSMutableArray *)TWAINDevices;
-(void)unlockTWAINDevices;
-(NSMutableArray *)launchedButNonExistent;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setBrowsedDeviceTypeMask:(unsigned long long)arg1 ;
-(void)setBrowsing:(char)arg1 ;
-(char)browsing;
-(NSMutableDictionary *)launchParams;
-(void)setLaunchParams:(NSMutableDictionary *)arg1 ;
-(unsigned long long)browsedDeviceTypeMask;
-(NSMutableArray *)internalDevices;
-(void)setInternalDevices:(NSMutableArray *)arg1 ;
@end
