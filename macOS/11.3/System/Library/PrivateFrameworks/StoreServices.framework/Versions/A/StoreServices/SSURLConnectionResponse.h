/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSData, SSMetricsPageEvent, NSHTTPURLResponse, NSString, NSURL;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {

	NSData* _bodyData;
	SSMetricsPageEvent* _metricsPageEvent;
	NSHTTPURLResponse* _urlResponse;

}

@property (nonatomic,readonly) char ssv_isExpiredResponse; 
@property (nonatomic,readonly) NSData * databaseEncoding; 
@property (nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;              //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,readonly) NSString * storeCorrelationID; 
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;                  //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSData * bodyData;                                //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) long long expectedContentLength; 
@property (nonatomic,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) NSString * suggestedFilename; 
@property (nonatomic,readonly) NSString * textEncodingName; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(long long)statusCode;
-(NSString *)textEncodingName;
-(id)allHeaderFields;
-(NSData *)bodyData;
-(long long)expectedContentLength;
-(NSString *)suggestedFilename;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSHTTPURLResponse *)URLResponse;
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(void)setMetricsPageEvent:(SSMetricsPageEvent *)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(char)ssv_isExpiredResponse;
-(id)initWithDatabaseEncoding:(id)arg1 ;
-(NSData *)databaseEncoding;
-(NSString *)storeCorrelationID;
@end

