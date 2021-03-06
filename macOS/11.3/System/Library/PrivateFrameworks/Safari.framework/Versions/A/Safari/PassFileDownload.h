/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/NSURLDownloadDelegate.h>

@protocol PassFileDownloadDelegate;
@class NSURL, NSString;

@interface PassFileDownload : NSObject <NSURLDownloadDelegate> {

	NSURL* _tempFileURL;
	char _wasCanceled;
	id<PassFileDownloadDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PassFileDownloadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PassFileDownloadDelegate>)delegate;
-(void)setDelegate:(id<PassFileDownloadDelegate>)arg1 ;
-(void)_reportError:(id)arg1 ;
-(String*)wkDownload:(id)arg1 decideDestinationWithSuggestedFilename:(const String*)arg2 allowOverwrite:(BOOL*)arg3 ;
-(void)wkDownloadDidFinish:(id)arg1 ;
-(void)wkDownload:(id)arg1 didFailWithError:(const Error*)arg2 ;
-(void)wkDownloadDidCancel:(id)arg1 ;
-(void)wkDownloadProcessDidCrash:(id)arg1 ;
-(void)openPassFileDownload:(id)arg1 ;
-(void)_deleteTempFile;
@end

