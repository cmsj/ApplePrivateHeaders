/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRewrapResponseBase.h>

@class NSString;

@interface PKPaymentCompleteSessionResponse : PKPaymentRewrapResponseBase {

	NSString* _retryNonce;

}

@property (nonatomic,copy,readonly) NSString * retryNonce;              //@synthesize retryNonce=_retryNonce - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)retryNonce;
@end

