/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface WRMClient : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	id _wrmClientDelegate;
	int _mediaControlInfoVersion;
	int _mode;
	SCD_Struct_WR161 _metricsConfig;
	int _rssiThreshold;

}

@property (assign) id<WRMClientDelegate> delegate; 
@property (assign) int mediaControlInfoVersion;                 //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
-(void)dealloc;
-(id)init;
-(id<WRMClientDelegate>)delegate;
-(void)setDelegate:(id<WRMClientDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setConfiguration:(SCD_Struct_VC114*)arg1 ;
-(void)setMediaControlInfoVersion:(int)arg1 ;
-(int)mediaControlInfoVersion;
-(void)setPreWarmState:(char)arg1 ;
-(void)reportMetricsFaceTimeCalling:(const SCD_Struct_VC132*)arg1 ;
-(void)sendStatusUpdateFaceTimeCalling:(const SCD_Struct_VC117*)arg1 ;
-(void)requestNotificationFaceTimeCalling;
-(void)startWRMClientWithMode:(int)arg1 metricsConfig:(SCD_Struct_WR161)arg2 ;
-(void)stopWRMClient;
-(void)setRSSIThresholdEnabled:(char)arg1 ;
-(void)reportImmediateMetric:(int)arg1 value:(unsigned long long)arg2 ;
-(void)processNotificationList:(id)arg1 ;
-(void)processWRMCoexMetrics:(id)arg1 isAlertedMode:(char)arg2 ;
-(void)releaseServiceConnection;
-(char)setupServiceConnection;
-(void)sendProcessInfoWithProcessID:(unsigned long long)arg1 ;
-(int)getWRMSubscribeVersion;
-(void)sendStatusUpdateInfoFaceTimeCalling:(id)arg1 ;
-(void)dumpReport:(id)arg1 ;
-(void)sendReport:(id)arg1 ;
-(void)sendSubscriptionInfoFaceTimeCalling;
-(void)sendUnsubscriptionInfoFaceTimeCalling;
-(void)reportMetricsWifiCalling:(const SCD_Struct_VC132*)arg1 ;
@end

