/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMerchantSession;

@interface PKPaymentRequestMerchantSessionUpdate : NSObject <NSSecureCoding> {

	long long _status;
	PKPaymentMerchantSession* _session;

}

@property (assign,nonatomic) long long status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) PKPaymentMerchantSession * session;              //@synthesize session=_session - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(PKPaymentMerchantSession *)session;
-(void)setSession:(PKPaymentMerchantSession *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)initWithStatus:(long long)arg1 merchantSession:(id)arg2 ;
@end

