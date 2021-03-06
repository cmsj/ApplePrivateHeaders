/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, NSString, WKBackForwardList, NSURL, NSArray;

@interface WKBrowsingContextController : NSObject {

	WeakObjCPtr<id<WKBrowsingContextHistoryDelegate>> _historyDelegate;
	RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>>* _page;
	unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver>>* _pageLoadStateObserver;
	WeakObjCPtr<id<WKBrowsingContextLoadDelegate>> _loadDelegate;
	WeakObjCPtr<id<WKBrowsingContextPolicyDelegate>> _policyDelegate;

}

@property (readonly) OpaqueWKPageRef _pageRef; 
@property (readonly) char hasOnlySecureContent; 
@property (assign) unsigned long long paginationMode; 
@property (assign) char paginationBehavesLikeColumns; 
@property (assign) double pageLength; 
@property (assign) double gapBetweenPages; 
@property (assign) char paginationLineGridEnabled; 
@property (readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (nonatomic,readonly) int processIdentifier; 
@property (__weak) id<WKBrowsingContextLoadDelegate> loadDelegate; 
@property (__weak) id<WKBrowsingContextPolicyDelegate> policyDelegate; 
@property (__weak) id<WKBrowsingContextHistoryDelegate> historyDelegate; 
@property (copy) NSString * applicationNameForUserAgent; 
@property (copy) NSString * customUserAgent; 
@property (readonly) char canGoForward; 
@property (readonly) char canGoBack; 
@property (readonly) WKBackForwardList * backForwardList; 
@property (getter=isLoading,readonly) char loading; 
@property (readonly) NSURL * activeURL; 
@property (readonly) NSURL * provisionalURL; 
@property (readonly) NSURL * committedURL; 
@property (readonly) NSURL * unreachableURL; 
@property (readonly) double estimatedProgress; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * certificateChain; 
@property (assign) double textZoom; 
@property (assign) double pageZoom; 
+(void)registerSchemeForCustomProtocol:(id)arg1 ;
+(void)unregisterSchemeForCustomProtocol:(id)arg1 ;
+(id)customSchemes;
+(id)_browsingContextControllerForPageRef:(OpaqueWKPageRef)arg1 ;
-(void)dealloc;
-(WKBrowsingContextHandle *)handle;
-(int)processIdentifier;
-(NSString *)title;
-(unsigned long long)pageCount;
-(void)setPolicyDelegate:(id<WKBrowsingContextPolicyDelegate>)arg1 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)stopLoading;
-(char)isLoading;
-(void)reload;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(NSString *)applicationNameForUserAgent;
-(char)canGoBack;
-(char)canGoForward;
-(void)goBack;
-(void)goForward;
-(id<WKBrowsingContextHistoryDelegate>)historyDelegate;
-(NSURL *)unreachableURL;
-(NSURL *)provisionalURL;
-(void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(void)reloadFromOrigin;
-(id<WKBrowsingContextPolicyDelegate>)policyDelegate;
-(WKBackForwardList *)backForwardList;
-(void)setApplicationNameForUserAgent:(NSString *)arg1 ;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(NSString *)customUserAgent;
-(double)estimatedProgress;
-(void)setHistoryDelegate:(id<WKBrowsingContextHistoryDelegate>)arg1 ;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(char)hasOnlySecureContent;
-(char)_webProcessIsResponsive;
-(void)loadRequest:(id)arg1 userData:(id)arg2 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 ;
-(void)goToBackForwardListItem:(id)arg1 ;
-(NSURL *)activeURL;
-(NSURL *)committedURL;
-(NSArray *)certificateChain;
-(double)textZoom;
-(void)setTextZoom:(double)arg1 ;
-(double)pageZoom;
-(void)setPageZoom:(double)arg1 ;
-(id<WKBrowsingContextLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<WKBrowsingContextLoadDelegate>)arg1 ;
-(id)_initWithPageRef:(OpaqueWKPageRef)arg1 ;
-(OpaqueWKPageRef)_pageRef;
-(void)setPaginationMode:(unsigned long long)arg1 ;
-(unsigned long long)paginationMode;
-(void)setPaginationBehavesLikeColumns:(char)arg1 ;
-(char)paginationBehavesLikeColumns;
-(void)setPageLength:(double)arg1 ;
-(double)pageLength;
-(void)setGapBetweenPages:(double)arg1 ;
-(double)gapBetweenPages;
-(void)setPaginationLineGridEnabled:(char)arg1 ;
-(char)paginationLineGridEnabled;
@end

