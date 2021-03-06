/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCAppleAccount.h>
@class NSString, ACAccount, NSArray;


@protocol FCAppleAccount <NSObject>
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSString * userStoreFrontID; 
@property (nonatomic,readonly) NSString * contentStoreFrontID; 
@property (nonatomic,readonly) NSString * primaryLanguageCode; 
@property (nonatomic,readonly) long long supportedContentLanguage; 
@property (nonatomic,readonly) char isContentStoreFrontSupported; 
@property (nonatomic,readonly) char isSignedInStoreFrontSupported; 
@property (nonatomic,readonly) NSString * supportedContentStoreFrontID; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) char privateDataSyncingEnabled; 
@property (getter=isUserSignedInToiCloud,nonatomic,readonly) char userSignedInToiCloud; 
@property (nonatomic,readonly) NSString * endpointConnectionClientID; 
@property (nonatomic,readonly) ACAccount * activeiTunesAccount; 
@property (nonatomic,readonly) NSString * primaryEmailAddress; 
@property (nonatomic,readonly) NSString * appStoreEmailAddress; 
@property (nonatomic,readonly) NSArray * allEmailAddresses; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(id)iTunesAccountDSID;
-(NSString *)DSID;
-(NSString *)primaryLanguageCode;
-(NSString *)primaryEmailAddress;
-(id)currentStoreFrontID;
-(NSArray *)allEmailAddresses;
-(char)isUserSignedInToiCloud;
-(NSString *)contentStoreFrontID;
-(char)isContentStoreFrontSupported;
-(ACAccount *)activeiTunesAccount;
-(NSString *)endpointConnectionClientID;
-(NSString *)supportedContentStoreFrontID;
-(char)isPrivateDataSyncingEnabled;
-(void)checkAlliOSDevicesRunningMinimumOSVersion:(SCD_Struct_FC23)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(/*^block*/id)arg3;
-(void)checkAllDevicesRunningMinimumiOSVersion:(SCD_Struct_FC23)arg1 macOSVersion:(SCD_Struct_FC23)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(/*^block*/id)arg4;
-(void)invalidateGSTokenCache;
-(void)getGSTokenWithCompletionHandler:(/*^block*/id)arg1;
-(id)getGSToken;
-(id)iCloudAccountDSID;
-(id)iTunesAccountName;
-(NSString *)appStoreEmailAddress;
-(char)isUserSignedIntoiTunes;
-(void)loadStoreFrontWithCompletionHandler:(/*^block*/id)arg1;
-(char)isPrimaryAccountEmailAddress;
-(NSString *)userStoreFrontID;
-(long long)supportedContentLanguage;
-(char)isSignedInStoreFrontSupported;

@end


@class NSString, ACAccount, NSArray, ACAccountStore, NFPromise, NSHashTable;

@interface FCAppleAccount : NSObject <FCAppleAccount> {

	char _runningPPT;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;
	ACAccount* _iTunesAccount;
	NSString* _overrideContentStoreFrontID;
	NFPromise* _base64GSTokenPromise;
	NSHashTable* _observers;
	NSString* _DSID;
	NSString* _userStoreFrontID;
	NSString* _contentStoreFrontID;

}

@property (nonatomic,copy) NSString * DSID;                                                                    //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * userStoreFrontID;                                                        //@synthesize userStoreFrontID=_userStoreFrontID - In the implementation block
@property (nonatomic,copy) NSString * contentStoreFrontID;                                                     //@synthesize contentStoreFrontID=_contentStoreFrontID - In the implementation block
@property (getter=isRunningPPT) char runningPPT;                                                               //@synthesize runningPPT=_runningPPT - In the implementation block
@property (nonatomic,readonly) NSString * primaryLanguageCode; 
@property (nonatomic,readonly) long long supportedContentLanguage; 
@property (nonatomic,readonly) char isContentStoreFrontSupported; 
@property (nonatomic,readonly) char isSignedInStoreFrontSupported; 
@property (nonatomic,readonly) NSString * supportedContentStoreFrontID; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) char privateDataSyncingEnabled; 
@property (getter=isUserSignedInToiCloud,nonatomic,readonly) char userSignedInToiCloud; 
@property (nonatomic,readonly) NSString * endpointConnectionClientID; 
@property (nonatomic,readonly) ACAccount * activeiTunesAccount; 
@property (nonatomic,readonly) NSString * primaryEmailAddress; 
@property (nonatomic,readonly) NSString * appStoreEmailAddress; 
@property (nonatomic,readonly) NSArray * allEmailAddresses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAccount;
+(void)enableStoreFrontLocking;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(id)iTunesAccountDSID;
-(NSString *)DSID;
-(void)_accountStoreDidChange;
-(NSString *)primaryLanguageCode;
-(NSString *)primaryEmailAddress;
-(id)currentStoreFrontID;
-(char)isRunningPPT;
-(NSArray *)allEmailAddresses;
-(void)setRunningPPT:(char)arg1 ;
-(char)isUserSignedInToiCloud;
-(void)setContentStoreFrontID:(NSString *)arg1 ;
-(NSString *)contentStoreFrontID;
-(char)isContentStoreFrontSupported;
-(ACAccount *)activeiTunesAccount;
-(NSString *)endpointConnectionClientID;
-(NSString *)supportedContentStoreFrontID;
-(char)isPrivateDataSyncingEnabled;
-(void)checkAlliOSDevicesRunningMinimumOSVersion:(SCD_Struct_FC23)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)checkAllDevicesRunningMinimumiOSVersion:(SCD_Struct_FC23)arg1 macOSVersion:(SCD_Struct_FC23)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)invalidateGSTokenCache;
-(void)getGSTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_reloadAccountsFromAccountStore;
-(id)getGSToken;
-(id)iCloudAccountDSID;
-(id)iTunesAccountName;
-(NSString *)appStoreEmailAddress;
-(char)isUserSignedIntoiTunes;
-(void)loadStoreFrontWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isPrimaryAccountEmailAddress;
-(NSString *)userStoreFrontID;
-(long long)supportedContentLanguage;
-(char)isSignedInStoreFrontSupported;
-(void)reloadiTunesAccount;
-(void)t_startOverridingContentStoreFrontID:(id)arg1 ;
-(void)t_stopOverridingContentStoreFrontID;
-(void)setUserStoreFrontID:(NSString *)arg1 ;
@end

