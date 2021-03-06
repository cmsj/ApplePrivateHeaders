/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/Versions/A/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDDonationPreferences.h>

@class NSString;

@interface CNDInMemoryDonationPreferences : NSObject <CNDDonationPreferences> {

	char _donationsEnabled;

}

@property (assign,getter=isDonationsEnabled,nonatomic) char donationsEnabled;              //@synthesize donationsEnabled=_donationsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)setDonationsEnabled:(char)arg1 ;
-(char)isDonationsEnabled;
@end

