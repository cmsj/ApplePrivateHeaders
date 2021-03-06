/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallControllerHostProtocol.h>
#import <libobjc.A.dylib/CXCallControllerVendorProtocol.h>

@protocol CXCallControllerHostConnectionDelegate, OS_dispatch_queue;
@class NSString, NSURL, NSObject, NSXPCConnection, NSSet;

@interface CXCallControllerHostConnection : NSObject <CXCallControllerHostProtocol, CXCallControllerVendorProtocol> {

	char _hasVoIPBackgroundMode;
	NSString* _applicationIdentifier;
	NSURL* _bundleURL;
	id<CXCallControllerHostConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSXPCConnection* _connection;
	NSSet* _capabilities;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                    //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) char hasVoIPBackgroundMode;                                                  //@synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                                              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                             //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSSet * capabilities;                                                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) id<CXCallControllerVendorProtocol> remoteObjectProxy; 
@property (getter=isPermittedToUsePublicAPI,nonatomic,readonly) char entitledForPublicAPI; 
@property (getter=isPermittedToUsePrivateAPI,nonatomic,readonly) char entitledForPrivateAPI; 
@property (assign,nonatomic,__weak) id<CXCallControllerHostConnectionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(id<CXCallControllerHostConnectionDelegate>)delegate;
-(void)setDelegate:(id<CXCallControllerHostConnectionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSURL *)bundleURL;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSString *)applicationIdentifier;
-(id<CXCallControllerVendorProtocol>)remoteObjectProxy;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(char)isPermittedToUsePublicAPI;
-(char)isPermittedToUsePrivateAPI;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)addOrUpdateCall:(id)arg1 ;
-(oneway void)removeCall:(id)arg1 ;
-(id)initWithConnection:(id)arg1 serialQueue:(id)arg2 ;
-(char)hasVoIPBackgroundMode;
-(oneway void)requestCalls:(/*^block*/id)arg1 ;
-(void)setHasVoIPBackgroundMode:(char)arg1 ;
@end

