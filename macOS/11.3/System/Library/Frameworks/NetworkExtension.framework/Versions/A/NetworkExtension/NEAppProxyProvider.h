/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NETunnelProvider.h>

@interface NEAppProxyProvider : NETunnelProvider
-(void)cancelProxyWithError:(id)arg1 ;
-(char)handleNewUDPFlow:(id)arg1 initialRemoteEndpoint:(id)arg2 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)handleNewFlow:(id)arg1 ;
@end

