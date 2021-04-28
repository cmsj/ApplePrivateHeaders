/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INPriceRange;


@protocol INRidePartySizeOptionExport <NSObject,JSExport>
@property (assign) NSRange partySizeRange; 
@property (copy) NSString * sizeDescription; 
@property (copy) INPriceRange * priceRange; 
@required
-(id)init;
-(INPriceRange *)priceRange;
-(void)setPriceRange:(id)arg1;
-(NSRange)partySizeRange;
-(void)setPartySizeRange:(NSRange)arg1;
-(NSString *)sizeDescription;
-(void)setSizeDescription:(id)arg1;

@end
