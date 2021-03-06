/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSURL, NSDictionary, NSArray;

@interface CKLTrafficLogMessage : NSObject {

	NSString* _uuid;
	NSDate* _requestTime;
	NSString* _requestMethod;
	NSURL* _requestURL;
	NSDictionary* _requestHeaders;
	long long _bodyStreamResetCount;
	NSArray* _requestObjects;
	long long _responseStatus;
	NSDate* _responseTime;
	NSDictionary* _responseHeaders;
	NSArray* _responseObjects;

}

@property (nonatomic,retain) NSString * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDate * requestTime;                          //@synthesize requestTime=_requestTime - In the implementation block
@property (nonatomic,retain) NSString * requestMethod;                      //@synthesize requestMethod=_requestMethod - In the implementation block
@property (nonatomic,retain) NSURL * requestURL;                            //@synthesize requestURL=_requestURL - In the implementation block
@property (nonatomic,retain) NSDictionary * requestHeaders;                 //@synthesize requestHeaders=_requestHeaders - In the implementation block
@property (assign,nonatomic) long long bodyStreamResetCount;                //@synthesize bodyStreamResetCount=_bodyStreamResetCount - In the implementation block
@property (nonatomic,retain) NSArray * requestObjects;                      //@synthesize requestObjects=_requestObjects - In the implementation block
@property (assign,nonatomic) long long responseStatus;                      //@synthesize responseStatus=_responseStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHeaders;                //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,retain) NSArray * responseObjects;                     //@synthesize responseObjects=_responseObjects - In the implementation block
@property (nonatomic,readonly) NSDate * responseTime;                       //@synthesize responseTime=_responseTime - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
-(id)description;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)containerIdentifier;
-(id)CKPropertiesDescription;
-(NSDate *)responseTime;
-(void)setRequestTime:(NSDate *)arg1 ;
-(NSDate *)requestTime;
-(NSString *)requestMethod;
-(NSDictionary *)responseHeaders;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSURL *)requestURL;
-(void)setResponseObjects:(NSArray *)arg1 ;
-(long long)responseStatus;
-(void)setResponseStatus:(long long)arg1 ;
-(NSDictionary *)requestHeaders;
-(void)setRequestHeaders:(NSDictionary *)arg1 ;
-(id)_initWithUUID:(id)arg1 requestMetadata:(id)arg2 requestObjects:(id)arg3 bodyStreamResetCount:(long long)arg4 responseMetadata:(id)arg5 responseObjects:(id)arg6 ;
-(long long)bodyStreamResetCount;
-(NSArray *)requestObjects;
-(NSArray *)responseObjects;
-(void)setRequestMethod:(NSString *)arg1 ;
-(void)setBodyStreamResetCount:(long long)arg1 ;
-(void)setRequestObjects:(NSArray *)arg1 ;
@end

