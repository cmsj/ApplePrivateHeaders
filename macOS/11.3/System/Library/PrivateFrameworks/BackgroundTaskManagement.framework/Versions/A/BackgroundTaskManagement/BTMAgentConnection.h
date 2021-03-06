/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BackgroundTaskManagement.framework/Versions/A/BackgroundTaskManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface BTMAgentConnection : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedInstance;
+(id)serviceName;
-(void)setUserElection:(long long)arg1 forBackgroundItem:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)connection;
-(void)getLoginItemsWithTypeMask:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)addLoginItem:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeLoginItem:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getBackgroundItemsWithReply:(/*^block*/id)arg1 ;
-(void)setUserElection:(long long)arg1 forURL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)canLoadServiceLoginItemWithURLs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)openLoginItemsWithReply:(/*^block*/id)arg1 ;
@end

