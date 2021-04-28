/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSMarketingItemTaskURLBuilder : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
-(id)urlWithServiceType:(id)arg1 placement:(id)arg2 bag:(id)arg3 hydrateRelatedContents:(char)arg4 additionalParameters:(id)arg5 ;
-(id)_realmOverridesFromBag:(id)arg1 ;
-(id)_formattedURLPathWithBag:(id)arg1 ;
-(id)_languageTagFromBag:(id)arg1 fallback:(id)arg2 ;
-(id)_additionalQueryItems;
-(id)_stringForKey:(id)arg1 fromBag:(id)arg2 ;
-(id)_urlPathFromBag:(id)arg1 ;
-(id)_countryCodeFromBag:(id)arg1 ;
@end
