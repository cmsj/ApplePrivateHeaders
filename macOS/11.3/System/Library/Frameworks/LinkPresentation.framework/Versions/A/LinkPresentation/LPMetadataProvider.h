/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/LPMetadataProviderSpecializationDelegate.h>

@protocol OS_dispatch_group;
@class WKWebView, NSURL, NSTimer, LPEvent, LPLinkMetadata, NSObject, LPFetcherGroup, LPAnimatedImageTranscoder, NSMutableArray, LPMetadataProviderSpecialization, NSString;

@interface LPMetadataProvider : NSObject <WKNavigationDelegate, LPMetadataProviderSpecializationDelegate> {

	unsigned _loggingID;
	WKWebView* _webView;
	NSURL* _URL;
	NSURL* _originalURL;
	NSTimer* _watchdog;
	LPEvent* _event;
	LPEvent* _mainResourceLoadEvent;
	LPEvent* _webProcessLaunchEvent;
	LPLinkMetadata* _metadata;
	char _complete;
	char _fetchingFromExistingWebView;
	char _hasStartedFetching;
	char _hasEverStartedFetchingMetadataFromWebView;
	char _timedOut;
	char _useSpecializedProviders;
	unsigned long long _allowedSpecializedProviders;
	NSObject*<OS_dispatch_group> _subresourceFetchGroup;
	LPFetcherGroup* _iconFetcherGroup;
	LPAnimatedImageTranscoder* _imageTranscoder;
	NSMutableArray* _pendingFetchers;
	long long _specializationState;
	LPMetadataProviderSpecialization* _specializedMetadataProvider;
	char _shouldFetchSubresources;
	char _cancelled;
	double _timeout;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign) char cancelled;                                                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) LPEvent * _event;                                          //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) char useSpecializedProviders;                                //@synthesize useSpecializedProviders=_useSpecializedProviders - In the implementation block
@property (assign,nonatomic) char fetchSubresources; 
@property (assign,nonatomic) unsigned long long allowedSpecializedProviders;              //@synthesize allowedSpecializedProviders=_allowedSpecializedProviders - In the implementation block
@property (assign,nonatomic) char shouldFetchSubresources;                                //@synthesize shouldFetchSubresources=_shouldFetchSubresources - In the implementation block
@property (assign,nonatomic) double timeout;                                              //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_callbackQueue;
+(id)_defaultUserAgent;
+(id)requestMetadataForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_copyDefaultWebViewConfiguration;
+(id)_incompleteMetadataRequests;
+(id)requestMetadataForWebView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(double)timeout;
-(void)cancel;
-(LPEvent *)_event;
-(char)cancelled;
-(void)setTimeout:(double)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setCancelled:(char)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)metadataProviderSpecializationDidFail:(id)arg1 ;
-(void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2 ;
-(void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
-(void)startFetchingMetadataForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startFetchingMetadataForWebView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_startWatchdogTimer;
-(void)_willStartFetchingMetadata;
-(char)_switchToSpecializationIfPossibleForURL:(id)arg1 ;
-(void)_internalStartFetchingMetadataFromURL;
-(void)_fetchImplicitIcons;
-(void)_fetchMetadataFromWebView;
-(void)_fetchSubresources;
-(void)_cancelDueToTimeout;
-(char)_switchToSpecializationIfPossibleForMIMEType:(id)arg1 URL:(id)arg2 hasLoadedResource:(char)arg3 ;
-(void)_fetchedMetadata:(id)arg1 ;
-(void)_stopWatchdogTimer;
-(void)_setMetadata:(id)arg1 onlyUpgradeFields:(char)arg2 ;
-(char)_switchToSpecializationIfPossibleForMetadata:(id)arg1 URL:(id)arg2 ;
-(void)_redistinguishImagesAndIcons;
-(void)_simplifyTitle;
-(void)_completedWithError:(id)arg1 ;
-(id)subresourceFetcherConfiguration;
-(void)_postProcessResolvedMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_generateSpecializationIfPossibleForCompleteMetadata:(id)arg1 URL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)metadataProviderSpecialization:(id)arg1 didFetchPreliminaryMetadata:(id)arg2 ;
-(id)_startFetchingMetadataForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_startFetchingMetadataForWebView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startFetchingSubresourcesForPartialMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFetchSubresources:(char)arg1 ;
-(char)fetchSubresources;
-(unsigned long long)allowedSpecializedProviders;
-(void)setAllowedSpecializedProviders:(unsigned long long)arg1 ;
-(char)shouldFetchSubresources;
-(void)setShouldFetchSubresources:(char)arg1 ;
-(char)useSpecializedProviders;
-(void)setUseSpecializedProviders:(char)arg1 ;
@end

