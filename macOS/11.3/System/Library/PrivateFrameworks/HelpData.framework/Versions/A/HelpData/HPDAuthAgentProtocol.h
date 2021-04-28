/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HPDAuthAgentProtocol
@property (assign) char suppressUI; 
@required
-(void)authenticateWithServiceName:(id)arg1 environment:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)connectToNetwork;
-(void)disconnectFromNetwork;
-(void)isNetworkConnected:(/*^block*/id)arg1;
-(void)registerForAuthenticationNotifications;
-(void)unregisterForAuthenticationNotifications;
-(char)suppressUI;
-(void)setSuppressUI:(char)arg1;

@end
