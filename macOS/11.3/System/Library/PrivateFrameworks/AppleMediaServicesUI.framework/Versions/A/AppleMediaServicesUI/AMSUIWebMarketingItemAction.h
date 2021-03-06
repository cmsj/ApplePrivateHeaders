/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUIWebAction.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class ACAccount, NSString, NSDictionary;

@interface AMSUIWebMarketingItemAction : AMSUIWebAction <AMSUIWebActionRunnable> {

	ACAccount* _account;
	NSString* _clientIdentifier;
	NSDictionary* _contextInfo;
	NSString* _clientVersion;
	NSString* _placement;
	NSString* _serviceType;

}

@property (readonly) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (readonly) NSString * clientIdentifier;                   //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) NSDictionary * contextInfo;                    //@synthesize contextInfo=_contextInfo - In the implementation block
@property (readonly) NSString * clientVersion;                      //@synthesize clientVersion=_clientVersion - In the implementation block
@property (readonly) NSString * placement;                          //@synthesize placement=_placement - In the implementation block
@property (readonly) NSString * serviceType;                        //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)contextInfo;
-(NSString *)serviceType;
-(ACAccount *)account;
-(NSString *)clientIdentifier;
-(NSString *)clientVersion;
-(NSString *)placement;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

