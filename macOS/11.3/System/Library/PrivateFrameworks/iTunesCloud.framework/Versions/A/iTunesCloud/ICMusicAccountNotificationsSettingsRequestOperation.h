/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreRequestContext, ICStoreURLRequest, ICMusicAccountNotificationsSettingsResponse, NSDictionary;

@interface ICMusicAccountNotificationsSettingsRequestOperation : ICRequestOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;
	ICMusicAccountNotificationsSettingsResponse* _response;
	long long _requestMethod;
	NSDictionary* _bodyDictionary;

}
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2 ;
-(id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2 andBodyDictionary:(id)arg3 ;
@end

