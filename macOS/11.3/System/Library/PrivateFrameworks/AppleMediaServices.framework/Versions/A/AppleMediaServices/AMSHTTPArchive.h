/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface AMSHTTPArchive : NSObject {

	char _compressed;
	NSData* _backingJSONData;
	NSData* _JSONData;
	NSString* _urlString;

}

@property (retain) NSData * backingJSONData;                  //@synthesize backingJSONData=_backingJSONData - In the implementation block
@property (getter=isCompressed) char compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (readonly) NSData * JSONData;                       //@synthesize JSONData=_JSONData - In the implementation block
@property (retain) NSString * urlString;                      //@synthesize urlString=_urlString - In the implementation block
+(id)directory;
+(id)merge:(id)arg1 ;
+(id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2 ;
+(id)_createJSONObjectForEntries:(id)arg1 ;
+(double)_timeIntervalFromFilename:(id)arg1 ;
+(id)_generateCommentsStringForMetrics:(id)arg1 ;
+(id)_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2 ;
+(id)_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2 ;
+(id)_dateFormatterForTimeZone:(id)arg1 ;
+(id)_generateHeadersArrayForHTTPHeaders:(id)arg1 ;
+(id)_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2 ;
+(void)removeHTTPArchiveFilesOlderThanDate:(id)arg1 ;
-(char)isCompressed;
-(void)setCompressed:(char)arg1 ;
-(id)initWithJSONObject:(id)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)logHARData;
-(NSData *)backingJSONData;
-(id)initWithURLTaskInfo:(id)arg1 ;
-(id)initWithMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
-(char)writeToDiskWithError:(id*)arg1 compressed:(char)arg2 ;
-(void)setBackingJSONData:(NSData *)arg1 ;
-(NSData *)JSONData;
@end

