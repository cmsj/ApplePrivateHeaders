/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface PKPaymentSetupConfiguration : NSObject <NSSecureCoding> {

	NSString* _referrerIdentifier;
	NSURL* _originatingURL;
	NSString* _merchantIdentifier;
	NSArray* _signedFields;
	NSString* _signature;

}

@property (nonatomic,retain) NSURL * originatingURL;                   //@synthesize originatingURL=_originatingURL - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * signedFields;                     //@synthesize signedFields=_signedFields - In the implementation block
@property (nonatomic,copy) NSString * signature;                       //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;              //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)signature;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSString *)referrerIdentifier;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(NSURL *)originatingURL;
-(void)setOriginatingURL:(NSURL *)arg1 ;
-(NSArray *)signedFields;
-(void)setSignedFields:(NSArray *)arg1 ;
@end

