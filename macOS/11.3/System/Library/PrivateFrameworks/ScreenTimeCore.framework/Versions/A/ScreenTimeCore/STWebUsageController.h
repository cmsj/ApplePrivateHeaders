/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface STWebUsageController : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)xpcConnection;
-(void)deleteAllWebHistoryForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteWebHistoryDuringInterval:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteWebHistoryForURL:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_asynchronousProxyWithHandler:(/*^block*/id)arg1 ;
-(void)deleteWebHistoryForDomain:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

