/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class HMDAccountHandle;

@interface _HMDAccountHandleIdentifer : _HMDAccountIdentifier {

	HMDAccountHandle* _accountHandle;

}

@property (copy,readonly) HMDAccountHandle * accountHandle;              //@synthesize accountHandle=_accountHandle - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(HMDAccountHandle *)accountHandle;
-(id)initWithAccountHandle:(id)arg1 ;
@end

