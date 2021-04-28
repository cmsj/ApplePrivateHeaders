/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKAppletSubcredentialPairingSessionDelegate <PKSessionDelegate>
@required
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(char)arg2;

@end
