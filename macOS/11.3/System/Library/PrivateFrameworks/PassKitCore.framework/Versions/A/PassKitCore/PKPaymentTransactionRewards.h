/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PKPaymentTransactionRewards : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying> {

	NSArray* _rewardsItems;

}

@property (nonatomic,retain) NSArray * rewardsItems;              //@synthesize rewardsItems=_rewardsItems - In the implementation block
+(char)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)_rewardsItemsSetFromJsonString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)itemType;
-(id)primaryIdentifier;
-(id)jsonString;
-(id)jsonArrayRepresentation;
-(id)_rewardItemsFromRecord:(id)arg1 ;
-(id)initWithRewardsItems:(id)arg1 ;
-(void)_encodeServerDataWithCloudStoreCoder:(id)arg1 ;
-(char)isEqualToRewards:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2 ;
-(id)recordTypesAndNamesForCodingType:(unsigned long long)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(id)totalEligibleValueForUnit:(unsigned long long)arg1 ;
-(NSArray *)rewardsItems;
-(void)setRewardsItems:(NSArray *)arg1 ;
@end

