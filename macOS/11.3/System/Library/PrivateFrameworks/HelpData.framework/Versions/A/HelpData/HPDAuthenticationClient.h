/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HPDAuthAgentProtocol.h>

@protocol HPDAuthClientProtocol;
@class NSXPCConnection, NSString;

@interface HPDAuthenticationClient : NSObject <HPDAuthAgentProtocol> {

	NSXPCConnection* _xpcConnection;
	NSString* _serviceName;
	NSString* _environment;
	id<HPDAuthClientProtocol> _delegate;
	/*^block*/id _errorHandler;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                        //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * environment;                                   //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic,__weak) id<HPDAuthClientProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id errorHandler;                                          //@synthesize errorHandler=_errorHandler - In the implementation block
@property (assign) char suppressUI; 
-(void)dealloc;
-(id)init;
-(id<HPDAuthClientProtocol>)delegate;
-(void)setDelegate:(id<HPDAuthClientProtocol>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setEnvironment:(NSString *)arg1 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(NSString *)environment;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)_handleConnectionError:(id)arg1 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processEventNotification:(id)arg1 ;
-(void)authenticateWithServiceName:(id)arg1 environment:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)connectToNetwork;
-(void)disconnectFromNetwork;
-(void)isNetworkConnected:(/*^block*/id)arg1 ;
-(void)registerForAuthenticationNotifications;
-(void)unregisterForAuthenticationNotifications;
-(char)suppressUI;
-(void)setSuppressUI:(char)arg1 ;
-(id)initWithServiceName:(id)arg1 environment:(id)arg2 ;
@end
