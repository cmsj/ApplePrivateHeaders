/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSSet;

@interface PKPaymentSendOwnershipTokensRequest : PKPaymentWebServiceRequest {

	unsigned long long _reason;
	NSSet* _passOwnershipTokens;

}

@property (assign,nonatomic) unsigned long long reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSSet * passOwnershipTokens;              //@synthesize passOwnershipTokens=_passOwnershipTokens - In the implementation block
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 deviceMetadata:(id)arg3 appleAccountInformation:(id)arg4 ;
-(NSSet *)passOwnershipTokens;
-(void)setPassOwnershipTokens:(NSSet *)arg1 ;
@end

