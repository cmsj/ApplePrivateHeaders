/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _WKDownloadDelegate <NSObject>
@optional
-(void)_downloadDidStart:(id)arg1;
-(void)_download:(id)arg1 didReceiveResponse:(id)arg2;
-(void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
-(void)_download:(id)arg1 didWriteData:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;
-(id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(char*)arg3;
-(void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_downloadDidFinish:(id)arg1;
-(void)_download:(id)arg1 didFailWithError:(id)arg2;
-(void)_downloadDidCancel:(id)arg1;
-(void)_download:(id)arg1 didReceiveServerRedirectToURL:(id)arg2;
-(void)_download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(char)_download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
-(void)_download:(id)arg1 didCreateDestination:(id)arg2;
-(void)_downloadProcessDidCrash:(id)arg1;

@end

