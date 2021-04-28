/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVBAVDECCEntity.h>

@class NSDictionary, AVB17221AEMEntity;

@interface AVBBuiltInAVDECCEntity : AVBAVDECCEntity {

	NSDictionary* _controllerMappings;
	char _activated;
	AVB17221AEMEntity* _localModel;

}

@property (retain) AVB17221AEMEntity * remoteModel; 
@property (retain) AVB17221AEMEntity * localModel;                           //@synthesize localModel=_localModel - In the implementation block
@property (assign,getter=isActivated,nonatomic) char activated;              //@synthesize activated=_activated - In the implementation block
+(id)keyPathsForValuesAffectingRemoteModel;
-(void)dealloc;
-(char)isActivated;
-(void)setActivated:(char)arg1 ;
-(id)initWithEntity:(id)arg1 andInterface:(id)arg2 ;
-(AVB17221AEMEntity *)remoteModel;
-(AVB17221AEMEntity *)localModel;
-(void)setLocalModel:(AVB17221AEMEntity *)arg1 ;
-(id)remoteObjectsForLocalObject:(id)arg1 ;
-(char)_connectStreamWithLocalInputIndex:(unsigned short)arg1 andRemoteOutputIndex:(unsigned short)arg2 streamingWait:(char)arg3 classB:(char)arg4 ;
-(id)localObjectsForRemoteObject:(id)arg1 ;
-(char)_connectLocalInputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)_connectRemoteOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)_connectStreamWithRemoteInputIndex:(unsigned short)arg1 andLocalOutputIndex:(unsigned short)arg2 streamingWait:(char)arg3 classB:(char)arg4 ;
-(char)_connectRemoteInputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)_connectLocalOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)_disconnectStreamWithLocalInputIndex:(unsigned short)arg1 andRemoteOutputIndex:(unsigned short)arg2 ;
-(char)_disconnectLocalInputStreamWithIndex:(unsigned short)arg1 ;
-(char)_disconnectRemoteOutputStreamWithIndex:(unsigned short)arg1 ;
-(char)_disconnectStreamWithRemoteInputIndex:(unsigned short)arg1 andLocalOutputIndex:(unsigned short)arg2 ;
-(char)_disconnectRemoteInputStreamWithIndex:(unsigned short)arg1 ;
-(char)_disconnectLocalOutputStreamWithIndex:(unsigned short)arg1 ;
-(char)disconnectAllStreams;
-(char)activateEntity;
-(char)deactivateEntity;
-(void)createLocalModel;
-(char)connectLocalInputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)connectRemoteOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)connectRemoteInputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)connectLocalOutputStreamWithIndex:(unsigned short)arg1 streamingWait:(char)arg2 classB:(char)arg3 ;
-(char)disconnectLocalInputStreamWithIndex:(unsigned short)arg1 ;
-(char)disconnectRemoteOutputStreamWithIndex:(unsigned short)arg1 ;
-(char)disconnectRemoteInputStreamWithIndex:(unsigned short)arg1 ;
-(char)disconnectLocalOutputStreamWithIndex:(unsigned short)arg1 ;
-(char)connectAllStreams;
-(char)clearAllConnections;
-(char)setLocalObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)setRemoteObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)startLocalInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)startLocalOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)startRemoteInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)startRemoteOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)stopLocalInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)stopLocalOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)stopRemoteInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)stopRemoteOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)setLocalAudioUnitWithIndex:(unsigned short)arg1 toSamplingRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteAudioUnitWithIndex:(unsigned short)arg1 toSamplingRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalVideoClusterWithIndex:(unsigned short)arg1 toFormatSpecific:(id)arg2 aspectRatio:(id)arg3 videoSize:(id)arg4 andColorSpace:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)setRemoteVideoClusterWithIndex:(unsigned short)arg1 toFormatSpecific:(id)arg2 aspectRatio:(id)arg3 videoSize:(id)arg4 andColorSpace:(unsigned short)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(char)setLocalVideoClusterWithIndex:(unsigned short)arg1 toFrameRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteVideoClusterWithIndex:(unsigned short)arg1 toFrameRate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalClockDomainWithIndex:(unsigned short)arg1 toLocalClockSourceWithIndex:(unsigned short)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteClockDomainWithIndex:(unsigned short)arg1 toRemoteClockSourceWithIndex:(unsigned short)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalIdentifyWithIndex:(unsigned short)arg1 toEnabled:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteIdentifyWithIndex:(unsigned short)arg1 toEnabled:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalInputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalOutputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteInputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setRemoteOutputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)setLocalControlWithIndex:(unsigned short)arg1 toValue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)getLocalControlWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)setRemoteControlWithIndex:(unsigned short)arg1 toValue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)getRemoteControlWithIndex:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)startLocalOperation:(unsigned short)arg1 onDescriptorOfType:(unsigned short)arg2 andIndex:(unsigned short)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(char)startRemoteOperation:(unsigned short)arg1 onDescriptorOfType:(unsigned short)arg2 andIndex:(unsigned short)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(char)setLocalConfiguration:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)setRemoteConfiguration:(unsigned short)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setRemoteModel:(AVB17221AEMEntity *)arg1 ;
@end
