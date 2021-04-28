/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetAvailableRestaurantReservationBookingsIntentExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INRestaurant, NSDateComponents, NSNumber, NSDate, NSString;

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying> {

	INRestaurant* _restaurant;
	unsigned long long _partySize;
	NSDateComponents* _preferredBookingDateComponents;
	NSNumber* _maximumNumberOfResults;
	NSDate* _earliestBookingDateForResults;
	NSDate* _latestBookingDateForResults;
	NSDate* _preferredBookingDate;

}

@property (nonatomic,retain) NSDate * preferredBookingDate;                      //@synthesize preferredBookingDate=_preferredBookingDate - In the implementation block
@property (copy) INRestaurant * restaurant;                                      //@synthesize restaurant=_restaurant - In the implementation block
@property (assign) unsigned long long partySize;                                 //@synthesize partySize=_partySize - In the implementation block
@property (copy) NSDateComponents * preferredBookingDateComponents;              //@synthesize preferredBookingDateComponents=_preferredBookingDateComponents - In the implementation block
@property (copy) NSNumber * maximumNumberOfResults;                              //@synthesize maximumNumberOfResults=_maximumNumberOfResults - In the implementation block
@property (copy) NSDate * earliestBookingDateForResults;                         //@synthesize earliestBookingDateForResults=_earliestBookingDateForResults - In the implementation block
@property (copy) NSDate * latestBookingDateForResults;                           //@synthesize latestBookingDateForResults=_latestBookingDateForResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)intentDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(unsigned long long)partySize;
-(void)setPartySize:(unsigned long long)arg1 ;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(NSNumber *)maximumNumberOfResults;
-(void)setMaximumNumberOfResults:(NSNumber *)arg1 ;
-(NSDate *)earliestBookingDateForResults;
-(void)setEarliestBookingDateForResults:(NSDate *)arg1 ;
-(NSDateComponents *)preferredBookingDateComponents;
-(void)setPreferredBookingDateComponents:(NSDateComponents *)arg1 ;
-(NSDate *)latestBookingDateForResults;
-(void)setLatestBookingDateForResults:(NSDate *)arg1 ;
-(id)initWithRestaurant:(id)arg1 partySize:(unsigned long long)arg2 preferredBookingDateComponents:(id)arg3 maximumNumberOfResults:(id)arg4 earliestBookingDateForResults:(id)arg5 latestBookingDateForResults:(id)arg6 ;
-(NSDate *)preferredBookingDate;
-(void)setPreferredBookingDate:(NSDate *)arg1 ;
@end
