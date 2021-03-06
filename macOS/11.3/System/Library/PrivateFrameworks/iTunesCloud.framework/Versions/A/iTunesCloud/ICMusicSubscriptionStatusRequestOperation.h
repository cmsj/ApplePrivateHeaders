/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation {

	char _allowsFuseHeaderEnrichment;
	ICMusicSubscriptionStatusRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICMusicSubscriptionStatusRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) char allowsFuseHeaderEnrichment;                                //@synthesize allowsFuseHeaderEnrichment=_allowsFuseHeaderEnrichment - In the implementation block
@property (nonatomic,copy) id responseHandler;                                               //@synthesize responseHandler=_responseHandler - In the implementation block
-(ICMusicSubscriptionStatusRequest *)request;
-(void)execute;
-(id)responseHandler;
-(id)initWithRequest:(id)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2 ;
-(char)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1 ;
-(char)allowsFuseHeaderEnrichment;
-(void)setAllowsFuseHeaderEnrichment:(char)arg1 ;
@end

