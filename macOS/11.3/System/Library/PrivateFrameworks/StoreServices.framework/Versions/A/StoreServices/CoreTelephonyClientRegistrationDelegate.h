/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyClientRegistrationDelegate <NSObject>
@optional
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2;
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2;
-(void)rejectCauseCodeChanged:(id)arg1 causeCode:(id)arg2;
-(void)voiceLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)enhancedVoiceLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)enhancedDataLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)imsRegistrationChanged:(id)arg1 info:(id)arg2;
-(void)cellChanged:(id)arg1 cell:(id)arg2;
-(void)networkListAvailable:(id)arg1 list:(id)arg2;
-(void)customerServiceProfileChanged:(id)arg1 visible:(char)arg2;
-(void)networkSelected:(id)arg1 success:(char)arg2 mode:(id)arg3;
-(void)networkReselectionNeeded:(id)arg1;
-(void)encryptionStatusChanged:(id)arg1 info:(id)arg2;
-(void)ratSelectionChanged:(id)arg1 selection:(id)arg2;
-(void)nrDisableStatusChanged:(id)arg1 status:(id)arg2;

@end

