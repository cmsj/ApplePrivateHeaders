/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAddSecureElementPassConfiguration.h>

@class NSArray, NSString;

@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration {

	char _noncesFetched;
	unsigned long long _primaryAction;
	NSArray* _credentialsMetadata;
	NSString* _provisioningPolicyIdentifier;

}

@property (assign,nonatomic) char noncesFetched;                                     //@synthesize noncesFetched=_noncesFetched - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryAction;                     //@synthesize primaryAction=_primaryAction - In the implementation block
@property (nonatomic,readonly) NSArray * credentialsMetadata;                        //@synthesize credentialsMetadata=_credentialsMetadata - In the implementation block
@property (nonatomic,readonly) NSString * provisioningPolicyIdentifier;              //@synthesize provisioningPolicyIdentifier=_provisioningPolicyIdentifier - In the implementation block
+(char)supportsSecureCoding;
+(void)configurationForPassMetadata:(id)arg1 provisioningPolicyIdentifier:(id)arg2 primaryAction:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPrimaryAction:(unsigned long long)arg1 credentialsMetadata:(id)arg2 provisioningPolicyIdentifier:(id)arg3 ;
-(id)_PKAddShareablePassConfigurationPrimaryActionToString:(unsigned long long)arg1 ;
-(char)hasRequiredDataForProvisioning;
-(unsigned long long)primaryAction;
-(NSArray *)credentialsMetadata;
-(NSString *)provisioningPolicyIdentifier;
-(char)noncesFetched;
-(void)setNoncesFetched:(char)arg1 ;
@end

