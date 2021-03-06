/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class CALayer, AVConferenceXPCClient, VideoAttributes, NSDictionary, NSString, NSObject;

@interface AVCRemoteVideoClient : NSObject {

	id _delegate;
	long long _streamToken;
	CALayer* _primaryCameraLayer;
	CALayer* _secondaryCameraLayer;
	CALayer* _screenLayer;
	CALayer* _primaryCameraSubLayer;
	CALayer* _secondaryCameraSubLayer;
	CALayer* _screenSubLayer;
	AVConferenceXPCClient* _connection;
	int _activeVideoMode;
	char _hasReceivedFirstFrame;
	char _isVideoPaused;
	char _isMediaStalled;
	char _isVideoDegraded;
	char _isVideoSuspended;
	char _hasReceivedLastFrame;
	char _shouldDisplayVideoInfoLayer;
	VideoAttributes* _remoteScreenAttributes;
	VideoAttributes* _remoteVideoAttributes;
	NSDictionary* _slotsForModes;
	NSString* _connectionTypeString;
	NSObject*<OS_dispatch_queue> _avcRemoteVideoQueue;

}

@property (nonatomic,retain) VideoAttributes * remoteScreenAttributes;                 //@synthesize remoteScreenAttributes=_remoteScreenAttributes - In the implementation block
@property (nonatomic,retain) VideoAttributes * remoteVideoAttributes;                  //@synthesize remoteVideoAttributes=_remoteVideoAttributes - In the implementation block
@property (assign,nonatomic) char hasReceivedFirstFrame;                               //@synthesize hasReceivedFirstFrame=_hasReceivedFirstFrame - In the implementation block
@property (assign,nonatomic) char isVideoPaused;                                       //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign,nonatomic) char isMediaStalled;                                      //@synthesize isMediaStalled=_isMediaStalled - In the implementation block
@property (assign,nonatomic) char isVideoDegraded;                                     //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (assign,nonatomic) char isVideoSuspended;                                    //@synthesize isVideoSuspended=_isVideoSuspended - In the implementation block
@property (assign,nonatomic) char hasReceivedLastFrame;                                //@synthesize hasReceivedLastFrame=_hasReceivedLastFrame - In the implementation block
@property (assign,nonatomic) char shouldDisplayVideoInfoLayer;                         //@synthesize shouldDisplayVideoInfoLayer=_shouldDisplayVideoInfoLayer - In the implementation block
@property (nonatomic,copy) NSString * connectionTypeString;                            //@synthesize connectionTypeString=_connectionTypeString - In the implementation block
@property (nonatomic,readonly) id<AVCRemoteVideoClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long streamToken;                                  //@synthesize streamToken=_streamToken - In the implementation block
-(void)dealloc;
-(id<AVCRemoteVideoClientDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)terminateConnection;
-(long long)streamToken;
-(void)setVideoLayer:(id)arg1 forMode:(int)arg2 ;
-(char)isMediaStalled;
-(char)isVideoDegraded;
-(char)isVideoPaused;
-(id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 ;
-(void)setIsVideoDegraded:(char)arg1 ;
-(void)setIsVideoPaused:(char)arg1 ;
-(void)setRemoteScreenAttributes:(VideoAttributes *)arg1 ;
-(VideoAttributes *)remoteScreenAttributes;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(char)isVideoSuspended;
-(VideoAttributes *)remoteVideoAttributes;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(void)setIsMediaStalled:(char)arg1 ;
-(void)setIsVideoSuspended:(char)arg1 ;
-(char)hasReceivedFirstFrame;
-(void)setHasReceivedFirstFrame:(char)arg1 ;
-(char)shouldDisplayVideoInfoLayer;
-(void)cleanupSubLayerForMode:(int)arg1 ;
-(void)insertSubLayerInLayer:(id)arg1 videoMode:(int)arg2 videoSlot:(id)arg3 ;
-(void)setActiveVideoLayerForMode:(int)arg1 ;
-(void)insertInfoSubLayerIntoLayer:(id)arg1 videoMode:(int)arg2 ;
-(id*)subLayerRefForMode:(int)arg1 ;
-(void)setActiveVideoModeFromRemoteVideoAttribute:(id)arg1 ;
-(void)setHasReceivedLastFrame:(char)arg1 ;
-(void)updateConnectionInfoWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 ;
-(id)subLayerForMode:(int)arg1 ;
-(void)adjustInfoSubLayerBounds:(CGRect)arg1 forSuperLayer:(id)arg2 ;
-(id)findInfoSubLayerFromLayer:(id)arg1 ;
-(NSString *)connectionTypeString;
-(void)setConnectionTypeString:(NSString *)arg1 ;
-(void)drawText:(id)arg1 inSubLayer:(id)arg2 ;
-(id)slotForMode:(int)arg1 ;
-(char)hasReceivedLastFrame;
-(void)setShouldDisplayVideoInfoLayer:(char)arg1 ;
@end

