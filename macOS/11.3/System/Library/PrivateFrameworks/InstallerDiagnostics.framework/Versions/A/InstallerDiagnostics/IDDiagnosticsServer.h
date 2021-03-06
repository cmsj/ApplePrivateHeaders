/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InstallerDiagnostics.framework/Versions/A/InstallerDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/IDDiagnosticsProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, IDDiagnosticsStore, NSString;

@interface IDDiagnosticsServer : NSObject <NSXPCListenerDelegate, IDDiagnosticsProtocol> {

	char _installFinished;
	NSXPCListener* _listener;
	NSMutableArray* _clientConnections;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	IDDiagnosticsStore* _store;

}

@property (retain) NSXPCListener * listener;                                  //@synthesize listener=_listener - In the implementation block
@property (retain) NSMutableArray * clientConnections;                        //@synthesize clientConnections=_clientConnections - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (readonly) char installFinished;                                    //@synthesize installFinished=_installFinished - In the implementation block
@property (retain) IDDiagnosticsStore * store;                                //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)startMessageTransport;
-(void)finishMessageTransport;
-(void)recordDiagnosticMessage:(long long)arg1 withData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearSingleDiagnosticMessage:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearDiagnosticMessages:(/*^block*/id)arg1 ;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(IDDiagnosticsStore *)store;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setStore:(IDDiagnosticsStore *)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(char)installFinished;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)clientConnections;
-(void)startNewInstall;
-(void)finishInstall;
-(void)startServer;
-(void)setClientConnections:(NSMutableArray *)arg1 ;
@end

