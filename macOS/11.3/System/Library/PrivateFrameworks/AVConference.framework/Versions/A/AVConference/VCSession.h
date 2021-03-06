/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>
#import <libobjc.A.dylib/VCSessionParticipantStreamDelegate.h>
#import <AVConference/AVCRateControllerDelegate.h>
#import <libobjc.A.dylib/VCRateControlMediaControllerDelegate.h>
#import <libobjc.A.dylib/VCMediaStreamNotification.h>
#import <libobjc.A.dylib/RTCPReportProvider.h>
#import <libobjc.A.dylib/VCSecurityEventHandler.h>
#import <libobjc.A.dylib/VCSessionParticipantDelegate.h>
#import <libobjc.A.dylib/VCNetworkFeedbackControllerDelegate.h>
#import <libobjc.A.dylib/VCSessionStatsControllerDelegate.h>
#import <libobjc.A.dylib/VCConnectionChangedHandler.h>
#import <libobjc.A.dylib/VCMomentTransportDelegate.h>

@protocol OS_dispatch_queue, VCSessionDelegate, VCConnectionProtocol;
@class NSObject, NSString, VCControlChannelMultiWay, VCSessionMessaging, VCSessionConfiguration, VCSessionParticipantLocal, NSMutableDictionary, VCSessionStatsController, VCNetworkFeedbackController, NSMutableArray, VCSecurityKeyManager, VCTransportSession, AVCRateController, VCRateControlMediaController, VCSessionDownlinkBandwidthAllocator, NSError, VCSessionBitrateArbiter, NSDictionary, VCSessionParticipant, NSArray;

@interface VCSession : VCObject <VCSessionParticipantStreamDelegate, AVCRateControllerDelegate, VCRateControlMediaControllerDelegate, VCMediaStreamNotification, RTCPReportProvider, VCSecurityEventHandler, VCSessionParticipantDelegate, VCNetworkFeedbackControllerDelegate, VCSessionStatsControllerDelegate, VCConnectionChangedHandler, VCMomentTransportDelegate> {

	unsigned _state;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	id<VCSessionDelegate> _delegate;
	NSString* _uuid;
	NSString* _idsDestination;
	VCControlChannelMultiWay* _controlChannel;
	VCSessionMessaging* _sessionMessaging;
	VCSessionConfiguration* _configuration;
	VCSessionParticipantLocal* _localParticipant;
	NSMutableDictionary* _remoteParticipantsMapByUUID;
	NSMutableDictionary* _remoteParticipantsMapByServerID;
	int _reportUpdateInterval;
	int _reportReportFrequency;
	VCSessionStatsController* _sessionStatsController;
	VCNetworkFeedbackController* _feedbackController;
	NSMutableArray* _startingParticipants;
	NSMutableArray* _stoppingParticipants;
	NSMutableArray* _initializingParticipants;
	VCSecurityKeyManager* _securityKeyManager;
	VCTransportSession* _transportSession;
	int _currentconnectionType;
	id<VCConnectionProtocol> _currentActiveConnection;
	unsigned _transportSessionID;
	char _localSourceNeedsReset;
	char _useReducedSizeRTCP;
	AVCRateController* _uplinkRateController;
	AVCRateController* _downlinkRateController;
	unsigned _uplinkTargetBitrate;
	unsigned _downlinkTargetBitrate;
	VCRateControlMediaController* _uplinkMediaController;
	unsigned _basebandFlushTransactionID;
	VCSessionDownlinkBandwidthAllocator* _downlinkBandwidthAllocator;
	NSMutableDictionary* _optInDictionary;
	double _sessionStartTime;
	tagVCMediaQueueRef _mediaQueue;
	char _forceDisableMediaPriority;
	NSError* _stopError;
	char _isGKVoiceChat;
	int _reportingModuleID;
	VCSessionOneToOneSettings* _oneToOneSettings;
	VCSessionBitrateArbiter* _bitrateArbiter;

}

@property (retain) NSMutableDictionary * optInDictionary;                                        //@synthesize optInDictionary=_optInDictionary - In the implementation block
@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;                                      //@synthesize mediaQueue=_mediaQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteParticipantsMapByServerID;              //@synthesize remoteParticipantsMapByServerID=_remoteParticipantsMapByServerID - In the implementation block
@property (nonatomic,retain) VCSessionMessaging * sessionMessaging;                              //@synthesize sessionMessaging=_sessionMessaging - In the implementation block
@property (nonatomic,readonly) VCSessionStatsController * sessionStatsController;                //@synthesize sessionStatsController=_sessionStatsController - In the implementation block
@property (nonatomic,readonly) NSDictionary * capabilities; 
@property (nonatomic,readonly) VCSessionParticipant * localParticipant;                          //@synthesize localParticipant=_localParticipant - In the implementation block
@property (nonatomic,readonly) NSArray * remoteParticipants; 
@property (nonatomic,readonly) id<VCSessionDelegate> delegate; 
@property (nonatomic,readonly) NSString * idsDestination;                                        //@synthesize idsDestination=_idsDestination - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned transportSessionID;                                      //@synthesize transportSessionID=_transportSessionID - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> currentActiveConnection;                   //@synthesize currentActiveConnection=_currentActiveConnection - In the implementation block
@property (nonatomic,readonly) VCTransportSession * transportSession;                            //@synthesize transportSession=_transportSession - In the implementation block
@property (nonatomic,readonly) AVCRateController * downlinkRateController;                       //@synthesize downlinkRateController=_downlinkRateController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id<VCSessionDelegate>)delegate;
-(NSString *)uuid;
-(void)setState:(unsigned)arg1 ;
-(void)start;
-(void)tearDown;
-(NSDictionary *)capabilities;
-(void)updateConfiguration:(id)arg1 ;
-(void)removeParticipant:(id)arg1 ;
-(NSString *)idsDestination;
-(tagVCMediaQueueRef)mediaQueue;
-(void)stopWithError:(id)arg1 ;
-(void)rateController:(void*)arg1 targetBitrateDidChange:(unsigned)arg2 rateChangeCounter:(unsigned)arg3 ;
-(int)maxRemoteParticipants30fps;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(char)generateReceptionReportList:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2 ;
-(void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3 ;
-(void)mediaController:(void*)arg1 mediaSuggestionDidChange:(VCRateControlMediaSuggestion)arg2 ;
-(unsigned)transportSessionID;
-(id)participantForID:(id)arg1 ;
-(id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 processId:(int)arg5 isGKVoiceChat:(char)arg6 ;
-(VCSessionParticipant *)localParticipant;
-(void)addParticipantConfigurations:(id)arg1 processID:(int)arg2 ;
-(void)updateParticipantConfigurations:(id)arg1 ;
-(void)vcSessionParticipant:(id)arg1 audioPaused:(char)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)vcSessionParticipant:(id)arg1 videoPaused:(char)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(char)arg2 ;
-(void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(char)arg2 ;
-(void)vcSessionParticipantDidChangeActualNetworkBitrateVideo:(id)arg1 ;
-(void)vcSessionParticipantDidChangeActualNetworkBitrateAudio:(id)arg1 ;
-(void)vcSessionParticipant:(id)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(id)arg3 ;
-(void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg1 ;
-(void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(id)arg1 ;
-(void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3 ;
-(void)vcSessionParticipantDidChangeReceivingStreams:(id)arg1 ;
-(void)reportingIntervalChanged:(double)arg1 ;
-(void)recommendedSettingsChanged:(id)arg1 ;
-(void)setupMomentsMessages;
-(void)createSessionMessaging;
-(void)setupUplinkBitrateCaps;
-(void)createMediaQueue;
-(void)setupRateControllersMultiway;
-(int)setupOneToOne;
-(void)setupTransportSessionWithDestination:(id)arg1 ;
-(void)setSessionInfoSynchronizerCallbacks;
-(CFDictionaryRef)getClientSpecificUserInfo;
-(void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 ;
-(void)registerReportingTask;
-(void)cleanupOneToOne;
-(void)destroySessionMessaging;
-(void)unregisterReportingTask;
-(void)cleanupVCRC;
-(char*)sessionStateToString:(unsigned)arg1 ;
-(NSArray *)remoteParticipants;
-(void)dispatchedAddParticipantConfigurations:(id)arg1 processID:(int)arg2 ;
-(void)dispatchedRemoveParticipant:(id)arg1 ;
-(void)dispatchedStart;
-(void)dispatchedStopWithError:(id)arg1 ;
-(void)dispatchedUpdateConfiguration:(id)arg1 ;
-(void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(char)arg1 ;
-(id<VCConnectionProtocol>)currentActiveConnection;
-(void)setCurrentActiveConnection:(id<VCConnectionProtocol>)arg1 ;
-(VCSessionStatsController *)sessionStatsController;
-(void)handleCellTechChange:(int)arg1 connection:(id)arg2 ;
-(void)handleCellularMTUChanged:(unsigned short)arg1 connection:(id)arg2 ;
-(void)handleEncryptionInfoEvent:(id)arg1 ;
-(void)handleMembershipChangeInfoEvent:(id)arg1 ;
-(void)dispatchedParticipant:(id)arg1 didStart:(char)arg2 error:(id)arg3 ;
-(void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2 ;
-(void)broadcastMessage:(id)arg1 withTopic:(id)arg2 ;
-(void)mediaStateChangedForParticipant:(id)arg1 ;
-(void)reportingSessionRemoteParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 value:(id)arg3 ;
-(void)reportingSessionParticipantEvent:(unsigned short)arg1 withStreamID:(unsigned short)arg2 ;
-(unsigned)calculateExpectedTotalNetworkBitrateUplink;
-(unsigned)calculateExpectedTotalNetworkBitrateDownlink;
-(void)updateNetworkFeedbackControllerReport:(SCD_Struct_VC116*)arg1 ;
-(void)setMediaQueuePeakBitrateWithTargetBitrate:(unsigned)arg1 ;
-(void)reportingSessionDownlinkOptInEvent:(id)arg1 selectedMediaEntriesForParticipants:(id)arg2 ;
-(void)setOptInDictionary:(NSMutableDictionary *)arg1 ;
-(void)setSessionInfoSynchronizerErrorResponseCallback;
-(void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;
-(VCTransportSession *)transportSession;
-(NSMutableDictionary *)optInDictionary;
-(AVCRateController *)downlinkRateController;
-(void)cleanupRateControllerOneToOne;
-(void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3 ;
-(void)registerMediaStreamNotificationDelegateForParticipant:(id)arg1 ;
-(void)updateLocalStreamConfiguration;
-(void)messageMediaInitialStateToParticipant:(id)arg1 ;
-(void)unregisterMediaStreamNotificationDelegateForParticipant:(id)arg1 ;
-(void)cleaupMediaControlInfoGeneratorsOneToOne;
-(void)setupAudioEnabledMessages;
-(void)setupVideoEnabledMessages;
-(void)setupAudioPausedMessages;
-(void)setupVideoPausedMessages;
-(void)setupKeyFrameGenerationMessages;
-(void)setupSymptomEnabledMessages;
-(void)stopSessionMessaging;
-(NSMutableDictionary *)remoteParticipantsMapByServerID;
-(void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(char)arg2 ;
-(void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(char)arg2 ;
-(void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(char)arg2 ;
-(void)generateKeyFrameWithReceivedMessage:(id)arg1 ;
-(VCSessionMessaging *)sessionMessaging;
-(void)didReceiveMomentsRequest:(id)arg1 ;
-(void)reportingMomentsWithRequest:(id)arg1 recipientID:(id)arg2 ;
-(void)didReceiveReportPacket:(tagRTCPPACKET*)arg1 arrivalNTPTime:(tagNTP)arg2 ;
-(void)didReceiveCustomReportPacket:(tagRTCPPACKET*)arg1 arrivalNTPTime:(tagNTP)arg2 ;
-(char)handleEncryptionInfoChange:(id)arg1 ;
-(void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 ;
-(void)resetDecryptionTimeout;
-(void)broadcastInitialMediaState;
-(void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 withStreamID:(unsigned short)arg5 ;
-(void)collectSessionEventKeyFields:(CFDictionaryRef)arg1 eventType:(unsigned short)arg2 withParticipant:(id)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5 withStreamID:(unsigned short)arg6 ;
-(char)detectSSRCCollision:(id)arg1 resetNeeded:(char*)arg2 ;
-(char)configureRemoteParticipant:(id)arg1 withConfig:(id)arg2 ;
-(void)setDelegatesForRemoteParticipant:(id)arg1 ;
-(char)addOneToOneParticipant:(id)arg1 withConfig:(id)arg2 ;
-(void)registerRemoteParticipantToSession:(id)arg1 ;
-(int)setupOneToOneMediaControlInfoGenerators;
-(id)newParticipantOneToOneConfigWithIDSParticipantID:(unsigned long long)arg1 isLocal:(char)arg2 ;
-(void)startOneToOne;
-(void)dispatchedAddParticipantWithConfig:(id)arg1 processID:(int)arg2 ;
-(void)removeDelegatesForRemoteParticipant:(id)arg1 ;
-(void)unregisterRemoteParticipantFromSession:(id)arg1 ;
-(void)setTransportSessionEventHandler;
-(void)startRateControllers;
-(void)startSessionMessaging;
-(void)stopAllParticipants;
-(void)stopRateControllerOneToOne;
-(id)participantsToString;
-(void)reportingSessionStopEventWithError:(id)arg1 ;
-(int)setupOneToOneMediaQueue;
-(int)setupRateControllerOneToOne;
-(void)cleanupOneToOneMediaQueue;
-(void)startRateControllerOneToOne;
-(void)vcSessionParticipant:(id)arg1 didStart:(char)arg2 error:(id)arg3 ;
-(void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2 ;
-(void)didReceiveRTCPPackets:(RTCPPacketList*)arg1 ;
-(void)mediaStream:(id)arg1 didReceiveNewMasterKeyIndex:(id)arg2 ;
-(void)vcSessionParticipant:(id)arg1 audioEnabled:(char)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)vcSessionParticipant:(id)arg1 videoEnabled:(char)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 ;
-(void)vcSessionParticipantDidChangeSendingStreams:(id)arg1 ;
-(void)vcSessionParticipant:(id)arg1 didDetectError:(id)arg2 ;
-(void)vcSessionParticipant:(id)arg1 spatialAudioSourceIDDidChange:(unsigned long long)arg2 ;
-(void)didReceivedSessionStatsAtTime:(double)arg1 ;
-(int)flushBasebandWithPayloads:(id)arg1 ;
-(void)optInStreamWithIDSStreamIDs:(id)arg1 ;
-(void)optOutStreamWithIDSStreamIDs:(id)arg1 ;
-(void)sendSymptomsToRemoteParticipants:(id)arg1 symptom:(id)arg2 groupID:(id)arg3 ;
-(void)setupVideoRedundancyMessages;
-(void)setRemoteParticipantsMapByServerID:(NSMutableDictionary *)arg1 ;
-(void)setSessionMessaging:(VCSessionMessaging *)arg1 ;
@end

