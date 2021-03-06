/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDecimalNumber, NSString;


@protocol INPriceRangeExport <NSObject,JSExport>
@property (copy) NSDecimalNumber * minimumPrice; 
@property (copy) NSDecimalNumber * maximumPrice; 
@property (copy) NSString * currencyCode; 
@required
+(id)_priceWithPriceRangeValue:(id)arg1;
-(id)init;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(id)arg1;
-(NSDecimalNumber *)maximumPrice;
-(void)setMaximumPrice:(id)arg1;
-(NSDecimalNumber *)minimumPrice;
-(void)setMinimumPrice:(id)arg1;

@end

