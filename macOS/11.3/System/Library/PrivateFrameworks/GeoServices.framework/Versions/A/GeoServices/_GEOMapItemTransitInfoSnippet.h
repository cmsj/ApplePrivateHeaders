/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemTransitInfo.h>

@class GEOPDTransitInfoSnippet, NSArray, NSString, GEOComposedRoute, NSDate;

@interface _GEOMapItemTransitInfoSnippet : NSObject <GEOMapItemTransitInfo> {

	GEOPDTransitInfoSnippet* _transitInfoSnippet;
	NSArray* _labelItems;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * systems; 
@property (nonatomic,readonly) unsigned long long systemsCount; 
@property (nonatomic,readonly) NSArray * lines; 
@property (nonatomic,readonly) unsigned long long linesCount; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) char isTransitIncidentsTTLExpired; 
@property (nonatomic,readonly) char hasTransitIncidentComponent; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * transitTripStops; 
@property (nonatomic,readonly) GEOComposedRoute * composedRoute; 
@property (nonatomic,readonly) NSArray * departureSequences; 
@property (nonatomic,readonly) double timeToLive; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * lastFullScheduleValidDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)displayName;
-(NSString *)title;
-(NSString *)subtitle;
-(NSArray *)connections;
-(double)timeToLive;
-(NSArray *)incidents;
-(GEOComposedRoute *)composedRoute;
-(NSArray *)lines;
-(unsigned long long)linesCount;
-(unsigned long long)systemsCount;
-(NSArray *)systems;
-(NSArray *)departureSequences;
-(id)initWithTransitInfoSnippet:(id)arg1 ;
-(NSArray *)labelItems;
-(char)hasTransitIncidentComponent;
-(char)isTransitIncidentsTTLExpired;
-(id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(/*^block*/id)arg4 ;
-(id)linesForSystem:(id)arg1 ;
-(unsigned long long)numAdditionalDeparturesForSequence:(id)arg1 ;
-(id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(/*^block*/id)arg3 hasSequencesWithNoDirection:(out char*)arg4 ;
-(id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out char*)arg4 ;
-(id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(/*^block*/id)arg2 excludingIncidentEntities:(id)arg3 ;
-(id)allSequencesForSystem:(id)arg1 direction:(id)arg2 ;
-(id)headSignsForLine:(id)arg1 ;
-(NSDate *)lastFullScheduleValidDate;
-(NSArray *)transitTripStops;
@end

