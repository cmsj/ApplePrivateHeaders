/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedOSInstall/EmbeddedOSInstallServiceClientProtocol.h>

@class NSXPCConnection, NSLock, NSMutableDictionary;

@interface EOSRestoreServiceController : NSObject <EmbeddedOSInstallServiceClientProtocol> {

	NSXPCConnection* _serviceConnection;
	NSLock* _serviceConnectionLock;
	NSMutableDictionary* _progressHandlersDictionary;

}

@property (retain) NSXPCConnection * serviceConnection;                           //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (retain) NSLock * serviceConnectionLock;                                //@synthesize serviceConnectionLock=_serviceConnectionLock - In the implementation block
@property (retain) NSMutableDictionary * progressHandlersDictionary;              //@synthesize progressHandlersDictionary=_progressHandlersDictionary - In the implementation block
-(void)dealloc;
-(id)init;
-(id)_connectToService;
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(NSLock *)serviceConnectionLock;
-(void)setServiceConnectionLock:(NSLock *)arg1 ;
-(void)shouldHealEmbeddedDeviceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)restoreDeviceWithBundleSpecifier:(id)arg1 options:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getLocalFDRDataFromESPWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)preflightPackageSpecifiers:(id)arg1 options:(id)arg2 tagPrefix:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)preflightBundleForHealingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)lockRestoreQueueForCLIRestoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reportRestoreProgressForUUID:(id)arg1 restorePhase:(long long)arg2 restoreAfterBootFailure:(char)arg3 percentComplete:(float)arg4 timeRemaining:(double)arg5 ;
-(id)restoreServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_setProgressHandler:(/*^block*/id)arg1 forUUID:(id)arg2 ;
-(NSMutableDictionary *)progressHandlersDictionary;
-(void)setProgressHandlersDictionary:(NSMutableDictionary *)arg1 ;
@end

