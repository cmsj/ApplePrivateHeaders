/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SystemAdministration/SystemAdministration-Structs.h>
@interface ADMNetworkTimeClient : NSObject
+(id)sharedNetworkTimeClient;
-(void)setServer:(id)arg1 ;
-(id)server;
-(void)start;
-(void)stop;
-(char)isRunning;
-(void)restart;
-(char)isSyncing;
-(void)setServers:(id)arg1 ;
-(id)servers;
-(void)startSyncing;
-(void)stopSyncing;
-(void)startWithAuthorization:(AuthorizationOpaqueRefRef)arg1 ;
-(void)stopWithAuthorization:(AuthorizationOpaqueRefRef)arg1 ;
-(void)setLaunchAtStartup:(char)arg1 ;
-(char)isServing;
-(void)restartAsync;
-(char)synchronizeNow;
@end

