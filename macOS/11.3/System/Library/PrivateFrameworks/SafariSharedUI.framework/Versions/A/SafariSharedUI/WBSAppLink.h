/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class LSAppLink, NSURL, LSApplicationProxy;

@interface WBSAppLink : NSObject {

	os_unfair_lock_s _ivarLock;
	char _didResolveAppLink;
	LSAppLink* _cachedAppLink;
	NSURL* _url;
	LSApplicationProxy* _synchronousTargetApplicationProxy;

}

@property (nonatomic,readonly) NSURL * url;                                                         //@synthesize url=_url - In the implementation block
@property (getter=isAppleNewsLink,nonatomic,readonly) char isAppleNewsLink; 
@property (nonatomic,readonly) LSApplicationProxy * synchronousTargetApplicationProxy;              //@synthesize synchronousTargetApplicationProxy=_synchronousTargetApplicationProxy - In the implementation block
+(void)clearSavedSettings;
+(void)setShouldOfferToOpenAppleNewsArticlesInNewsApp:(char)arg1 ;
+(id)_newsDataContainerPath;
+(char)shouldOfferToOpenAppleNewsArticlesInNewsApp;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)disable;
-(void)openExternally;
-(void)getAppLinkTargetApplicationBundleIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)decideOpenStrategyWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isAppleNewsLink;
-(void)getAppLinkAttributesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_synchronouslyFetchAppLinkWithError:(id*)arg1 ;
-(char)_isApplicationProxyAppleNews:(id)arg1 ;
-(long long)_openStrategyForAppLink:(id)arg1 ;
-(void)_getAppLinkWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_appLink:(id)arg1 getAppLinkLabel:(id*)arg2 name:(id*)arg3 icon:(id*)arg4 ;
-(void)openExternallyWithWebBrowserState:(id)arg1 referrerURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)disableWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)synchronouslyDecideOpenStrategy;
-(void)getAppLinkLabel:(id*)arg1 name:(id*)arg2 icon:(id*)arg3 ;
-(LSApplicationProxy *)synchronousTargetApplicationProxy;
@end
