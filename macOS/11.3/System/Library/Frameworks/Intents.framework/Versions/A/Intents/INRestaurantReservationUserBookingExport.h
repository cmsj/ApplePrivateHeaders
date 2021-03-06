/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INRestaurantGuest, NSString, INRestaurantOffer, NSDate;


@protocol INRestaurantReservationUserBookingExport <NSObject,JSExport>
@property (copy) INRestaurantGuest * guest; 
@property (copy) NSString * advisementText; 
@property (copy) INRestaurantOffer * selectedOffer; 
@property (copy) NSString * guestProvidedSpecialRequestText; 
@property (assign) unsigned long long status; 
@property (copy) NSDate * dateStatusModified; 
@required
-(id)init;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1;
-(INRestaurantGuest *)guest;
-(void)setGuest:(id)arg1;
-(NSString *)advisementText;
-(void)setAdvisementText:(id)arg1;
-(INRestaurantOffer *)selectedOffer;
-(void)setSelectedOffer:(id)arg1;
-(NSString *)guestProvidedSpecialRequestText;
-(void)setGuestProvidedSpecialRequestText:(id)arg1;
-(NSDate *)dateStatusModified;
-(void)setDateStatusModified:(id)arg1;

@end

