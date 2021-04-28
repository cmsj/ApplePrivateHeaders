/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSArray;

@interface PKPaymentMerchantSession : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _epochTimestamp;
	unsigned long long _expiresAt;
	NSString* _merchantSessionIdentifier;
	NSString* _nonce;
	NSString* _merchantIdentifier;
	NSString* _operationalAnalyticsIdentifier;
	NSString* _domain;
	NSString* _displayName;
	NSString* _initiativeContext;
	NSString* _initiative;
	NSData* _ampEnrollmentPinning;
	NSArray* _signedFields;
	NSData* _signature;
	NSString* _retryNonce;

}

@property (nonatomic,readonly) unsigned long long epochTimestamp;                      //@synthesize epochTimestamp=_epochTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long expiresAt;                           //@synthesize expiresAt=_expiresAt - In the implementation block
@property (nonatomic,readonly) NSString * merchantSessionIdentifier;                   //@synthesize merchantSessionIdentifier=_merchantSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * nonce;                                       //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) NSString * merchantIdentifier;                          //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * operationalAnalyticsIdentifier;              //@synthesize operationalAnalyticsIdentifier=_operationalAnalyticsIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * initiativeContext;                           //@synthesize initiativeContext=_initiativeContext - In the implementation block
@property (nonatomic,readonly) NSString * initiative;                                  //@synthesize initiative=_initiative - In the implementation block
@property (nonatomic,readonly) NSData * ampEnrollmentPinning;                          //@synthesize ampEnrollmentPinning=_ampEnrollmentPinning - In the implementation block
@property (nonatomic,readonly) NSArray * signedFields;                                 //@synthesize signedFields=_signedFields - In the implementation block
@property (nonatomic,readonly) NSData * signature;                                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) NSString * retryNonce;                                    //@synthesize retryNonce=_retryNonce - In the implementation block
+(char)supportsSecureCoding;
+(long long)version;
+(id)paymentMerchantSessionWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayName;
-(NSData *)signature;
-(NSString *)nonce;
-(id)protobuf;
-(unsigned long long)expiresAt;
-(NSString *)merchantIdentifier;
-(NSArray *)signedFields;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 domain:(id)arg5 displayName:(id)arg6 signature:(id)arg7 ;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 domain:(id)arg6 displayName:(id)arg7 operationalAnalyticsIdentifier:(id)arg8 signature:(id)arg9 ;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 ampEnrollmentPinning:(id)arg9 operationalAnalyticsIdentifier:(id)arg10 signedFields:(id)arg11 signature:(id)arg12 ;
-(char)_isModern;
-(char)isEqualToPaymentMerchantSession:(id)arg1 ;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 signedFields:(id)arg9 signature:(id)arg10 ;
-(char)supportsURL:(id)arg1 ;
-(id)signedData;
-(unsigned long long)epochTimestamp;
-(NSString *)merchantSessionIdentifier;
-(NSString *)operationalAnalyticsIdentifier;
-(NSString *)initiativeContext;
-(NSString *)initiative;
-(NSData *)ampEnrollmentPinning;
-(NSString *)retryNonce;
-(void)setRetryNonce:(NSString *)arg1 ;
@end
