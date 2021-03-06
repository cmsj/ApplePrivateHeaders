/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreURLRequest, ICURLSession, ICStorePlatformRequest;

@interface ICStorePlatformRequestOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreURLRequest* _activeURLRequest;
	ICStorePlatformRequestOperation* _strongSelf;
	ICURLSession* _urlSession;
	ICStorePlatformRequest* _platformRequest;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICStorePlatformRequest * platformRequest;              //@synthesize platformRequest=_platformRequest - In the implementation block
@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(id)responseHandler;
-(id)_requestContext;
-(void)setResponseHandler:(id)arg1 ;
-(id)initWithPlatformRequest:(id)arg1 ;
-(id)initWithPlatformRequest:(id)arg1 usingURLSession:(id)arg2 ;
-(void)_enqueueDataRequest:(id)arg1 ;
-(void)_executePersonalized;
-(void)_executeUnpersonalized;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(id)_URLRequestWithBaseURL:(id)arg1 ;
-(ICStorePlatformRequest *)platformRequest;
@end

