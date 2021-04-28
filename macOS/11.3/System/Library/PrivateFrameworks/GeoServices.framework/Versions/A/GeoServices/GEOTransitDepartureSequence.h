/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSSet;


@protocol GEOTransitDepartureSequence <NSObject>
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) char isLowFrequency; 
@property (nonatomic,readonly) long long displayStyle; 
@property (nonatomic,readonly) NSString * direction; 
@property (nonatomic,readonly) NSString * headsign; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@required
-(NSString *)direction;
-(long long)displayStyle;
-(NSString *)headsign;
-(id<GEOTransitLine>)line;
-(unsigned long long)stopId;
-(id)departures;
-(NSArray *)operatingHours;
-(NSSet *)nextStopIDs;
-(char)isLowFrequency;
-(id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;
-(id)firstDepartureValidForDate:(id)arg1;
-(char)hasFrequencyAtDate:(id)arg1;
-(id)firstDepartureOnOrAfterDate:(id)arg1;
-(id)firstDepartureAfterDate:(id)arg1;
-(unsigned long long)numberOfDeparturesAfterDate:(id)arg1;
-(id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;
-(id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;
-(char)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
-(id)departuresValidForDate:(id)arg1;
-(double)frequencyForSortingAtDate:(id)arg1;
-(id)frequencyToDescribeAtDate:(id)arg1;
-(char)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;

@end
