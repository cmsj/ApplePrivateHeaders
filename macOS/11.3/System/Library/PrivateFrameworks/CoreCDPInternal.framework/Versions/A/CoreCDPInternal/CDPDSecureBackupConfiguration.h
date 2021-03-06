/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPContext, NSDictionary, NSURLSession;

@interface CDPDSecureBackupConfiguration : NSObject {

	CDPContext* _context;
	NSDictionary* _configurationURLs;
	NSDictionary* _escrowConfigurationURLs;
	NSURLSession* _session;

}
+(id)configurationWithContext:(id)arg1 ;
+(id)configurationWithContext:(id)arg1 andSession:(id)arg2 ;
+(id)_configurationRequestWithURLString:(id)arg1 ;
-(id)accountInfoFetchSetupDictionary;
-(id)escrowAuthInfo;
-(id)_iCloudEnvironment;
-(id)_escrowProxyURL;
-(id)_escrowConfigurationBag;
-(id)_setupConfigurationURLs;
-(id)_escrowConfigurationBagFull;
-(id)_fetchConfigurationDictionary;
-(id)_fetchEscrowConfigurationBag;
-(id)_escrowProxyConfigurationURL;
-(id)_escrowProxyConfigurationURLRequest;
-(id)_fetchConfigurationWithRequest:(id)arg1 ;
-(id)_configurationInfoURLRequest;
@end

