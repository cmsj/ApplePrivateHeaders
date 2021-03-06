/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSSet;

@interface AMSAcknowledgePrivacyTask : AMSTask {

	ACAccount* _account;
	NSSet* _privacyIdentifiers;

}

@property (copy) NSSet * privacyIdentifiers;              //@synthesize privacyIdentifiers=_privacyIdentifiers - In the implementation block
@property (retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
+(unsigned long long)_contentVersionForPrivacyIdentifier:(id)arg1 ;
+(id)_multiplexPrivacyIdentifier:(id)arg1 contentVersion:(unsigned long long)arg2 ;
+(char)hasRejectedPrivacyIdentifier:(id)arg1 ;
+(id)_accountStoreForPrivacyIdentifier:(id)arg1 ;
+(char)acknowledgementNeededForPrivacyIdentifier:(id)arg1 account:(id)arg2 ;
+(char)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 account:(id)arg2 ;
+(id)_storePrivacyIdentifiers;
+(char)acknowledgementNeededForPrivacyIdentifier:(id)arg1 ;
+(char)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithPrivacyIdentifier:(id)arg1 account:(id)arg2 ;
-(id)initWithPrivacyIdentifiers:(id)arg1 account:(id)arg2 ;
-(NSSet *)privacyIdentifiers;
-(id)_updatePrivacyWithAcknowledgementVersions:(id)arg1 ;
-(id)initWithPrivacyIdentifier:(id)arg1 ;
-(id)initWithPrivacyIdentifiers:(id)arg1 ;
-(id)acknowledgePrivacy;
-(id)rejectPrivacy;
-(void)setPrivacyIdentifiers:(NSSet *)arg1 ;
@end

