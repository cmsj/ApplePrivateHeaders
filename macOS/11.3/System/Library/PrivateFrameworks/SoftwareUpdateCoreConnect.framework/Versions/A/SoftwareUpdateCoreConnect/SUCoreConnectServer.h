/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/Versions/A/SoftwareUpdateCoreConnect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SUCoreConnectServerProtocol.h>

@protocol OS_dispatch_queue;
@class SUCoreConnectServerPolicy, SUCoreLog, NSObject, NSMutableDictionary, NSMutableSet, NSString;

@interface SUCoreConnectServer : NSObject <NSXPCListenerDelegate, SUCoreConnectServerProtocol> {

	SUCoreConnectServerPolicy* _connectionPolicy;
	SUCoreLog* _logger;
	NSObject*<OS_dispatch_queue> _connectionsAccessQueue;
	NSMutableDictionary* _connections;
	NSMutableSet* _observerConnections;
	NSObject*<OS_dispatch_queue> _connectionSendMessageQueue;

}

@property (nonatomic,retain,readonly) SUCoreConnectServerPolicy * connectionPolicy;                         //@synthesize connectionPolicy=_connectionPolicy - In the implementation block
@property (nonatomic,retain,readonly) SUCoreLog * logger;                                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> connectionsAccessQueue;                  //@synthesize connectionsAccessQueue=_connectionsAccessQueue - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * connections;                                    //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * observerConnections;                                   //@synthesize observerConnections=_observerConnections - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> connectionSendMessageQueue;              //@synthesize connectionSendMessageQueue=_connectionSendMessageQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServerPolicy:(id)arg1 ;
-(void)setupListenerAndResumeConnection;
-(void)connectServerSendClientMessage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionsAccessQueue;
-(void)connectProtocolFromClientSendServerMessage:(id)arg1 ;
-(void)connectProtocolFromClientSendServerMessage:(id)arg1 proxyObject:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)connectionSendMessageQueue;
-(void)_handleConnectionError:(id)arg1 method:(const char*)arg2 forConnection:(id)arg3 ;
-(void)_setConnection:(id)arg1 forClientID:(id)arg2 ;
-(void)_informObserversOfCompletionReplyWithMessage:(id)arg1 error:(id)arg2 ;
-(id)_getAllObserverConnections;
-(id)_connectionForClientID:(id)arg1 ;
-(NSMutableSet *)observerConnections;
-(id)_clientIDForConnection:(id)arg1 ;
-(NSString *)description;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableDictionary *)connections;
-(SUCoreLog *)logger;
-(SUCoreConnectServerPolicy *)connectionPolicy;
-(char)isConnectionEntitled:(id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
@end

