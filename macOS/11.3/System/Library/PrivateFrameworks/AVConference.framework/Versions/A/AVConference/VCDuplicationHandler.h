/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCDuplicationHandler : NSObject {

	unsigned char _duplicationState;
	unsigned char _duplicationReason;
	char _moreThanOneConnectionAvailable;
	SCD_Struct_VC175 _localAlertInfo;
	SCD_Struct_VC175 _remoteAlertInfo;
	char _isRemotePreAzul;
	char _iRATDuplicationEnabled;

}

@property (readonly) unsigned char duplicationReason;              //@synthesize duplicationReason=_duplicationReason - In the implementation block
@property (readonly) char isDuplicationEnabled; 
@property (readonly) char isDuplicationPending; 
@property (assign) char isRemotePreAzul;                           //@synthesize isRemotePreAzul=_isRemotePreAzul - In the implementation block
@property (assign) char iRATDuplicationEnabled;                    //@synthesize iRATDuplicationEnabled=_iRATDuplicationEnabled - In the implementation block
-(void)setIsRemotePreAzul:(char)arg1 ;
-(void)setIRATDuplicationEnabled:(char)arg1 ;
-(char)isDuplicationEnabled;
-(unsigned char)duplicationReason;
-(SCD_Struct_VC112)handleDuplicationStateUpdateEvent:(SCD_Struct_VC113)arg1 ;
-(char)isDuplicationPending;
-(char)iRATDuplicationEnabled;
-(void)updateDuplicationStateForMissingPacketsUpdateEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)updateDuplicationStateForReceivingPacketsUpdateEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)updateDuplicationStateForLocalWRMSuggestingCellularEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)updateDuplicationStateForLocalWRMSuggestingWiFiEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)updateDuplicationStateForRemoteWRMSuggestingCellularEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)updateDuplicationStateForRemoteWRMSuggestingWiFiEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)updateDuplicationStateForTurnOffDuplicationForHandoverEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)updateDuplicationStateForTurnOnDuplicationForHandoverEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)updateDuplicationStateForAlertStateUpdatedEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)updateDuplicationStateForConnectionArrayUpdatedEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)enableDuplication;
-(void)disableDuplication;
-(void)shareLocalInterfacePreferenceWithPeerDuringActiveDuplicationForEvent:(SCD_Struct_VC113)arg1 updateResult:(SCD_Struct_VC112*)arg2 ;
-(void)stopRemoteDuplicationAndUpdateResult:(SCD_Struct_VC112*)arg1 ;
-(char)updateDuplicationStateWithAlertInfo:(char)arg1 ;
-(char)isDuplicationDueToWRMSuggestion;
-(char)isRemotePreAzul;
@end
