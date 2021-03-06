/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/Versions/A/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NPTunnelTuscany.h>

@class NPTunnelFlow;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany {

	void* _window;
	NPTunnelFlow* _flow;

}

@property (assign) void* window;                     //@synthesize window=_window - In the implementation block
@property (retain) NPTunnelFlow * flow;              //@synthesize flow=_flow - In the implementation block
-(void)dealloc;
-(void*)window;
-(void)setWindow:(void*)arg1 ;
-(void)write:(id)arg1 ;
-(void)cancelConnection;
-(NPTunnelFlow *)flow;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6 ;
-(unsigned long long)initialWindowSize;
-(void)setFlow:(NPTunnelFlow *)arg1 ;
-(char)addNewFlow:(id)arg1 ;
-(void)removeFlow:(unsigned long long)arg1 ;
-(unsigned long long)maxFrameSize;
-(void)createTuscanyClient;
-(unsigned)dayPassSessionCounter;
-(long long)currentMTU;
-(char)selectBestEdge;
-(void)startConnectionTimer;
-(void)cancelConnectionTimer;
-(void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3 ;
-(void)pingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

