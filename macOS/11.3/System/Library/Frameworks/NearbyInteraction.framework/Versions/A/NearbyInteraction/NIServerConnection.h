/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/Versions/A/NearbyInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NearbyInteraction/NearbyInteraction-Structs.h>
@class NSObject, NSUUID;

@interface NIServerConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	char _resumed;
	char _invalidated;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSUUID* _sessionID;
	id _exportedObject;

}

@property (copy) id interruptionHandler;              //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (copy) id invalidationHandler;              //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) NSUUID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (retain) id exportedObject;                 //@synthesize exportedObject=_exportedObject - In the implementation block
-(void)invalidate;
-(void)resume;
-(void)setExportedObject:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)remoteObjectProxy;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(id)exportedObject;
-(void)activate:(/*^block*/id)arg1 ;
-(NSUUID *)sessionID;
-(id)synchronousRemoteObjectProxy;
-(void)pause:(/*^block*/id)arg1 ;
-(id)initWithSessionID:(id)arg1 queue:(id)arg2 exportedObject:(id)arg3 ;
-(char)isSandboxExtensionRequired;
-(void)queryDeviceCapabilities:(/*^block*/id)arg1 ;
-(void)runWithConfiguration:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)allowTasksToFinishWhileInBackground;
-(void)stopAllowingTasksToFinishWhileInBackground;
-(void)notifySystemShutdownWithReason:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(SCD_Struct_NI8)auditTokenForConnection;
-(void)shareSandboxToken:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

