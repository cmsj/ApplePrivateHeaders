/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CWFXPCRequestProxyDelegate <NSObject>
@required
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3;
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3;
-(void)XPCRequestProxy:(id)arg1 invalidatedXPCConnection:(id)arg2;
-(void)XPCRequestProxy:(id)arg1 sendXPCEvent:(id)arg2 reply:(/*^block*/id)arg3;

@end

