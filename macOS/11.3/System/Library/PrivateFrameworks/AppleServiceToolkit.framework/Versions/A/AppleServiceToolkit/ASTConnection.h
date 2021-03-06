/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/Versions/A/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableURLRequest;


@protocol ASTConnection <NSObject>
@property (nonatomic,copy) id didReceiveResponse; 
@property (nonatomic,readonly) NSMutableURLRequest * request; 
@property (assign,nonatomic,__weak) id<ASTConnectionStatusDelegate> delegate; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) long long networkDisconnectedRetryCount; 
@property (assign,nonatomic) char retryOnNetworkDisconnected; 
@property (nonatomic,readonly) unsigned long long rootOfTrust; 
@required
-(id<ASTConnectionStatusDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)state;
-(void)setState:(long long)arg1;
-(NSMutableURLRequest *)request;
-(id)didReceiveResponse;
-(void)setDidReceiveResponse:(/*^block*/id)arg1;
-(char)retryOnNetworkDisconnected;
-(long long)networkDisconnectedRetryCount;
-(void)setNetworkDisconnectedRetryCount:(long long)arg1;
-(unsigned long long)rootOfTrust;
-(void)setRetryOnNetworkDisconnected:(char)arg1;

@end

