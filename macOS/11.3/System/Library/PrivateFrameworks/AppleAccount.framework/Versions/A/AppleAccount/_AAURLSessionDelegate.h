/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol NSURLSessionDataDelegateNSURLSessionDelegateNSURLSessionTaskDelegate;
@class NSString;

@interface _AAURLSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	id<NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate>)delegate;
-(void)setDelegate:(id<NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
@end

