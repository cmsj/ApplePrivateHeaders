/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, AVBMACAddress, NSMutableArray, AVBVirtualStreamConnection, AVBMSRPTalkerAttribute, AVBVirtualEntity;

@interface AVBVirtualStream : NSObject {

	NSObject*<OS_dispatch_semaphore> _talkerSync;
	char _connected;
	char _streamingWait;
	char _listenerReady;
	unsigned short _acmpFlags;
	unsigned short _vlanID;
	unsigned short _uniqueID;
	unsigned long long _streamID;
	AVBMACAddress* _destinationMAC;
	NSMutableArray* _listeners;
	AVBVirtualStreamConnection* _talker;
	AVBMSRPTalkerAttribute* _receivedTalkerAttribute;
	AVBVirtualEntity* _virtualEntity;

}

@property (assign,nonatomic,__weak) AVBVirtualEntity * virtualEntity;                         //@synthesize virtualEntity=_virtualEntity - In the implementation block
@property (assign,nonatomic) unsigned long long streamID;                                     //@synthesize streamID=_streamID - In the implementation block
@property (copy) AVBMACAddress * destinationMAC;                                              //@synthesize destinationMAC=_destinationMAC - In the implementation block
@property (assign,nonatomic) unsigned short acmpFlags;                                        //@synthesize acmpFlags=_acmpFlags - In the implementation block
@property (assign,nonatomic) unsigned short vlanID;                                           //@synthesize vlanID=_vlanID - In the implementation block
@property (retain) NSMutableArray * listeners;                                                //@synthesize listeners=_listeners - In the implementation block
@property (retain) AVBVirtualStreamConnection * talker;                                       //@synthesize talker=_talker - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_semaphore> talkerSync; 
@property (assign,nonatomic) char connected;                                                  //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) char streamingWait;                                              //@synthesize streamingWait=_streamingWait - In the implementation block
@property (assign,nonatomic) char listenerReady;                                              //@synthesize listenerReady=_listenerReady - In the implementation block
@property (copy) AVBMSRPTalkerAttribute * receivedTalkerAttribute;                            //@synthesize receivedTalkerAttribute=_receivedTalkerAttribute - In the implementation block
@property (nonatomic,readonly) unsigned short uniqueID;                                       //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) unsigned short maximumFrameSize; 
@property (nonatomic,readonly) unsigned short maximumIntervalFrames; 
@property (nonatomic,readonly) unsigned accumulatedLatency; 
@property (nonatomic,readonly) unsigned long long maximumBandwidth; 
-(unsigned short)uniqueID;
-(char)connected;
-(void)setConnected:(char)arg1 ;
-(NSMutableArray *)listeners;
-(void)setListeners:(NSMutableArray *)arg1 ;
-(unsigned long long)streamID;
-(void)setStreamID:(unsigned long long)arg1 ;
-(void)stopStream;
-(void)startStream;
-(unsigned short)maximumFrameSize;
-(id)initWithUniqueID:(unsigned short)arg1 ;
-(void)setVlanID:(unsigned short)arg1 ;
-(unsigned short)vlanID;
-(AVBMACAddress *)destinationMAC;
-(char)setStreamFormat:(id)arg1 ;
-(unsigned short)maximumIntervalFrames;
-(unsigned short)acmpFlags;
-(AVBVirtualEntity *)virtualEntity;
-(unsigned)accumulatedLatency;
-(char)streamingWait;
-(char)listenerReady;
-(unsigned long long)maximumBandwidth;
-(void)calculateBandwidth;
-(char)registerMSRPTalker;
-(char)deregisterMSRPTalker;
-(char)registerMSRPListener;
-(char)deregisterMSRPListener;
-(NSObject*<OS_dispatch_semaphore>)talkerSync;
-(void)setTalkerSync:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)debugInfoDictionary;
-(void)setDestinationMAC:(AVBMACAddress *)arg1 ;
-(void)setAcmpFlags:(unsigned short)arg1 ;
-(AVBVirtualStreamConnection *)talker;
-(void)setTalker:(AVBVirtualStreamConnection *)arg1 ;
-(void)setStreamingWait:(char)arg1 ;
-(void)setListenerReady:(char)arg1 ;
-(AVBMSRPTalkerAttribute *)receivedTalkerAttribute;
-(void)setReceivedTalkerAttribute:(AVBMSRPTalkerAttribute *)arg1 ;
-(void)setVirtualEntity:(AVBVirtualEntity *)arg1 ;
@end

