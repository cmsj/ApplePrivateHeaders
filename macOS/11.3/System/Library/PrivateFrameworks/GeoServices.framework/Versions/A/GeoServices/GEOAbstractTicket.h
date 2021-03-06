/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapServiceTraits, NSDictionary, GEODataRequestThrottlerToken;

@interface GEOAbstractTicket : NSObject {

	GEOMapServiceTraits* _traits;
	unsigned long long _cachePolicy;
	NSDictionary* _responseUserInfo;
	char _cancelled;
	GEODataRequestThrottlerToken* _throttlerToken;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) unsigned long long cachePolicy;                 //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo;              //@synthesize responseUserInfo=_responseUserInfo - In the implementation block
@property (getter=isCancelled,readonly) char cancelled; 
-(id)description;
-(id)init;
-(void)cancel;
-(char)isCancelled;
-(GEOMapServiceTraits *)traits;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)setThrottlerToken:(id)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(unsigned long long)cachePolicy;
-(NSDictionary *)responseUserInfo;
@end

