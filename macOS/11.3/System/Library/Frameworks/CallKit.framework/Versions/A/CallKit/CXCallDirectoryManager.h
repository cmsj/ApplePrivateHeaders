/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface CXCallDirectoryManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _defaultConnection;
	NSXPCConnection* _maintenanceConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * defaultConnection;                  //@synthesize defaultConnection=_defaultConnection - In the implementation block
@property (nonatomic,retain) NSXPCConnection * maintenanceConnection;              //@synthesize maintenanceConnection=_maintenanceConnection - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCConnection *)defaultConnection;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)getExtensionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEnabled:(char)arg1 forExtensionWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSXPCConnection *)maintenanceConnection;
-(id)defaultConnectionRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)reloadExtensionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)synchronizeExtensionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)openSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)compactStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDefaultConnection:(NSXPCConnection *)arg1 ;
-(void)setMaintenanceConnection:(NSXPCConnection *)arg1 ;
@end
