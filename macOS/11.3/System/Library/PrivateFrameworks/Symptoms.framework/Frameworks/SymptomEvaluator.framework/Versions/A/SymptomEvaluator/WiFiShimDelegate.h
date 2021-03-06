/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiShimDelegate <NSObject>
@optional
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)wifiShim_RSSIChangedTo:(long long)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2TriggerDisconnectEdge:(char)arg1 forInterface:(id)arg2;
-(void)wifiShim_AWDLLinkUp:(char)arg1;
-(void)wifiShim_InfraAdminDisable:(id)arg1 bssid:(id)arg2;
-(void)wifiShim_HintForFallback:(char)arg1 reasons:(id)arg2;
-(void)wifiShim_PreferredNetworksChanged:(id)arg1;
-(void)wifiShim_LQMAsystoleDetected:(double)arg1;

@end

