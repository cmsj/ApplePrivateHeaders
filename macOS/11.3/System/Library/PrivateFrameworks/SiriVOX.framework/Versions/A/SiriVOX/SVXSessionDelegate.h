/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVXSessionDelegate <NSObject>
@required
-(void)sessionDidInvalidate:(id)arg1;
-(void)session:(id)arg1 willChangeFromState:(long long)arg2 toState:(long long)arg3;
-(void)session:(id)arg1 didChangeFromState:(long long)arg2 toState:(long long)arg3;
-(void)session:(id)arg1 willBeginUpdateAudioPowerWithType:(long long)arg2 wrapper:(id)arg3;
-(void)session:(id)arg1 didEndUpdateAudioPowerWithType:(long long)arg2;
-(void)session:(id)arg1 willStartSoundWithID:(long long)arg2;
-(void)session:(id)arg1 didStartSoundWithID:(long long)arg2;
-(void)session:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
-(void)session:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2 activityUUID:(id)arg3;
-(void)session:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2 activityUUID:(id)arg3;
-(void)session:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3 activityUUID:(id)arg4;
-(void)session:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2 activityUUID:(id)arg3;
-(void)session:(id)arg1 willActivateWithContext:(id)arg2;
-(void)session:(id)arg1 didActivateWithContext:(id)arg2;
-(void)session:(id)arg1 didNotActivateWithContext:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 willDeactivateWithContext:(id)arg2;
-(void)session:(id)arg1 didDeactivateWithContext:(id)arg2;
-(void)session:(id)arg1 audioSessionWillBecomeActive:(char)arg2 activationContext:(id)arg3 deactivationContext:(id)arg4;
-(void)session:(id)arg1 audioSessionDidBecomeActive:(char)arg2 activationContext:(id)arg3 deactivationContext:(id)arg4;

@end

