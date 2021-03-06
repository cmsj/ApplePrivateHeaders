/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVRCXPCRequestProtocol <NSObject>
@required
-(void)fulfillAuthChallengeForDeviceWithIdentifier:(id)arg1 withLocallyEnteredCode:(id)arg2;
-(void)cancelAuthChallengeForDeviceWithIdentifier:(id)arg1;
-(void)openConnectionToDeviceWithIdentifier:(id)arg1;
-(void)closeConnectionToDeviceWithIdentifier:(id)arg1 withType:(unsigned long long)arg2;
-(void)sendButtonEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendTouchEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendGameControllerEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendInputText:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendInputReturnKeyToDeviceWithIdentifier:(id)arg1;
-(void)sendInputTextPayload:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)setVoiceRecorderAutomaticRecording:(char)arg1 forDeviceWithIdentifier:(id)arg2;
-(void)startVoiceRecordingForDeviceWithIdentifier:(id)arg1;
-(void)stopVoiceRecordingForDeviceWithIdentifier:(id)arg1;
-(void)beginDeviceQuery;
-(void)endDeviceQuery;
-(void)fetchActiveMREndpointUIDWithCompletion:(/*^block*/id)arg1;
-(void)sendEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 options:(id)arg3 response:(/*^block*/id)arg4;

@end

