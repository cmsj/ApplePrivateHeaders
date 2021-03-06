/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEORouteBuilderOutput.h>

@class NSArray;

@interface GEOTransitRouteBuilderOutput : GEORouteBuilderOutput {

	char _isWalkingOnlyRoute;
	NSArray* _rideSelections;
	NSArray* _sectionOptions;

}

@property (nonatomic,readonly) char isWalkingOnlyRoute;               //@synthesize isWalkingOnlyRoute=_isWalkingOnlyRoute - In the implementation block
@property (nonatomic,readonly) NSArray * rideSelections;              //@synthesize rideSelections=_rideSelections - In the implementation block
@property (nonatomic,readonly) NSArray * sectionOptions;              //@synthesize sectionOptions=_sectionOptions - In the implementation block
-(NSArray *)sectionOptions;
-(void)setSectionOptions:(NSArray *)arg1 ;
-(char)isWalkingOnlyRoute;
-(NSArray *)rideSelections;
-(void)setRideSelections:(NSArray *)arg1 ;
-(void)setIsWalkingOnlyRoute:(char)arg1 ;
@end

