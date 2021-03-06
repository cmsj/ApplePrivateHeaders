/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/Versions/A/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASTConnection.h>

@protocol ASTConnectionStatusDelegate;
@class NSMutableURLRequest, NSString, ASTIdentity;

@interface ASTMaterializedConnection : NSObject <ASTConnection> {

	char _retryOnNetworkDisconnected;
	char _allowsCellularAccess;
	/*^block*/id _didReceiveResponse;
	NSMutableURLRequest* _request;
	id<ASTConnectionStatusDelegate> _delegate;
	long long _state;
	long long _networkDisconnectedRetryCount;
	unsigned long long _rootOfTrust;
	NSString* _sessionId;
	NSString* _signature;
	ASTIdentity* _identity;
	double _timeout;

}

@property (assign,nonatomic) char allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                         //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) ASTIdentity * identity;                                       //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSString * signature;                                         //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) double timeout;                                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSString * method; 
@property (nonatomic,readonly) NSString * endpoint; 
@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * accept; 
@property (nonatomic,copy) id didReceiveResponse;                                          //@synthesize didReceiveResponse=_didReceiveResponse - In the implementation block
@property (nonatomic,readonly) NSMutableURLRequest * request;                              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<ASTConnectionStatusDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long networkDisconnectedRetryCount;                      //@synthesize networkDisconnectedRetryCount=_networkDisconnectedRetryCount - In the implementation block
@property (assign,nonatomic) char retryOnNetworkDisconnected;                              //@synthesize retryOnNetworkDisconnected=_retryOnNetworkDisconnected - In the implementation block
@property (nonatomic,readonly) unsigned long long rootOfTrust;                             //@synthesize rootOfTrust=_rootOfTrust - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<ASTConnectionStatusDelegate>)delegate;
-(void)setDelegate:(id<ASTConnectionStatusDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(double)timeout;
-(NSString *)endpoint;
-(NSMutableURLRequest *)request;
-(NSString *)method;
-(NSString *)signature;
-(NSString *)contentType;
-(void)setTimeout:(double)arg1 ;
-(ASTIdentity *)identity;
-(void)setSignature:(NSString *)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(void)setAllowsCellularAccess:(char)arg1 ;
-(void)setIdentity:(ASTIdentity *)arg1 ;
-(char)allowsCellularAccess;
-(NSString *)accept;
-(id)didReceiveResponse;
-(void)setDidReceiveResponse:(id)arg1 ;
-(void)addBody:(id)arg1 gzip:(char)arg2 ;
-(char)retryOnNetworkDisconnected;
-(long long)networkDisconnectedRetryCount;
-(void)setNetworkDisconnectedRetryCount:(long long)arg1 ;
-(unsigned long long)rootOfTrust;
-(void)setRetryOnNetworkDisconnected:(char)arg1 ;
-(unsigned long long)_rootOfTrust;
-(id)_acceptLanguage;
@end

