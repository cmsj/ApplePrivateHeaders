/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/Versions/A/OSAnalyticsPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDictionary, NSError, NSArray, NSString, NSURL;

@interface OSASubmitter : NSObject {

	long long _responseCode;
	NSData* _responseData;
	NSDictionary* _responseHeaders;
	NSError* _responseError;
	char _dryRun;
	unsigned _jobCount;
	char _allowUnsignedBlobs;
	NSArray* _internalWhitelist;
	NSString* _connectionType;
	NSDictionary* _launchInfo;

}

@property (assign) char allowUnsignedBlobs;                //@synthesize allowUnsignedBlobs=_allowUnsignedBlobs - In the implementation block
@property (copy) NSArray * internalWhitelist;              //@synthesize internalWhitelist=_internalWhitelist - In the implementation block
@property (copy) NSString * connectionType;                //@synthesize connectionType=_connectionType - In the implementation block
@property (readonly) NSURL * submissionURL; 
@property (copy) NSDictionary * launchInfo;                //@synthesize launchInfo=_launchInfo - In the implementation block
+(id)extractAuthenticatedBlob:(id)arg1 error:(id*)arg2 ;
-(id)locateLog:(id)arg1 forRouting:(id)arg2 usingConfig:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)processJob:(id)arg1 forRouting:(id)arg2 including:(id)arg3 usingConfig:(id)arg4 taskings:(id)arg5 summarize:(id)arg6 ;
-(void)prefaceSubmission:(id)arg1 withData:(id)arg2 usingArchive:(id)arg3 andHeaders:(id)arg4 ;
-(void)postContent:(id)arg1 withHeaders:(id)arg2 ;
-(id)processSubmissionJobs:(id)arg1 usingConfig:(id)arg2 summarize:(id)arg3 ;
-(id)primarySubmissionPaths;
-(char)cheaterTaskingWithSets:(id)arg1 usingConfig:(id)arg2 resultsCallback:(/*^block*/id)arg3 ;
-(char)allowUnsignedBlobs;
-(void)setAllowUnsignedBlobs:(char)arg1 ;
-(NSArray *)internalWhitelist;
-(void)setInternalWhitelist:(NSArray *)arg1 ;
-(id)init;
-(NSString *)connectionType;
-(NSDictionary *)launchInfo;
-(void)setLaunchInfo:(NSDictionary *)arg1 ;
-(void)abort;
-(void)setConnectionType:(NSString *)arg1 ;
-(char)submitLogsUsingPolicy:(id)arg1 resultsCallback:(/*^block*/id)arg2 ;
-(NSURL *)submissionURL;
-(void)prepConfig:(id)arg1 ;
-(id)applyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4 ;
@end

