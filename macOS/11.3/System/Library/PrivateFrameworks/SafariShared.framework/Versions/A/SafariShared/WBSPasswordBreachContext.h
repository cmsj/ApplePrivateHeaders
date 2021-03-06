/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSPasswordBreachConfiguration, WBSPasswordBreachCryptographicOperations, WBSPasswordBreachStore;

@interface WBSPasswordBreachContext : NSObject {

	WBSPasswordBreachConfiguration* _configuration;
	WBSPasswordBreachCryptographicOperations* _cryptographicOperations;
	WBSPasswordBreachStore* _store;

}

@property (nonatomic,readonly) WBSPasswordBreachConfiguration * configuration;                                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) WBSPasswordBreachCryptographicOperations * cryptographicOperations;              //@synthesize cryptographicOperations=_cryptographicOperations - In the implementation block
@property (nonatomic,readonly) WBSPasswordBreachStore * store;                                                  //@synthesize store=_store - In the implementation block
-(WBSPasswordBreachStore *)store;
-(WBSPasswordBreachConfiguration *)configuration;
-(WBSPasswordBreachCryptographicOperations *)cryptographicOperations;
-(id)initWithConfiguration:(id)arg1 store:(id)arg2 ;
@end

