/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleLOM.framework/Versions/A/AppleLOM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_connection, OS_dispatch_queue;
@class NSDictionary, NSObject, LOMStateMachine, NSMutableArray, NSData;

@interface LOMControllerClient : NSObject {

	char _isActive;
	NSDictionary* _attributes;
	NSObject*<OS_nw_connection> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _connectionReadyHandler;
	/*^block*/id _connectionCanceledHandler;
	LOMStateMachine* _stateMachine;
	NSMutableArray* _requestQueue;
	NSData* _response;
	NSData* _responseAck;

}

@property (retain) NSDictionary * attributes;                           //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSObject*<OS_nw_connection> connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (copy) id connectionReadyHandler;                             //@synthesize connectionReadyHandler=_connectionReadyHandler - In the implementation block
@property (copy) id connectionCanceledHandler;                          //@synthesize connectionCanceledHandler=_connectionCanceledHandler - In the implementation block
@property (retain) LOMStateMachine * stateMachine;                      //@synthesize stateMachine=_stateMachine - In the implementation block
@property (retain) NSMutableArray * requestQueue;                       //@synthesize requestQueue=_requestQueue - In the implementation block
@property (retain) NSData * response;                                   //@synthesize response=_response - In the implementation block
@property (retain) NSData * responseAck;                                //@synthesize responseAck=_responseAck - In the implementation block
-(id)description;
-(NSObject*<OS_nw_connection>)connection;
-(void)setConnection:(NSObject*<OS_nw_connection>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDictionary *)attributes;
-(void)cancel;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(char)activate;
-(NSData *)response;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(LOMStateMachine *)stateMachine;
-(void)setStateMachine:(LOMStateMachine *)arg1 ;
-(void)setResponse:(NSData *)arg1 ;
-(NSMutableArray *)requestQueue;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(char)setup;
-(void)setRequestQueue:(NSMutableArray *)arg1 ;
-(void)handleResponse;
-(void)sendRequest;
-(char)isValidRequest;
-(void)setConnectionReadyHandler:(id)arg1 ;
-(id)connectionReadyHandler;
-(void)setReadyHandler:(/*^block*/id)arg1 ;
-(void)receiveResponse;
-(void)requestCompletion;
-(void)setSecOptions:(id)arg1 ;
-(void)setupStateMachine;
-(void)setConnectionCanceledHandler:(id)arg1 ;
-(void)teardownClient;
-(void)dispatchReadyNotification;
-(char)isValidResponse;
-(void)completeLastPendingRequest;
-(void)completeAllPendingRequest;
-(void)setResponseAck:(NSData *)arg1 ;
-(NSData *)responseAck;
-(void)sendResponseAck;
-(id)connectionCanceledHandler;
-(id)initWithAttributes:(id)arg1 queue:(id)arg2 ;
-(void)deviceRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

