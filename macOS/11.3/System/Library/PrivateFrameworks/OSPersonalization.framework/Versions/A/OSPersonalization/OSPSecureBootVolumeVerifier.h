/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSPersonalization.framework/Versions/A/OSPersonalization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSURL, LPMedia, LPAPFSVolume, OSPDevice, NSObject;

@interface OSPSecureBootVolumeVerifier : NSObject {

	unsigned long long _policy;
	NSURL* _volumeURL;
	LPMedia* _targetDisk;
	LPAPFSVolume* _prebootVolume;
	OSPDevice* _device;
	NSObject*<OS_dispatch_semaphore> _initialPopulateCompleteSemaphore;

}

@property (retain) NSURL * volumeURL;                                                              //@synthesize volumeURL=_volumeURL - In the implementation block
@property (retain) LPMedia * targetDisk;                                                           //@synthesize targetDisk=_targetDisk - In the implementation block
@property (retain) LPAPFSVolume * prebootVolume;                                                   //@synthesize prebootVolume=_prebootVolume - In the implementation block
@property (retain) OSPDevice * device;                                                             //@synthesize device=_device - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> initialPopulateCompleteSemaphore;              //@synthesize initialPopulateCompleteSemaphore=_initialPopulateCompleteSemaphore - In the implementation block
@property (assign) unsigned long long policy;                                                      //@synthesize policy=_policy - In the implementation block
-(void)setPrebootVolume:(LPAPFSVolume *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)initialPopulateCompleteSemaphore;
-(void)setInitialPopulateCompleteSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(OSPDevice *)device;
-(unsigned long long)policy;
-(void)setPolicy:(unsigned long long)arg1 ;
-(void)setDevice:(OSPDevice *)arg1 ;
-(id)initWithVolume:(id)arg1 ;
-(char)verify;
-(LPAPFSVolume *)prebootVolume;
-(NSURL *)volumeURL;
-(void)setVolumeURL:(NSURL *)arg1 ;
-(void)setTargetDisk:(LPMedia *)arg1 ;
-(LPMedia *)targetDisk;
@end
