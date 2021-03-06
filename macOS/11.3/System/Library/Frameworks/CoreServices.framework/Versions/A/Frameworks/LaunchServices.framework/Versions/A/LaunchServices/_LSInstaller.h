/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSInstallationServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface _LSInstaller : NSObject <LSInstallationServiceProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}

@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;                  //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(void)sendCallbackDeliveryComplete;
-(NSXPCConnection *)xpcConnection;
-(char)validateEntitlementsForInstall:(char)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)_preflightAppDeletion:(id)arg1 ;
-(void)_postProcessingForApp:(id)arg1 type:(id)arg2 notification:(int)arg3 ;
-(id)uninstallBundle:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(char)unregisterBundle:(id)arg1 placeholderOnly:(char)arg2 notification:(int*)arg3 ;
-(char)dispatchRegistration:(id)arg1 ;
-(char)registerBundle:(id)arg1 withOptions:(id)arg2 ;
-(id)installPackage:(id)arg1 withIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)sendCallbackWithDictionary:(id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setDatabaseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

