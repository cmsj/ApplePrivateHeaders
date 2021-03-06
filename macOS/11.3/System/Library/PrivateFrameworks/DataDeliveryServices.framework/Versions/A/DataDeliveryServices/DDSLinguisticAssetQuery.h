/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/Versions/A/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDeliveryServices/DDSAssetQuery.h>

@class DDSLinguisticAttributeFilter;

@interface DDSLinguisticAssetQuery : DDSAssetQuery

@property (nonatomic,readonly) DDSLinguisticAttributeFilter * filter; 
-(void)addRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 ;
-(id)initWithLanguageIdentifier:(id)arg1 ;
@end

