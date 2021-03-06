/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/Versions/A/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationAgentAdapter <NSObject>
@required
-(id)donatedMeCardEither;
-(id)donateMeCardValues:(id)arg1;
-(id)removeDonatedMeCardValuesForIdentifiers:(id)arg1;
-(id)fetchDonatedMeCard;
-(id)meCardDonations;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2;
-(id)rejectValueWithDonationIdentifier:(id)arg1;
-(id)rejectValuesWithClusterIdentifier:(id)arg1;
-(id)removeAllRejections;

@end

