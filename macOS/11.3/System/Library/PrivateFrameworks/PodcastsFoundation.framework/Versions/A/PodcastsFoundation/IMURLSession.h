/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSObject, NSString;

@interface IMURLSession : NSObject <NSURLSessionDataDelegate> {

	NSURLSession* _session;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	char _requireIDSHost;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
+(id)sharedSessionRequiringIDSHost;
+(id)sessionWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(char)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(char)arg3 ;
-(void)performRequest:(id)arg1 completionBlockWithTimingData:(/*^block*/id)arg2 ;
-(void)performRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
