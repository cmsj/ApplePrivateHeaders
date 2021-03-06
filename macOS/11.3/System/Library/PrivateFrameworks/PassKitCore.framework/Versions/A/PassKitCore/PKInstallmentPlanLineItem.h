/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber, NSString;

@interface PKInstallmentPlanLineItem : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	NSDecimalNumber* _amount;
	unsigned long long _duration;
	NSString* _itemDescription;
	long long _state;
	NSString* _identifier;
	NSDecimalNumber* _paymentsToDateAmount;

}

@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amount;                            //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * itemDescription;                            //@synthesize itemDescription=_itemDescription - In the implementation block
@property (assign,nonatomic) long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * paymentsToDateAmount;              //@synthesize paymentsToDateAmount=_paymentsToDateAmount - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setState:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(NSDecimalNumber *)paymentsToDateAmount;
-(void)setPaymentsToDateAmount:(NSDecimalNumber *)arg1 ;
-(char)isEqualToInstallmentPlanLineItem:(id)arg1 ;
@end

