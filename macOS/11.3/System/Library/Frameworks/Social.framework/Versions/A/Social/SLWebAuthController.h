/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol SLWebClient;
@class ACAccount, ACAccountStore, WKWebView, NSString;

@interface SLWebAuthController : NSViewController <WKNavigationDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/id _presentationBlock;
	/*^block*/id _completion;
	WKWebView* _webView;
	id<SLWebClient> __webClient;
	NSString* __extentionIdentifier;

}

@property (retain) WKWebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (readonly) id<SLWebClient> _webClient;                    //@synthesize _webClient=__webClient - In the implementation block
@property (readonly) NSString * _extentionIdentifier;               //@synthesize _extentionIdentifier=__extentionIdentifier - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(WKWebView *)webView;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<SLWebClient>)_webClient;
-(NSString *)_extentionIdentifier;
-(void)_commonInitializationWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 accountDescription:(id)arg4 youTube:(char)arg5 presentationBlock:(/*^block*/id)arg6 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(id)initialWebRequest;
-(void)_callCompletionWithAuthIdentity:(id)arg1 error:(id)arg2 ;
-(id)_redirectServerHost;
-(void)_getTokensWithCode:(id)arg1 ;
-(void)_webViewWillLoadURL:(id)arg1 ;
-(id)initWithAccountDescription:(id)arg1 presentationBlock:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(/*^block*/id)arg3 ;
-(void)_performRequest:(id)arg1 withHandler:(/*^block*/id)arg2 ;
@end

