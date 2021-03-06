/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol _WKObservablePageState
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (nonatomic,readonly) double estimatedProgress; 
@property (nonatomic,readonly) char hasOnlySecureContent; 
@property (nonatomic,readonly) char _webProcessIsResponsive; 
@property (nonatomic,readonly) NSURL * unreachableURL; 
@property (nonatomic,readonly) SecTrustRef serverTrust; 
@required
-(NSURL *)URL;
-(NSString *)title;
-(SecTrustRef)serverTrust;
-(char)isLoading;
-(NSURL *)unreachableURL;
-(double)estimatedProgress;
-(char)hasOnlySecureContent;
-(char)_webProcessIsResponsive;

@end

