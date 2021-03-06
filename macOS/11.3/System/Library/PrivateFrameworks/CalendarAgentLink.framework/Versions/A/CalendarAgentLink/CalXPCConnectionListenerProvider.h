/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class CalXPCConnectionInfo, NSMutableSet, NSXPCListener, NSString;

@interface CalXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate> {

	CalXPCConnectionInfo* _info;
	/*^block*/id _errorHandler;
	NSMutableSet* _clients;
	NSXPCListener* _connectionListener;

}

@property (nonatomic,retain) CalXPCConnectionInfo * info;                     //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id errorHandler;                                   //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) NSMutableSet * clients;                          //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSXPCListener * connectionListener;              //@synthesize connectionListener=_connectionListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(CalXPCConnectionInfo *)info;
-(void)setInfo:(CalXPCConnectionInfo *)arg1 ;
-(void)stopListening;
-(NSMutableSet *)clients;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)performBlockWithAllClients:(/*^block*/id)arg1 ;
-(id)initWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_didInterruptConnection;
-(void)_setupListener;
-(void)_didInvalidateConnection:(id)arg1 ;
-(void)_addClientConnection:(id)arg1 clientLink:(id)arg2 ;
-(void)_removeClientConnection:(id)arg1 ;
-(NSXPCListener *)connectionListener;
-(void)setConnectionListener:(NSXPCListener *)arg1 ;
@end

