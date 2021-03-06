/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class NSDecimalNumber, NSString;

@interface PKSearchTransactionRewardsResult : NSObject <PKSearchAutocompleteToken> {

	NSDecimalNumber* _rewardsValue;
	unsigned long long _rewardsValueUnit;

}

@property (nonatomic,retain) NSDecimalNumber * rewardsValue;                   //@synthesize rewardsValue=_rewardsValue - In the implementation block
@property (assign,nonatomic) unsigned long long rewardsValueUnit;              //@synthesize rewardsValueUnit=_rewardsValueUnit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)tokenType;
-(NSDecimalNumber *)rewardsValue;
-(void)setRewardsValue:(NSDecimalNumber *)arg1 ;
-(unsigned long long)rewardsValueUnit;
-(void)setRewardsValueUnit:(unsigned long long)arg1 ;
@end

