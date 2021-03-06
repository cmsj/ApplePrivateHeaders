/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentAugmentBaseResponse : PKPaymentWebServiceResponse {

	NSData* _networkMerchantIdentifier;
	long long _cryptogramType;

}

@property (nonatomic,copy,readonly) NSData * networkMerchantIdentifier;              //@synthesize networkMerchantIdentifier=_networkMerchantIdentifier - In the implementation block
@property (nonatomic,readonly) long long cryptogramType;                             //@synthesize cryptogramType=_cryptogramType - In the implementation block
-(id)initWithData:(id)arg1 ;
-(long long)cryptogramType;
-(NSData *)networkMerchantIdentifier;
@end

