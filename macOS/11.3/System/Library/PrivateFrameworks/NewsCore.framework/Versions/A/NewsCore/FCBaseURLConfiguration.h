/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCCoreConfiguration;
@interface FCBaseURLConfiguration : NSObject {

	id<FCCoreConfiguration> _coreConfiguration;

}

@property (nonatomic,retain) id<FCCoreConfiguration> coreConfiguration;              //@synthesize coreConfiguration=_coreConfiguration - In the implementation block
+(id)fairPlayBaseURLForConfiguration:(id)arg1 ;
+(id)CAPIBaseURLForConfiguration:(id)arg1 ;
+(id)notificationsBaseURLForConfiguration:(id)arg1 ;
+(id)newsletterBaseURLForConfiguration:(id)arg1 ;
+(id)overrideCAPIURLString;
+(id)searchBaseURLForConfiguration:(id)arg1 ;
+(char)hasOverrideCAPIURL;
-(id)initWithCoreConfiguration:(id)arg1 ;
-(id)fairPlayBaseURL;
-(id)notificationsBaseURL;
-(id)newsletterBaseURL;
-(id)CAPIBaseURL;
-(id)searchBaseURLForConfiguration;
-(id)baseURL:(/*^block*/id)arg1 fallback:(/*function pointer*/void*)arg2 ;
-(id)baseURLString:(/*^block*/id)arg1 fallback:(/*function pointer*/void*)arg2 ;
-(id<FCCoreConfiguration>)coreConfiguration;
-(void)setCoreConfiguration:(id<FCCoreConfiguration>)arg1 ;
@end
