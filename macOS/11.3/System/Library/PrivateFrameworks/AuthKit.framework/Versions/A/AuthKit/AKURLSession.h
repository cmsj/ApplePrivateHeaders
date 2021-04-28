/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSObject, NSMutableDictionary, NSString;

@interface AKURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSMutableDictionary* _tasksByIdentifier;
	char __usesAppleIDContext;

}

@property (assign,nonatomic) char _usesAppleIDContext;              //@synthesize _usesAppleIDContext=__usesAppleIDContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createURLSessionUsesAppleIDContext:(char)arg1 ;
+(id)_urlBagCache;
+(id)sharedAnisetteFreeURLSession;
+(void)removeAllCachedResponses;
+(id)sharedURLSession;
+(id)sharedCacheEnabledURLSession;
+(id)sharedCacheReliantAnisetteFreeSession;
+(id)sharedCacheEnabledAnisetteFreeSession;
-(void)set_usesAppleIDContext:(char)arg1 ;
-(id)defaultSessionObjectWithConfiguration:(id)arg1 ;
-(void)_unsafe_completeTask:(id)arg1 withError:(id)arg2 ;
-(char)_usesAppleIDContext;
-(char)_unsafe_retryTaskIfPossible:(id)arg1 ;
-(id)init;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)_URLSession;
-(id)beginDataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_isRecoverableError:(id)arg1 ;
-(id)beginAuthenticationDataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelDataTask:(id)arg1 ;
@end
