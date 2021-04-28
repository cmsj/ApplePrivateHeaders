/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/Versions/A/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKDaemonClient;

@interface PKManager : NSObject {

	PKDaemonClient* _client;

}

@property (retain) PKDaemonClient * client;              //@synthesize client=_client - In the implementation block
+(id)managerForUser:(unsigned)arg1 ;
+(id)defaultManager;
-(id)initForUser:(unsigned)arg1 ;
-(id)containingAppForExtensionProperties:(id)arg1 ;
-(void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(/*^block*/id)arg3 ;
-(char)releaseHold:(id)arg1 flags:(unsigned long long)arg2 withError:(id*)arg3 ;
-(void)registerPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)unregisterPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)registerPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)unregisterPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)containingAppForPlugInConnectedTo:(id)arg1 ;
-(void)forceHoldPlugIn:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)holdPlugInsInApplication:(id)arg1 withError:(id*)arg2 ;
-(id)forceHoldPlugIn:(id)arg1 withError:(id*)arg2 ;
-(id)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 withError:(id*)arg3 ;
-(void)releaseHold:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)releaseHold:(id)arg1 withError:(id*)arg2 ;
-(void)updateExtensionStatesForPlugIns:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 result:(/*^block*/id)arg3 ;
-(PKDaemonClient *)client;
-(void)setClient:(PKDaemonClient *)arg1 ;
-(id)containingAppForPlugInWithPid:(int)arg1 ;
-(char)terminatePlugInAtURL:(id)arg1 withError:(id*)arg2 ;
-(id)informationForPlugInWithPid:(int)arg1 ;
-(void)releaseHold:(id)arg1 ;
-(void)holdPlugInsInApplication:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)initForService:(const char*)arg1 ;
@end
