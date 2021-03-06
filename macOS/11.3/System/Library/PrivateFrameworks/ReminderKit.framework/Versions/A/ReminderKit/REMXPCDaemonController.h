/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDaemonController.h>

@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;
@class NSMutableDictionary, NSString, NSXPCConnection, REMStoreContainerToken;

@interface REMXPCDaemonController : NSObject <REMDaemonController> {

	os_unfair_lock_s _ivarLock;
	id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> _cloudKitNetworkActivityDelegate;
	NSMutableDictionary* _l_performersByName;
	NSString* _serviceName;
	NSXPCConnection* _xpcConnection;
	REMStoreContainerToken* _storeContainerToken;

}

@property (assign,nonatomic) os_unfair_lock_s ivarLock;                                                                                     //@synthesize ivarLock=_ivarLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * l_performersByName;                                                                      //@synthesize l_performersByName=_l_performersByName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                                                                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) REMStoreContainerToken * storeContainerToken;                                                                  //@synthesize storeContainerToken=_storeContainerToken - In the implementation block
@property (assign,nonatomic,__weak) id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate;              //@synthesize cloudKitNetworkActivityDelegate=_cloudKitNetworkActivityDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weakSharedInstance;
+(id)userInteractiveDaemonController;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)invalidate;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(os_unfair_lock_s)ivarLock;
-(void)setIvarLock:(os_unfair_lock_s)arg1 ;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(REMStoreContainerToken *)storeContainerToken;
-(void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)syncStorePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)_xpcConnectionReconnectingIfNecessary;
-(id)initWithStoreContainerToken:(id)arg1 userInteractive:(char)arg2 ;
-(void)setCloudKitNetworkActivityDelegate:(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)arg1 ;
-(id)_syncPerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_asyncPerformerWithResolver:(id)arg1 reason:(id)arg2 loadHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)_resolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)l_performersByName;
-(void)_asyncResolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_resolvePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_asyncResolvePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)cloudKitNetworkActivityDelegate;
-(void)_xpcConnectionDidInterrupt;
-(void)_xpcConnectionDidInvalidate;
-(id)syncDebugPerformerWithErrorHandler:(/*^block*/id)arg1 ;
-(id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)setL_performersByName:(NSMutableDictionary *)arg1 ;
-(void)setStoreContainerToken:(REMStoreContainerToken *)arg1 ;
@end

