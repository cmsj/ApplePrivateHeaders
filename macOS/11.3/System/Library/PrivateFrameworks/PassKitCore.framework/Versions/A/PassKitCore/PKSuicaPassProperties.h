/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKTransitPassProperties.h>

@class NSDecimalNumber, NSString;

@interface PKSuicaPassProperties : PKTransitPassProperties {

	char _balanceAllowedForCommute;
	char _lowBalanceGateNotificationEnabled;
	char _greenCarTicketUsed;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * transitBalance; 
@property (nonatomic,copy,readonly) NSString * transitBalanceCurrencyCode; 
@property (getter=isInStation,nonatomic,readonly) char inStation; 
@property (getter=isInShinkansenStation,nonatomic,readonly) char inShinkansenStation; 
@property (getter=isBalanceAllowedForCommute,nonatomic,readonly) char balanceAllowedForCommute;                                //@synthesize balanceAllowedForCommute=_balanceAllowedForCommute - In the implementation block
@property (getter=isLowBalanceGateNotificationEnabled,nonatomic,readonly) char lowBalanceGateNotificationEnabled;              //@synthesize lowBalanceGateNotificationEnabled=_lowBalanceGateNotificationEnabled - In the implementation block
@property (getter=isGreenCarTicketUsed,nonatomic,readonly) char greenCarTicketUsed;                                            //@synthesize greenCarTicketUsed=_greenCarTicketUsed - In the implementation block
@property (getter=isBlacklisted,nonatomic,readonly) char blacklisted; 
+(id)passPropertiesForPass:(id)arg1 ;
+(Class)equalityClass;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)_initWithProperties:(id)arg1 ;
-(char)isInShinkansenStation;
-(char)isGreenCarTicketUsed;
-(char)isBalanceAllowedForCommute;
-(char)isInStation;
-(char)isLowBalanceGateNotificationEnabled;
@end

