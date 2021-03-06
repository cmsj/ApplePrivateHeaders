/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECDevice.h>

@interface CoreCECDeviceProvider : CoreCECDevice {

	SCD_Struct_Co8 _userControlInitiatorState;
	SCD_Struct_Co9 _userControlFollowerState;
	SCD_Struct_Co10 _userControlAudioState;
	unsigned _userControlInitiatorRepetitionTimeoutGeneration;
	unsigned _userControlFollowerSafetyTimeoutGeneration;
	unsigned char _sendFromAddress;
	char _isValid;
	char _systemAudioModeRequestedByTV;
	char _systemAudioModeRequestedByOtherDevice;
	unsigned short _deckStatusRequestMask;
	int _systemAudioModeState;
	int _audioReturnChannelState;

}

@property (nonatomic,readonly) unsigned short deckStatusRequestMask;                  //@synthesize deckStatusRequestMask=_deckStatusRequestMask - In the implementation block
@property (assign,nonatomic) char isValid;                                            //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) int systemAudioModeState;                                //@synthesize systemAudioModeState=_systemAudioModeState - In the implementation block
@property (assign,nonatomic) char systemAudioModeRequestedByTV;                       //@synthesize systemAudioModeRequestedByTV=_systemAudioModeRequestedByTV - In the implementation block
@property (assign,nonatomic) char systemAudioModeRequestedByOtherDevice;              //@synthesize systemAudioModeRequestedByOtherDevice=_systemAudioModeRequestedByOtherDevice - In the implementation block
@property (assign,nonatomic) int audioReturnChannelState;                             //@synthesize audioReturnChannelState=_audioReturnChannelState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue; 
@property (assign,nonatomic) unsigned char sendFromAddress;                           //@synthesize sendFromAddress=_sendFromAddress - In the implementation block
@property (nonatomic,readonly) char activeARCAudioSystem; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(Class)classForCoder;
-(char)isValid;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setIsValid:(char)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(char)sendMessage:(id)arg1 error:(id*)arg2 ;
-(char)setExtendedProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)extendedPropertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)busProvider;
-(id)initWithBus:(id)arg1 local:(char)arg2 ;
-(char)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(void)didChangePowerStatus:(unsigned long long)arg1 ;
-(char)deckControlSetDeckStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)deckControlCommandWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(char)deckControlPlayWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(char)deckControlRefreshStatus:(id)arg1 requestType:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)makeActiveSourceWithTVMenus:(char)arg1 error:(id*)arg2 ;
-(char)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2 ;
-(char)requestActiveSource:(id*)arg1 ;
-(char)resignActiveSource:(id*)arg1 ;
-(char)setSystemAudioControlEnabled:(char)arg1 error:(id*)arg2 ;
-(char)systemAudioModeRequest:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)setAudioReturnChannelControlEnabled:(char)arg1 error:(id*)arg2 ;
-(char)requestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)setAudioVolumeStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)setAudioMuteStatus:(char)arg1 error:(id*)arg2 ;
-(char)setSupportedAudioFormats:(id)arg1 error:(id*)arg2 ;
-(char)requestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3 ;
-(void)didAddToBus:(id)arg1 ;
-(void)willRemoveFromBus:(id)arg1 ;
-(void)didRemoveFromBus:(id)arg1 ;
-(void)hibernationChanged:(char)arg1 ;
-(void)setSendFromAddress:(unsigned char)arg1 ;
-(char)reportFeatures:(id*)arg1 ;
-(char)reportPhysicalAddress:(id*)arg1 ;
-(void)refreshActiveSource;
-(void)handleDeviceSelected;
-(char)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(id)filterMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)didReceiveMessage:(id)arg1 fromDevice:(id)arg2 ;
-(id)filterMessage:(id)arg1 toDevice:(id)arg2 ;
-(void)handleMessage:(id)arg1 fromDevice:(id)arg2 broadcast:(char)arg3 ;
-(void)trackMessage:(id)arg1 toDevice:(id)arg2 ;
-(void)trackMessage:(id)arg1 fromDevice:(id)arg2 ;
-(unsigned char)sendFromAddress;
-(void)userControlCancelInitiatorRepetitionTimeout;
-(char)userControlReleasedTo:(unsigned char)arg1 error:(id*)arg2 ;
-(void)sendDeckStatusToDevice:(id)arg1 ;
-(char)deckControlWithMode:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)playWithMode:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)giveDeckStatusWithRequest:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)oneTouchPlayWithMenu:(char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)menuStatus:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)standbyTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)givePhysicalAddressTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)giveDevicePowerStatusTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)getCECVersionTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)giveDeviceVendorIDTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)getRemoteControlDestination:(id*)arg1 logicalAddress:(unsigned char*)arg2 forTargetDevice:(id)arg3 command:(unsigned char)arg4 error:(id*)arg5 ;
-(void)userControlScheduleInitiatorRepetitionTimeout;
-(char)userControlPressed:(CECUserControl)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)sendActiveSourceStatus:(char)arg1 error:(id*)arg2 ;
-(char)giveSystemAudioModeStatusTo:(unsigned char)arg1 error:(id*)arg2 ;
-(void)audioStatusChanged;
-(void)refreshSystemAudioModeStatus;
-(char)deviceRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)systemAudioModeTransitionInProgress;
-(char)audioSystemRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)arcStarting;
-(void)dispatchSelector:(SEL)arg1 ;
-(void)arcStopping;
-(char)reportPowerStatus:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(void)userControlInitiatorRepetitionTimeoutExpired;
-(void)userControlFollowerSafetyTimeoutExpired;
-(void)userControlFollowerSynthesizeRelease;
-(char)handleUserControl:(CECUserControl)arg1 pressed:(char)arg2 fromDevice:(id)arg3 abortReason:(unsigned char*)arg4 ;
-(char)activeARCAudioSystem;
-(void)scheduleReportAudioStatus;
-(void)resetAudioStatusState;
-(void)audioStatusHandleUserControlPressed;
-(void)audioStatusHandleUserControlReleased;
-(void)sendReportAudioStatus;
-(char)reportAudioStatusTo:(unsigned char)arg1 error:(id*)arg2 ;
-(int)systemAudioModeState;
-(void)dsamStarting:(id)arg1 ;
-(void)dispatchSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)dsamStopping;
-(void)dsamStartingWithPhysicalAddress:(unsigned short)arg1 ;
-(void)setSystemAudioModeState:(int)arg1 ;
-(void)dsamStarting_handleBroadcastSSAMOnResponseTimeout;
-(void)dispatchSelector:(SEL)arg1 afterDelay:(double)arg2 ;
-(void)samResetStateToOff;
-(void)samInformDelegateTransitionTo:(unsigned long long)arg1 failedWithError:(id)arg2 ;
-(void)samInformDelegateOfSuccessTransitioningTo:(unsigned long long)arg1 ;
-(void)dsamStopping_handleBroadcastSSAMOffResponseTimeout;
-(void)samStarting;
-(void)samStopping;
-(char)systemAudioModeRequestedByTV;
-(char)systemAudioModeRequestedByOtherDevice;
-(void)setSystemAudioModeRequestedByTV:(char)arg1 ;
-(void)setSystemAudioModeRequestedByOtherDevice:(char)arg1 ;
-(void)samStarting_broadcast_SSAM_ON;
-(void)samStarting_send_SSAM_ON_to_TV;
-(void)samStarting_broadcast_Req_Act_Src;
-(void)samStarting_handleActiveSourceResponseTimeout;
-(void)samStarting_handleFeatureAbortResponseTimeout;
-(void)setAudioReturnChannelState:(int)arg1 ;
-(char)initiateARC:(unsigned char)arg1 error:(id*)arg2 ;
-(void)arcInformDelegateTransitionTo:(unsigned long long)arg1 failedWithError:(id)arg2 ;
-(int)audioReturnChannelState;
-(void)arcInformDelegateOfSuccessTransitioningTo:(unsigned long long)arg1 ;
-(char)terminateARC:(unsigned char)arg1 error:(id*)arg2 ;
-(id)filterReportPhysicalAddressMessage:(id)arg1 ;
-(id)filterActiveSourceMessage:(id)arg1 ;
-(id)filterInactiveSourceMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterSetStreamPathMessage:(id)arg1 ;
-(id)filterRoutingChangeMessage:(id)arg1 ;
-(id)filterRoutingInformationMessage:(id)arg1 ;
-(id)filterSetMenuLanguageMessage:(id)arg1 ;
-(id)filterSetOSDNameMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterCECVersionMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterSetSystemAudioModeMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterReportPowerStatusMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterDeckStatusMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterDeviceVendorIDMessage:(id)arg1 ;
-(id)filterSystemAudioModeStatusMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterReportFeaturesMessage:(id)arg1 toDevice:(id)arg2 ;
-(void)handleGetCECVersionMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGetMenuLanguageMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGivePhysicalAddressMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveOSDNameMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleSetSystemAudioModeMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveDevicePowerStatusMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleRequestActiveSourceMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleActiveSourceMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleSetStreamPathMessage:(id)arg1 ;
-(void)handleDeckControlPlayMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleDeckControlMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveDeckStatusMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleMenuRequest:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleUserControlPressedMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleUserControlReleasedMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveDeviceVendorIDMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleFeatureAbortMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)sendFeatureAbort:(unsigned char)arg1 forMessage:(id)arg2 ;
-(void)handleGiveAudioStatusMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveSystemAudioModeStatusMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleRequestShortAudioDescriptorMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleSystemAudioModeRequestMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleRequestARCInitiationMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleReportARCInitiatedMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleRequestARCTerminationMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleReportARCTerminatedMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveFeaturesMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)didNotHandleMessage:(id)arg1 unsupportedOperand:(char)arg2 ;
-(void)samStarting_handleFeatureAbortReceived;
-(void)arcStarting_handleFeatureAbortReceivedWithOpcode:(unsigned char)arg1 reason:(unsigned char)arg2 ;
-(void)arcStopping_handleFeatureAbortReceivedWithOpcode:(unsigned char)arg1 reason:(unsigned char)arg2 ;
-(void)samStarting_handleActiveSourceReceived;
-(void)error:(id)arg1 handlingMessage:(id)arg2 fromDevice:(id)arg3 ;
-(char)setOSDName:(CECOSDName)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)deviceVendorID:(unsigned)arg1 error:(id*)arg2 ;
-(char)cecVersion:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)setMenuLanguage:(CECLanguage)arg1 error:(id*)arg2 ;
-(void)userControlScheduleFollowerSafetyTimeout;
-(void)userControlCancelFollowerSafetyTimeout;
-(void)audioStatusHandleUserControl:(CECUserControl)arg1 pressed:(char)arg2 ;
-(char)handlingRequiredForSystemAudioModeMessage:(id)arg1 ;
-(char)handlingRequiredForAudioReturnChannelMessage:(id)arg1 ;
-(void)arcStarting_handleReportARCInitiatedReceived;
-(void)arcStopping_handleReportARCTerminatedReceived;
-(char)activeSource:(id*)arg1 ;
-(char)inactiveSourceTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)deckStatusWithInfo:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)featureAbort:(unsigned char)arg1 reason:(unsigned char)arg2 to:(unsigned char)arg3 error:(id*)arg4 ;
-(char)imageViewOnTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)textViewOnTo:(unsigned char)arg1 error:(id*)arg2 ;
-(void)dsamStarting_handleBroadcastSSAMOnResponseReceived;
-(void)dsamStopping_handleBroadcastSSAMOffResponseReceived;
-(char)audioReturnChannelTransitionInProgress;
-(char)routingChangeOriginalAddress:(unsigned long long)arg1 newAddress:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)routingInformationPhysicalAddress:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)setStreamPathPhysicalAddress:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)getMenuLanguageTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)pollTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)giveOSDNameTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)abortTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)giveAudioStatusTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)systemAudioModeRequestWithPhysicalAddress:(unsigned short)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)reportShortAudioDescriptorTo:(unsigned char)arg1 error:(id*)arg2 ;
-(char)requestShortAudioDescriptor:(unsigned char)arg1 error:(id*)arg2 ;
-(char)setSystemAudioMode:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(char)systemAudioModeStatus:(unsigned char)arg1 error:(id*)arg2 ;
-(unsigned short)deckStatusRequestMask;
@end

