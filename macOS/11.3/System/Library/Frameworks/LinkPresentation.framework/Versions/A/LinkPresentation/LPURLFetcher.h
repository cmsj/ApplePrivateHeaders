/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPFetcher.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class WKWebView, NSURL, NSString;

@interface LPURLFetcher : LPFetcher <WKNavigationDelegate> {

	/*^block*/id _completionHandler;
	WKWebView* _webView;
	NSURL* _URL;
	Class _responseClass;

}

@property (nonatomic,retain) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) Class responseClass;                   //@synthesize responseClass=_responseClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)cancel;
-(Class)responseClass;
-(void)setResponseClass:(Class)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)fetchWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
-(void)_completedWithData:(id)arg1 MIMEType:(id)arg2 error:(id)arg3 ;
@end

