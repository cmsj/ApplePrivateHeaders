/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/Versions/A/NPTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_activity, OS_dispatch_source;
@class NSURLSession, NSDate, NSMutableURLRequest, NSObject, NSMutableDictionary, NSMutableArray, NSData, NSError, NPTMetricResult, NSString;

@interface NPTUpload : NSObject <NSSecureCoding, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying> {

	NSURLSession* uploadSession;
	NSDate* initialTime;
	unsigned long long maxConcurrentStreams;
	unsigned long long processedStreamEndCount;
	NSMutableURLRequest* request;
	NSObject*<OS_nw_activity> activityParent;
	NSObject*<OS_nw_activity> uploadActivity;
	NSMutableDictionary* taskDict;
	NSObject*<OS_dispatch_source> timeoutTimer;
	NSMutableArray* buffer;
	double recentBufferTime;
	NSDate* endTimeAggregate;
	char smartUpload;
	unsigned long long timedUploadLength;
	NSData* multipartData;
	double stableSpeedToLog;
	NSError* uploadError;
	char stopAtFileSizeEnabled;
	id _delegate;
	NPTMetricResult* _results;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                            //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NPTMetricResult * results;              //@synthesize results=_results - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NPTMetricResult *)results;
-(void)setResults:(NPTMetricResult *)arg1 ;
-(void)cancel;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)cleanUp;
-(void)setupTimer;
-(id)createRandomDataOfSize:(unsigned long long)arg1 ;
-(id)createHTTPBodyWithBoundary:(id)arg1 usingData:(id)arg2 withMimeType:(id)arg3 withFileName:(id)arg4 ;
-(char)inTimedMode;
-(id)setupNewUploadTask:(id)arg1 suspensionThresholdEnum:(int)arg2 ;
-(void)startTasks;
-(void)cancelDispatchTimerAndSession;
-(void)cancelDispatchTimer;
-(id)realTimeSpeedMetricOverall;
-(double)checkAndReturnSpeedStablized:(id)arg1 ;
-(char)isTimerCancelledError:(id)arg1 ;
-(int)determineSuspensionThreshold;
-(void)kickOffNewUpload:(id)arg1 suspensionThresholdEnum:(int)arg2 ;
-(char)isLastTask;
-(id)aggregateResults;
-(double)minNonZeroValue:(double)arg1 comparisonValue:(double)arg2 ;
-(id)initWithNetworkActivityParent:(id)arg1 concurrentStreams:(unsigned long long)arg2 timedUploadLength:(unsigned long long)arg3 endWhenStable:(char)arg4 stopAtFileSize:(char)arg5 ;
-(void)startUploadWithSize:(int)arg1 toURL:(id)arg2 overInterfaceType:(int)arg3 completion:(/*^block*/id)arg4 ;
-(id)createTempFileWithData:(id)arg1 named:(id)arg2 ;
-(void)removeTempFileNamed:(id)arg1 ;
-(char)finishedAllTasks;
@end

