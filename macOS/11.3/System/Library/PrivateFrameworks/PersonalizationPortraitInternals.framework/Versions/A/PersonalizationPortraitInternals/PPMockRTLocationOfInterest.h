/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPMockRTMapItem, NSArray;

@interface PPMockRTLocationOfInterest : NSObject {

	PPMockRTMapItem* _mapItem;
	long long _type;
	NSArray* _visits;

}

@property (nonatomic,retain) PPMockRTMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * visits;                       //@synthesize visits=_visits - In the implementation block
+(id)mockLocationOfInterestWithSubThoroughfare:(id)arg1 thoroughfare:(id)arg2 subLocality:(id)arg3 locality:(id)arg4 administrativeArea:(id)arg5 administrativeAreaCode:(id)arg6 postalCode:(id)arg7 country:(id)arg8 countryCode:(id)arg9 longitude:(double)arg10 latitude:(double)arg11 visits:(id)arg12 ;
-(long long)type;
-(PPMockRTMapItem *)mapItem;
-(NSArray *)visits;
-(void)setMapItem:(PPMockRTMapItem *)arg1 ;
-(void)setVisits:(NSArray *)arg1 ;
@end

