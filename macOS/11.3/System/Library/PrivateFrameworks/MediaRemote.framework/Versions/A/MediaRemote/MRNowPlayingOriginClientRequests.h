/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, MRDeviceInfo, NSNumber, NSMutableArray, NSMutableDictionary, MROrigin, MRPlayerPath;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRDeviceInfo* _deviceInfo;
	NSNumber* _volumeCapabilities;
	NSNumber* _volume;
	NSMutableArray* _nowPlayingClients;
	NSMutableDictionary* _transactionCallbacks;
	NSMutableArray* _deviceInfoCompletions;
	NSMutableArray* _volumeCompletions;
	NSMutableArray* _volumeCapabilitiesCompletions;
	MROrigin* _origin;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MROrigin * origin;                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) MRPlayerPath * playerPath;                //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MRDeviceInfo * deviceInfo; 
@property (nonatomic,retain) NSNumber * volumeCapabilities; 
@property (nonatomic,retain) NSNumber * volume; 
-(id)debugDescription;
-(NSNumber *)volume;
-(void)removeClient:(id)arg1 ;
-(void)setVolume:(NSNumber *)arg1 ;
-(MRDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(MROrigin *)origin;
-(id)initWithOrigin:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(NSNumber *)volumeCapabilities;
-(void)setVolumeCapabilities:(NSNumber *)arg1 ;
-(void)restoreNowPlayingClientState;
-(id)nowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(void)setTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
-(/*^block*/id)transactionCallbackForName:(unsigned long long)arg1 ;
-(void)handleDeviceInfoRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleVolumeRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleVolumeCapabilitiesRequestWithCompletion:(/*^block*/id)arg1 ;
@end

