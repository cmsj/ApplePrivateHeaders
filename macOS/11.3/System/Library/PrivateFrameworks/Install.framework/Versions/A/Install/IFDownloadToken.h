/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURL, NSURLResponse, NSString;

@interface IFDownloadToken : NSObject <NSURLConnectionDelegate> {

	NSURL* sourceURL;
	NSURL* finalURL;
	double downloadProgress;
	int status;
	NSURLResponse* currentDownloadResponse;
	unsigned long long expectedSize;
	unsigned long long downloadedSize;
	id progressDelegate;
	char sourceURLHash[20];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)status;
-(id)finalURL;
-(void)setFinalURL:(id)arg1 ;
-(void)setDownloadProgress:(double)arg1 ;
-(double)downloadProgress;
-(void)setStatus:(int)arg1 ;
-(id)sourceURL;
-(void)downloadDidBegin:(id)arg1 ;
-(id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2 ;
-(char)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)download:(id)arg1 didCreateDestination:(id)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(void)setProgressDelegate:(id)arg1 ;
-(unsigned long long)expectedSize;
-(id)initWithURL:(id)arg1 expectedSize:(unsigned long long)arg2 ;
-(const char*)sourceURLHash;
-(unsigned long long)downloadedSize;
@end

