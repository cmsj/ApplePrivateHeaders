/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRQHONowPlayingControllerDelegate.h>

@protocol MRMigrationDeviceDelegate, OS_dispatch_queue;
@class NSError, MRQHONowPlayingController, NSObject, NSString, MRAVEndpoint, MRNowPlayingPlayerResponse;

@interface MRMigrationDevice : NSObject <MRQHONowPlayingControllerDelegate> {

	char _preparedForAirPlay;
	unsigned long long _deviceState;
	NSError* _prepareError;
	id<MRMigrationDeviceDelegate> _delegate;
	MRQHONowPlayingController* _controller;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) MRQHONowPlayingController * controller;                     //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) unsigned long long deviceState;                             //@synthesize deviceState=_deviceState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSError * prepareError;                                     //@synthesize prepareError=_prepareError - In the implementation block
@property (assign,nonatomic) char preparedForAirPlay;                                    //@synthesize preparedForAirPlay=_preparedForAirPlay - In the implementation block
@property (nonatomic,readonly) NSString * uid; 
@property (nonatomic,readonly) MRAVEndpoint * endpoint; 
@property (nonatomic,readonly) char isPrepared; 
@property (nonatomic,readonly) MRNowPlayingPlayerResponse * playerState; 
@property (assign,nonatomic,__weak) id<MRMigrationDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proactiveDevice;
-(NSString *)description;
-(id<MRMigrationDeviceDelegate>)delegate;
-(void)setDelegate:(id<MRMigrationDeviceDelegate>)arg1 ;
-(NSString *)uid;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)dictionaryRepresentation;
-(MRAVEndpoint *)endpoint;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MRQHONowPlayingController *)controller;
-(void)prepare;
-(void)setController:(MRQHONowPlayingController *)arg1 ;
-(unsigned long long)deviceState;
-(void)setDeviceState:(unsigned long long)arg1 ;
-(id)initWithUID:(id)arg1 ;
-(void)controller:(id)arg1 didLoadResponse:(id)arg2 ;
-(void)controller:(id)arg1 didUpdateResponse:(id)arg2 ;
-(void)controller:(id)arg1 didFailWithError:(id)arg2 ;
-(void)controllerWillReloadForInvalidation:(id)arg1 ;
-(MRNowPlayingPlayerResponse *)playerState;
-(char)preparedForAirPlay;
-(NSError *)prepareError;
-(void)_checkIfAirPlayPossible;
-(char)isPrepared;
-(void)setPreparedForAirPlay:(char)arg1 ;
-(void)_notifyDelegateOfStateChange;
-(void)setPrepareError:(NSError *)arg1 ;
-(void)_notifyDelegateOfPlayerStateChange;
@end

