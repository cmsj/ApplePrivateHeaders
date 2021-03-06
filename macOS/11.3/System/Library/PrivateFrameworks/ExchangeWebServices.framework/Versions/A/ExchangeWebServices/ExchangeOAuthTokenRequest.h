/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ExchangeOAuthTokenRequest : NSObject
+(id)_urlRequestForTokenRequestURI:(id)arg1 query:(id)arg2 ;
+(id)urlRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 scope:(id)arg3 redirectURI:(id)arg4 authCode:(id)arg5 codeVerifier:(id)arg6 ;
+(id)urlRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 resource:(id)arg3 redirectURI:(id)arg4 authCode:(id)arg5 ;
+(id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 scope:(id)arg3 refreshToken:(id)arg4 ;
+(id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 resource:(id)arg3 refreshToken:(id)arg4 ;
+(id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 scope:(id)arg3 username:(id)arg4 password:(id)arg5 ;
@end

