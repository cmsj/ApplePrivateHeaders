/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/Versions/A/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteConfiguration/RCOperation.h>

@protocol OS_dispatch_queue;
@class NSURL, NSData, NSString, NSDictionary, NSObject, NSURLSessionTask, NSHTTPURLResponse, NSError, NSNumber;

@interface RCURLFetchOperation : RCOperation {

	NSURL* _URL;
	NSData* _HTTPBody;
	NSString* _HTTPMethod;
	NSString* _loggingKey;
	NSDictionary* _additionalRequestHTTPHeaders;
	/*^block*/id _configurationCompletionHandler;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSURLSessionTask* _requestTask;
	NSString* _urlString;
	NSData* _responseData;
	NSString* _requestUUID;
	double _taskStartTime;
	NSDictionary* _timingData;
	NSString* _responseMIMEType;
	NSHTTPURLResponse* _httpResponse;
	unsigned long long _responseSize;
	NSError* _error;
	NSNumber* _maxAge;

}

@property (retain) NSURLSessionTask * requestTask;                                      //@synthesize requestTask=_requestTask - In the implementation block
@property (nonatomic,retain) NSString * urlString;                                      //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSData * responseData;                                     //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSString * requestUUID;                                    //@synthesize requestUUID=_requestUUID - In the implementation block
@property (assign,nonatomic) double taskStartTime;                                      //@synthesize taskStartTime=_taskStartTime - In the implementation block
@property (nonatomic,retain) NSDictionary * timingData;                                 //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) NSString * responseMIMEType;                               //@synthesize responseMIMEType=_responseMIMEType - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * httpResponse;                          //@synthesize httpResponse=_httpResponse - In the implementation block
@property (assign,nonatomic) unsigned long long responseSize;                           //@synthesize responseSize=_responseSize - In the implementation block
@property (nonatomic,retain) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSNumber * maxAge;                                         //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSData * HTTPBody;                                         //@synthesize HTTPBody=_HTTPBody - In the implementation block
@property (nonatomic,retain) NSString * HTTPMethod;                                     //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (nonatomic,copy) NSString * loggingKey;                                       //@synthesize loggingKey=_loggingKey - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                 //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,copy) id configurationCompletionHandler;                           //@synthesize configurationCompletionHandler=_configurationCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)sharedURLSession;
-(NSError *)error;
-(NSURL *)URL;
-(void)setError:(NSError *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setRequestUUID:(NSString *)arg1 ;
-(NSString *)requestUUID;
-(NSHTTPURLResponse *)httpResponse;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(void)performOperation;
-(NSData *)HTTPBody;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)HTTPMethod;
-(NSNumber *)maxAge;
-(void)setMaxAge:(NSNumber *)arg1 ;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(unsigned long long)responseSize;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(NSDictionary *)timingData;
-(id)configurationCompletionHandler;
-(void)setRelativePriority:(long long)arg1 ;
-(void)setLoggingKey:(NSString *)arg1 ;
-(void)setConfigurationCompletionHandler:(id)arg1 ;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)resetForRetry;
-(NSString *)loggingKey;
-(NSURLSessionTask *)requestTask;
-(void)setResponseMIMEType:(NSString *)arg1 ;
-(void)setRequestTask:(NSURLSessionTask *)arg1 ;
-(void)setTaskStartTime:(double)arg1 ;
-(double)taskStartTime;
-(NSString *)responseMIMEType;
@end

