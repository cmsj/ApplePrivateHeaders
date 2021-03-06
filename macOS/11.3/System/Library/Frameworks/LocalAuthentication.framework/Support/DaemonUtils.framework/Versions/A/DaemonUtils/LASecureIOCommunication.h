/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/Versions/A/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, LASecureIOCommunicationDelegate;
@class NSMutableDictionary, NSObject, BridgeXPCListener, BridgeXPCConnection, NSString;

@interface LASecureIOCommunication : NSObject {

	NSMutableDictionary* _currentCalls;
	NSObject*<OS_dispatch_queue> _queue;
	BridgeXPCListener* _xpcListener;
	BridgeXPCConnection* _xpcConnection;
	NSString* _serviceName;
	char _client;
	NSObject*<LASecureIOCommunicationDelegate> _delegate;

}

@property (__weak) NSObject*<LASecureIOCommunicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(long long)handleTransferRequest:(id)arg1 ;
-(void)handleTransferResponse:(id)arg1 ;
-(long long)executeCommand:(unsigned)arg1 version:(id)arg2 withData:(id)arg3 andResponse:(id*)arg4 ;
-(id)initAsServer:(id)arg1 ;
-(id)initAsClient:(id)arg1 ;
-(long long)executeCommand:(unsigned)arg1 withData:(id)arg2 andResponse:(id*)arg3 ;
-(id)init;
-(NSObject*<LASecureIOCommunicationDelegate>)delegate;
-(void)setDelegate:(NSObject*<LASecureIOCommunicationDelegate>)arg1 ;
-(long long)send:(id)arg1 ;
-(/*^block*/id)eventHandler;
-(long long)setupConnection;
-(void)receive:(id)arg1 ;
@end

