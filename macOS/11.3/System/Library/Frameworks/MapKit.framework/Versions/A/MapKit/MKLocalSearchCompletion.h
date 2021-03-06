/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOCompletionItem;
#import <MapKit/MapKit-Structs.h>
@class NSString, MKMapItem, NSArray, GEOSearchCategory, GEOResolvedItem, GEODirectionIntent, GEORetainedSearchMetadata, GEOServerResultScoreMetadata, GEOCollectionResult, GEOPublisherResult;

@interface MKLocalSearchCompletion : NSObject {

	id<GEOCompletionItem> _item;
	unsigned long long _serverSectionIndex;
	unsigned long long _serverItemIndexInSection;
	NSString* _sourceID;
	NSString* _localizedSectionHeader;
	MKMapItem* _mapItem;
	char _alreadySentFeedback;
	char _shouldDisplayNoResults;
	char _shouldEnableRAPForNoResults;
	MKLocalSearchCompletion* _directionIntentOrigin;
	MKLocalSearchCompletion* _directionIntentDestination;

}

@property (nonatomic,readonly) id<GEOCompletionItem> geoCompletionItem; 
@property (getter=_alreadySentFeedback,nonatomic,readonly) char alreadySentFeedback;                                  //@synthesize alreadySentFeedback=_alreadySentFeedback - In the implementation block
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) GEOSearchCategory * category; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolved; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,retain) MKLocalSearchCompletion * directionIntentOrigin;                                         //@synthesize directionIntentOrigin=_directionIntentOrigin - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompletion * directionIntentDestination;                                    //@synthesize directionIntentDestination=_directionIntentDestination - In the implementation block
@property (nonatomic,readonly) GEORetainedSearchMetadata * retainedSearchMetadata; 
@property (nonatomic,readonly) char hasSortPriority; 
@property (nonatomic,readonly) long long sortPriority; 
@property (nonatomic,readonly) long long entryTapBehavior; 
@property (nonatomic,readonly) GEOServerResultScoreMetadata * serverResultScoreMetadata; 
@property (nonatomic,readonly) unsigned long long serverSectionIndex;                                                 //@synthesize serverSectionIndex=_serverSectionIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long serverItemIndexInSection;                                           //@synthesize serverItemIndexInSection=_serverItemIndexInSection - In the implementation block
@property (nonatomic,readonly) char hasQueryAcceleratorAffordanceEnabled; 
@property (nonatomic,readonly) NSString * queryAcceleratorCompletionString; 
@property (nonatomic,readonly) long long autocompleteCellType; 
@property (nonatomic,readonly) GEOCollectionResult * collectionResult; 
@property (nonatomic,readonly) GEOPublisherResult * publisherResult; 
@property (nonatomic,readonly) NSArray * childItems; 
@property (nonatomic,copy) NSString * sourceID;                                                                       //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * localizedSectionHeader;                                                         //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
@property (getter=_type,nonatomic,readonly) long long type; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_hasDisambiguationRadiusMeters,nonatomic,readonly) char hasDisambiguationRadiusMeters; 
@property (getter=_disambiguationRadiusMeters,nonatomic,readonly) float disambiguationRadiusMeters; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * titleHighlightRanges; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSArray * subtitleHighlightRanges; 
-(char)isEqual:(id)arg1 ;
-(char)isKindOfClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)_type;
-(GEOSearchCategory *)category;
-(NSString *)title;
-(NSString *)subtitle;
-(id)icon;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(MKMapItem *)mapItem;
-(int)_placeType;
-(NSArray *)childItems;
-(long long)sortPriority;
-(char)hasSortPriority;
-(GEODirectionIntent *)directionIntent;
-(GEOResolvedItem *)clientResolved;
-(GEOServerResultScoreMetadata *)serverResultScoreMetadata;
-(NSString *)queryAcceleratorCompletionString;
-(float)_disambiguationRadiusMeters;
-(GEORetainedSearchMetadata *)retainedSearchMetadata;
-(NSString *)localizedSectionHeader;
-(id)queryLine;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(id)calloutTitle;
-(char)getCoordinate:(CLLocationCoordinate2D*)arg1 ;
-(void)sendFeedback;
-(NSArray *)displayLines;
-(long long)entryTapBehavior;
-(long long)autocompleteCellType;
-(char)hasQueryAcceleratorAffordanceEnabled;
-(GEOCollectionResult *)collectionResult;
-(GEOPublisherResult *)publisherResult;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(unsigned long long)serverSectionIndex;
-(unsigned long long)serverItemIndexInSection;
-(NSArray *)titleHighlightRanges;
-(NSArray *)subtitleHighlightRanges;
-(id)initWithGeoCompletionItem:(id)arg1 serverSectionIndex:(unsigned long long)arg2 serverItemIndexInSection:(unsigned long long)arg3 ;
-(id)_geoCompletionItem;
-(id)copyStorage;
-(char)_hasDisambiguationRadiusMeters;
-(char)_alreadySentFeedback;
-(MKLocalSearchCompletion *)directionIntentOrigin;
-(void)setDirectionIntentOrigin:(MKLocalSearchCompletion *)arg1 ;
-(MKLocalSearchCompletion *)directionIntentDestination;
-(void)setDirectionIntentDestination:(MKLocalSearchCompletion *)arg1 ;
-(id<GEOCompletionItem>)geoCompletionItem;
@end

