/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSURLHandling.h>

@protocol OS_dispatch_queue;
@class AMSURLSession, NSObject, AMSSigningSecurityService, NSString;

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling> {

	AMSURLSession* session;
	NSObject*<OS_dispatch_queue> _responsePingQueue;
	NSObject*<OS_dispatch_queue> _metricsQueue;
	AMSSigningSecurityService* _signingService;

}

@property (retain) NSObject*<OS_dispatch_queue> responsePingQueue;              //@synthesize responsePingQueue=_responsePingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> metricsQueue;                   //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (readonly) AMSSigningSecurityService * signingService;                //@synthesize signingService=_signingService - In the implementation block
@property (__weak) AMSURLSession * session; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_randomDouble;
+(double)reversePushSamplingPercentageForTask:(id)arg1 ;
-(id)init;
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(char)arg3 error:(id*)arg4 ;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)handleResponse:(id)arg1 task:(id)arg2 ;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 ;
-(char)_URLIsTrustedFromRequest:(id)arg1 bag:(id)arg2 ;
-(char)_shouldEnableReversePushForTask:(id)arg1 ;
-(void)_pingURL:(id)arg1 session:(id)arg2 bag:(id)arg3 ;
-(void)reportMetricsForTaskInfo:(id)arg1 decodedObject:(id)arg2 ;
-(void)_setResponseCookiesFromResponse:(id)arg1 taskInfo:(id)arg2 ;
-(AMSSigningSecurityService *)signingService;
-(NSObject*<OS_dispatch_queue>)responsePingQueue;
-(id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3 ;
-(void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3 ;
-(void)setResponsePingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

