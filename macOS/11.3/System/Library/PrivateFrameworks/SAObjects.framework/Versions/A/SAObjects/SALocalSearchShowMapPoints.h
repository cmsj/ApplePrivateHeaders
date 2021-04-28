/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, SALocalSearchCarRouteOptions, NSString, SALocalSearchMapItem, NSNumber, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints : SADomainCommand

@property (nonatomic,copy) NSDate * arrivalDate; 
@property (nonatomic,retain) SALocalSearchCarRouteOptions * carRouteOptions; 
@property (assign,nonatomic) char chainResultSet; 
@property (nonatomic,copy) NSDate * departureDate; 
@property (nonatomic,copy) NSString * directionsType; 
@property (nonatomic,retain) SALocalSearchMapItem * itemDestination; 
@property (nonatomic,retain) SALocalSearchMapItem * itemSource; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * preferredDirectionsMode; 
@property (nonatomic,copy) NSNumber * regionOfInterestRadiusInMiles; 
@property (assign,nonatomic) char searchAlongRoute; 
@property (nonatomic,retain) SALocalSearchMapItemList * searchItems; 
@property (assign,nonatomic) char showDirections; 
@property (assign,nonatomic) char showTraffic; 
@property (assign,nonatomic) char suppressNavigation; 
+(id)showMapPoints;
+(id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(SALocalSearchMapItemList *)searchItems;
-(void)setSearchItems:(SALocalSearchMapItemList *)arg1 ;
-(id)groupIdentifier;
-(void)setItemSource:(SALocalSearchMapItem *)arg1 ;
-(SALocalSearchMapItem *)itemSource;
-(char)chainResultSet;
-(NSDate *)arrivalDate;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(void)setDirectionsType:(NSString *)arg1 ;
-(NSString *)directionsType;
-(NSDate *)departureDate;
-(void)setDepartureDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setChainResultSet:(char)arg1 ;
-(NSNumber *)regionOfInterestRadiusInMiles;
-(void)setRegionOfInterestRadiusInMiles:(NSNumber *)arg1 ;
-(char)searchAlongRoute;
-(void)setSearchAlongRoute:(char)arg1 ;
-(SALocalSearchCarRouteOptions *)carRouteOptions;
-(void)setCarRouteOptions:(SALocalSearchCarRouteOptions *)arg1 ;
-(SALocalSearchMapItem *)itemDestination;
-(void)setItemDestination:(SALocalSearchMapItem *)arg1 ;
-(NSString *)preferredDirectionsMode;
-(void)setPreferredDirectionsMode:(NSString *)arg1 ;
-(char)showDirections;
-(void)setShowDirections:(char)arg1 ;
-(char)showTraffic;
-(void)setShowTraffic:(char)arg1 ;
-(char)suppressNavigation;
-(void)setSuppressNavigation:(char)arg1 ;
@end
