/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID, NSNumber;

@interface SKPaymentDiscount : NSObject {

	id _internal;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * keyIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * nonce; 
@property (nonatomic,copy,readonly) NSString * signature; 
@property (nonatomic,copy,readonly) NSNumber * timestamp; 
-(NSString *)identifier;
-(NSString *)signature;
-(NSNumber *)timestamp;
-(NSString *)keyIdentifier;
-(NSUUID *)nonce;
-(id)initWithIdentifier:(id)arg1 keyIdentifier:(id)arg2 nonce:(id)arg3 signature:(id)arg4 timestamp:(id)arg5 ;
@end
