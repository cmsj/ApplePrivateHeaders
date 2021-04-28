/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountPolicy.framework/Versions/A/AccountPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountPolicy/APPolicyMaximum.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface APPolicyMaximumPasswordLength : APPolicyMaximum <NSCopying, NSSecureCoding>
+(id)policyWithMaximum:(id)arg1 ;
+(id)policyWithIdentifier:(id)arg1 andMaximum:(id)arg2 ;
+(char)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 andMaximum:(id)arg2 ;
-(id)_contentForMaximum:(id)arg1 ;
-(id)_contentDescriptionsForMaximum:(id)arg1 ;
-(id)_parametersForMaximum:(id)arg1 ;
-(id)initWithMaximum:(id)arg1 ;
@end
