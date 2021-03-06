/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/Versions/A/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NPTunnelFlow.h>

@class NSMutableData, NSURL, NSNumber;

@interface NPTunnelFlowHTTP : NPTunnelFlow {

	char _receivedHeaders;
	char _responseSuccess;
	NSMutableData* _responseData;
	NSURL* _url;
	/*^block*/id _postCompletionHandler;
	NSNumber* _responseContentLength;

}

@property (copy) id postCompletionHandler;                        //@synthesize postCompletionHandler=_postCompletionHandler - In the implementation block
@property (assign) char receivedHeaders;                          //@synthesize receivedHeaders=_receivedHeaders - In the implementation block
@property (retain) NSNumber * responseContentLength;              //@synthesize responseContentLength=_responseContentLength - In the implementation block
@property (assign) char responseSuccess;                          //@synthesize responseSuccess=_responseSuccess - In the implementation block
@property (retain) NSMutableData * responseData;                  //@synthesize responseData=_responseData - In the implementation block
@property (retain) NSURL * url;                                   //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(char)responseSuccess;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(void)sendDataToClient:(id)arg1 fromTunnel:(char)arg2 ;
-(id)postCompletionHandler;
-(void)setPostCompletionHandler:(id)arg1 ;
-(char)receivedHeaders;
-(void)setResponseSuccess:(char)arg1 ;
-(void)setResponseContentLength:(NSNumber *)arg1 ;
-(void)setReceivedHeaders:(char)arg1 ;
-(NSNumber *)responseContentLength;
-(id)initWithTunnel:(id)arg1 URL:(id)arg2 extraFlowProperties:(id)arg3 ;
-(void)postData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)closeClientFlowWithError:(int)arg1 ;
-(char)isClientFlowClosed;
@end

