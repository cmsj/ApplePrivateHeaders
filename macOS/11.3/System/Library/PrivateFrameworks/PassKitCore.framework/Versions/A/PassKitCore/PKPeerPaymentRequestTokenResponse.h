/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRequestToken;

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse {

	char _success;
	PKPeerPaymentRequestToken* _requestToken;

}

@property (nonatomic,readonly) char success;                                          //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)success;
-(PKPeerPaymentRequestToken *)requestToken;
-(id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
@end

