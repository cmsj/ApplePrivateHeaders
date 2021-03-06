/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCNetworkOperation.h>

@class NSURL, NSString, NSDictionary, FCNetworkBehaviorMonitor, NSData, NSHTTPURLResponse, NSError;

@interface FCAssetDownloadOperation : FCNetworkOperation {

	int _networkEventType;
	NSURL* _URL;
	NSString* _loggingKey;
	long long _downloadDestination;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	/*^block*/id _fileDownloadCompletionHandler;
	/*^block*/id _dataDownloadCompletionHandler;
	NSURL* _downloadedFileURL;
	NSData* _downloadedData;
	NSString* _requestUUID;
	double _taskStartTime;
	NSDictionary* _timingData;
	NSString* _responseMIMEType;
	NSHTTPURLResponse* _httpResponse;
	unsigned long long _responseSize;
	NSError* _error;

}
-(id)init;
-(void)performOperation;
-(unsigned long long)maxRetries;
-(void)prepareOperation;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)throttleGroup;
@end

