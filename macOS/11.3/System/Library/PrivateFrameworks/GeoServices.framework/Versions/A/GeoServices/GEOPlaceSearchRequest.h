/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAdditionalEnabledMarkets, GEOAddress, GEOBusinessOptions, GEOClientCapabilities, NSString, GEOLatLng, NSMutableArray, GEOIndexQueryNode, GEOLocation, GEOMapRegion, GEOSearchSubstring, GEOSuggestionsOptions, NSData;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE86* _additionalPlaceTypes;
	SCD_Struct_GE88* _businessIDs;
	SCD_Struct_GE86* _optionalSuppressionReasons;
	GEOSessionID _sessionGUID;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOAddress* _address;
	GEOBusinessOptions* _businessOptions;
	GEOClientCapabilities* _clientCapabilities;
	NSString* _deviceCountryCode;
	GEOLatLng* _deviceLocation;
	NSString* _deviceTimeZone;
	NSString* _deviceLocationCountryCode;
	NSMutableArray* _filterByBusinessCategorys;
	long long _geoId;
	GEOIndexQueryNode* _indexFilter;
	NSString* _inputLanguage;
	unsigned long long _intersectingGeoId;
	GEOLatLng* _knownLocation;
	NSMutableArray* _limitToCountryCodeIso2s;
	GEOLocation* _location;
	GEOMapRegion* _mapRegion;
	NSString* _phoneticLocaleIdentifier;
	GEOAddress* _preserveFields;
	GEOSearchSubstring* _searchContextSubstring;
	NSString* _searchContext;
	GEOLatLng* _searchLocation;
	NSMutableArray* _searchSubstrings;
	NSString* _search;
	NSMutableArray* _serviceTags;
	GEOSuggestionsOptions* _suggestionsOptions;
	NSString* _suggestionsPrefix;
	double _timeSinceMapEnteredForeground;
	double _timeSinceMapViewportChanged;
	double _timestamp;
	NSString* _viewportCenterCountryCode;
	NSData* _zilchPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _businessSortOrder;
	int _knownAccuracy;
	int _localSearchProviderID;
	int _mapMode;
	int _maxBusinessReviews;
	int _maxResults;
	int _placeTypeLimit;
	int _searchSource;
	int _sequenceNumber;
	int _transportTypeForTravelTimes;
	char _excludeAddressInResults;
	char _includeBusinessCategories;
	char _includeBusinessRating;
	char _includeEntryPoints;
	char _includeFeatureSets;
	char _includeGeoId;
	char _includeMatchedToken;
	char _includeNameForForwardGeocodingResults;
	char _includePhonetics;
	char _includeQuads;
	char _includeRoadAccessPoints;
	char _includeSpokenNames;
	char _includeStatusCodeInfo;
	char _includeSuggestionsOnly;
	char _includeTravelDistance;
	char _includeTravelTime;
	char _includeUnmatchedStrings;
	char _isCanonicalLocationSearch;
	char _isFromAPI;
	char _isStrictGeocoding;
	char _isStrictMapRegion;
	char _isPopularNearbyRequest;
	char _structuredSearch;
	char _suppressResultsRequiringAttribution;
	struct {
		unsigned has_sessionGUID : 1;
		unsigned has_geoId : 1;
		unsigned has_intersectingGeoId : 1;
		unsigned has_timeSinceMapEnteredForeground : 1;
		unsigned has_timeSinceMapViewportChanged : 1;
		unsigned has_timestamp : 1;
		unsigned has_businessSortOrder : 1;
		unsigned has_knownAccuracy : 1;
		unsigned has_localSearchProviderID : 1;
		unsigned has_mapMode : 1;
		unsigned has_maxBusinessReviews : 1;
		unsigned has_maxResults : 1;
		unsigned has_placeTypeLimit : 1;
		unsigned has_searchSource : 1;
		unsigned has_sequenceNumber : 1;
		unsigned has_transportTypeForTravelTimes : 1;
		unsigned has_excludeAddressInResults : 1;
		unsigned has_includeBusinessCategories : 1;
		unsigned has_includeBusinessRating : 1;
		unsigned has_includeEntryPoints : 1;
		unsigned has_includeFeatureSets : 1;
		unsigned has_includeGeoId : 1;
		unsigned has_includeMatchedToken : 1;
		unsigned has_includeNameForForwardGeocodingResults : 1;
		unsigned has_includePhonetics : 1;
		unsigned has_includeQuads : 1;
		unsigned has_includeRoadAccessPoints : 1;
		unsigned has_includeSpokenNames : 1;
		unsigned has_includeStatusCodeInfo : 1;
		unsigned has_includeSuggestionsOnly : 1;
		unsigned has_includeTravelDistance : 1;
		unsigned has_includeTravelTime : 1;
		unsigned has_includeUnmatchedStrings : 1;
		unsigned has_isCanonicalLocationSearch : 1;
		unsigned has_isFromAPI : 1;
		unsigned has_isStrictGeocoding : 1;
		unsigned has_isStrictMapRegion : 1;
		unsigned has_isPopularNearbyRequest : 1;
		unsigned has_structuredSearch : 1;
		unsigned has_suppressResultsRequiringAttribution : 1;
		unsigned read_unknownFields : 1;
		unsigned read_additionalPlaceTypes : 1;
		unsigned read_businessIDs : 1;
		unsigned read_optionalSuppressionReasons : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_address : 1;
		unsigned read_businessOptions : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_deviceCountryCode : 1;
		unsigned read_deviceLocation : 1;
		unsigned read_deviceTimeZone : 1;
		unsigned read_deviceLocationCountryCode : 1;
		unsigned read_filterByBusinessCategorys : 1;
		unsigned read_indexFilter : 1;
		unsigned read_inputLanguage : 1;
		unsigned read_knownLocation : 1;
		unsigned read_limitToCountryCodeIso2s : 1;
		unsigned read_location : 1;
		unsigned read_mapRegion : 1;
		unsigned read_phoneticLocaleIdentifier : 1;
		unsigned read_preserveFields : 1;
		unsigned read_searchContextSubstring : 1;
		unsigned read_searchContext : 1;
		unsigned read_searchLocation : 1;
		unsigned read_searchSubstrings : 1;
		unsigned read_search : 1;
		unsigned read_serviceTags : 1;
		unsigned read_suggestionsOptions : 1;
		unsigned read_suggestionsPrefix : 1;
		unsigned read_viewportCenterCountryCode : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long businessIDsCount; 
@property (nonatomic,readonly) unsigned long long* businessIDs; 
@property (nonatomic,readonly) char hasAddress; 
@property (nonatomic,retain) GEOAddress * address; 
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (nonatomic,readonly) char hasSearch; 
@property (nonatomic,retain) NSString * search; 
@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) unsigned long long additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (assign,nonatomic) char hasIncludePhonetics; 
@property (assign,nonatomic) char includePhonetics; 
@property (assign,nonatomic) char hasMaxResults; 
@property (assign,nonatomic) int maxResults; 
@property (assign,nonatomic) char hasSessionGUID; 
@property (assign,nonatomic) GEOSessionID sessionGUID; 
@property (assign,nonatomic) char hasBusinessSortOrder; 
@property (assign,nonatomic) int businessSortOrder; 
@property (assign,nonatomic) char hasIncludeBusinessRating; 
@property (assign,nonatomic) char includeBusinessRating; 
@property (assign,nonatomic) char hasIncludeBusinessCategories; 
@property (assign,nonatomic) char includeBusinessCategories; 
@property (assign,nonatomic) char hasMaxBusinessReviews; 
@property (assign,nonatomic) int maxBusinessReviews; 
@property (nonatomic,retain) NSMutableArray * filterByBusinessCategorys; 
@property (assign,nonatomic) char hasIsStrictMapRegion; 
@property (assign,nonatomic) char isStrictMapRegion; 
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) char hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints; 
@property (assign,nonatomic) char hasIncludeEntryPoints; 
@property (assign,nonatomic) char includeEntryPoints; 
@property (nonatomic,readonly) char hasBusinessOptions; 
@property (nonatomic,retain) GEOBusinessOptions * businessOptions; 
@property (assign,nonatomic) char hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID; 
@property (assign,nonatomic) char hasIncludeSuggestionsOnly; 
@property (assign,nonatomic) char includeSuggestionsOnly; 
@property (assign,nonatomic) char hasStructuredSearch; 
@property (assign,nonatomic) char structuredSearch; 
@property (nonatomic,readonly) char hasSuggestionsPrefix; 
@property (nonatomic,retain) NSString * suggestionsPrefix; 
@property (nonatomic,readonly) char hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) char hasDeviceLocation; 
@property (nonatomic,retain) GEOLatLng * deviceLocation; 
@property (nonatomic,readonly) char hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage; 
@property (nonatomic,readonly) char hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier; 
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber; 
@property (assign,nonatomic) char hasSuppressResultsRequiringAttribution; 
@property (assign,nonatomic) char suppressResultsRequiringAttribution; 
@property (assign,nonatomic) char hasIsFromAPI; 
@property (assign,nonatomic) char isFromAPI; 
@property (assign,nonatomic) char hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) double timeSinceMapEnteredForeground; 
@property (assign,nonatomic) char hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) double timeSinceMapViewportChanged; 
@property (assign,nonatomic) char hasIncludeSpokenNames; 
@property (assign,nonatomic) char includeSpokenNames; 
@property (nonatomic,readonly) char hasDeviceTimeZone; 
@property (nonatomic,retain) NSString * deviceTimeZone; 
@property (nonatomic,readonly) char hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (assign,nonatomic) char hasIncludeTravelTime; 
@property (assign,nonatomic) char includeTravelTime; 
@property (assign,nonatomic) char hasTransportTypeForTravelTimes; 
@property (assign,nonatomic) int transportTypeForTravelTimes; 
@property (nonatomic,readonly) char hasSuggestionsOptions; 
@property (nonatomic,retain) GEOSuggestionsOptions * suggestionsOptions; 
@property (assign,nonatomic) char hasPlaceTypeLimit; 
@property (assign,nonatomic) int placeTypeLimit; 
@property (assign,nonatomic) char hasIsStrictGeocoding; 
@property (assign,nonatomic) char isStrictGeocoding; 
@property (assign,nonatomic) char hasIncludeTravelDistance; 
@property (assign,nonatomic) char includeTravelDistance; 
@property (assign,nonatomic) char hasIncludeRoadAccessPoints; 
@property (assign,nonatomic) char includeRoadAccessPoints; 
@property (nonatomic,retain) NSMutableArray * limitToCountryCodeIso2s; 
@property (assign,nonatomic) char hasIsCanonicalLocationSearch; 
@property (assign,nonatomic) char isCanonicalLocationSearch; 
@property (assign,nonatomic) char hasGeoId; 
@property (assign,nonatomic) long long geoId; 
@property (assign,nonatomic) char hasIncludeQuads; 
@property (assign,nonatomic) char includeQuads; 
@property (assign,nonatomic) char hasExcludeAddressInResults; 
@property (assign,nonatomic) char excludeAddressInResults; 
@property (nonatomic,retain) NSMutableArray * searchSubstrings; 
@property (assign,nonatomic) char hasIncludeGeoId; 
@property (assign,nonatomic) char includeGeoId; 
@property (nonatomic,readonly) char hasSearchContext; 
@property (nonatomic,retain) NSString * searchContext; 
@property (nonatomic,readonly) char hasSearchContextSubstring; 
@property (nonatomic,retain) GEOSearchSubstring * searchContextSubstring; 
@property (assign,nonatomic) char hasIncludeStatusCodeInfo; 
@property (assign,nonatomic) char includeStatusCodeInfo; 
@property (nonatomic,readonly) char hasPreserveFields; 
@property (nonatomic,retain) GEOAddress * preserveFields; 
@property (assign,nonatomic) char hasIncludeUnmatchedStrings; 
@property (assign,nonatomic) char includeUnmatchedStrings; 
@property (nonatomic,readonly) char hasIndexFilter; 
@property (nonatomic,retain) GEOIndexQueryNode * indexFilter; 
@property (assign,nonatomic) char hasIncludeFeatureSets; 
@property (assign,nonatomic) char includeFeatureSets; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (assign,nonatomic) char hasIntersectingGeoId; 
@property (assign,nonatomic) unsigned long long intersectingGeoId; 
@property (nonatomic,readonly) char hasKnownLocation; 
@property (nonatomic,retain) GEOLatLng * knownLocation; 
@property (assign,nonatomic) char hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy; 
@property (assign,nonatomic) char hasIncludeMatchedToken; 
@property (assign,nonatomic) char includeMatchedToken; 
@property (assign,nonatomic) char hasSearchSource; 
@property (assign,nonatomic) int searchSource; 
@property (nonatomic,readonly) unsigned long long optionalSuppressionReasonsCount; 
@property (nonatomic,readonly) int* optionalSuppressionReasons; 
@property (nonatomic,readonly) char hasSearchLocation; 
@property (nonatomic,retain) GEOLatLng * searchLocation; 
@property (assign,nonatomic) char hasIncludeNameForForwardGeocodingResults; 
@property (assign,nonatomic) char includeNameForForwardGeocodingResults; 
@property (nonatomic,readonly) char hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (assign,nonatomic) char hasMapMode; 
@property (assign,nonatomic) int mapMode; 
@property (assign,nonatomic) char hasIsPopularNearbyRequest; 
@property (assign,nonatomic) char isPopularNearbyRequest; 
@property (nonatomic,readonly) char hasDeviceLocationCountryCode; 
@property (nonatomic,retain) NSString * deviceLocationCountryCode; 
@property (nonatomic,readonly) char hasViewportCenterCountryCode; 
@property (nonatomic,retain) NSString * viewportCenterCountryCode; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(Class)filterByBusinessCategoryType;
+(Class)limitToCountryCodeIso2Type;
+(Class)searchSubstringType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)sequenceNumber;
-(void)setSequenceNumber:(int)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(GEOAddress *)address;
-(double)timestamp;
-(void)setAddress:(GEOAddress *)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(char)hasTimestamp;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSString *)searchContext;
-(void)setSearchContext:(NSString *)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(void)clearSensitiveFields;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(char)hasMapRegion;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(int)localSearchProviderID;
-(void)setHasLocalSearchProviderID:(char)arg1 ;
-(char)hasLocalSearchProviderID;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(char)hasAddress;
-(char)hasLocation;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(char)hasClientCapabilities;
-(void)setMaxResults:(int)arg1 ;
-(int)maxResults;
-(void)setHasMaxResults:(char)arg1 ;
-(char)hasMaxResults;
-(long long)geoId;
-(void)setGeoId:(long long)arg1 ;
-(char)hasGeoId;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(unsigned long long)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(int*)additionalPlaceTypes;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)additionalPlaceTypesAsString:(int)arg1 ;
-(int)StringAsAdditionalPlaceTypes:(id)arg1 ;
-(GEOLatLng *)searchLocation;
-(void)setSearchLocation:(GEOLatLng *)arg1 ;
-(char)hasSearchLocation;
-(void)setSuppressResultsRequiringAttribution:(char)arg1 ;
-(char)suppressResultsRequiringAttribution;
-(void)setHasSuppressResultsRequiringAttribution:(char)arg1 ;
-(char)hasSuppressResultsRequiringAttribution;
-(char)hasZilchPoints;
-(void)setPlaceTypeLimit:(int)arg1 ;
-(int)placeTypeLimit;
-(void)setHasPlaceTypeLimit:(char)arg1 ;
-(char)hasPlaceTypeLimit;
-(id)placeTypeLimitAsString:(int)arg1 ;
-(int)StringAsPlaceTypeLimit:(id)arg1 ;
-(GEOIndexQueryNode *)indexFilter;
-(void)setIsStrictMapRegion:(char)arg1 ;
-(void)setStructuredSearch:(char)arg1 ;
-(void)setIndexFilter:(GEOIndexQueryNode *)arg1 ;
-(char)isStrictMapRegion;
-(void)setHasIsStrictMapRegion:(char)arg1 ;
-(char)hasIsStrictMapRegion;
-(char)structuredSearch;
-(void)setHasStructuredSearch:(char)arg1 ;
-(char)hasStructuredSearch;
-(char)hasIndexFilter;
-(void)setTimeSinceMapViewportChanged:(double)arg1 ;
-(double)timeSinceMapViewportChanged;
-(void)setHasTimeSinceMapViewportChanged:(char)arg1 ;
-(char)hasTimeSinceMapViewportChanged;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(void)setSessionGUID:(GEOSessionID)arg1 ;
-(GEOSessionID)sessionGUID;
-(void)setHasSessionGUID:(char)arg1 ;
-(char)hasSessionGUID;
-(id)initWithTraits:(id)arg1 ;
-(GEOLatLng *)deviceLocation;
-(void)setDeviceLocation:(GEOLatLng *)arg1 ;
-(void)setIncludeTravelTime:(char)arg1 ;
-(void)setIncludeTravelDistance:(char)arg1 ;
-(void)setInputLanguage:(NSString *)arg1 ;
-(void)setIncludeSpokenNames:(char)arg1 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(void)setDeviceTimeZone:(NSString *)arg1 ;
-(void)setIsFromAPI:(char)arg1 ;
-(void)setSearchSource:(int)arg1 ;
-(char)hasTimeSinceMapEnteredForeground;
-(double)timeSinceMapEnteredForeground;
-(void)setTimeSinceMapEnteredForeground:(double)arg1 ;
-(void)setMapMode:(int)arg1 ;
-(NSString *)phoneticLocaleIdentifier;
-(void)setIncludePhonetics:(char)arg1 ;
-(char)includePhonetics;
-(void)setHasIncludePhonetics:(char)arg1 ;
-(char)hasIncludePhonetics;
-(char)hasPhoneticLocaleIdentifier;
-(void)setHasGeoId:(char)arg1 ;
-(char)hasKnownAccuracy;
-(int)knownAccuracy;
-(void)setKnownAccuracy:(int)arg1 ;
-(void)setHasKnownAccuracy:(char)arg1 ;
-(id)knownAccuracyAsString:(int)arg1 ;
-(int)StringAsKnownAccuracy:(id)arg1 ;
-(char)includeSpokenNames;
-(void)setHasIncludeSpokenNames:(char)arg1 ;
-(char)hasIncludeSpokenNames;
-(NSString *)deviceCountryCode;
-(char)hasDeviceCountryCode;
-(char)hasDeviceLocation;
-(void)setHasTimeSinceMapEnteredForeground:(char)arg1 ;
-(char)hasAdditionalEnabledMarkets;
-(NSString *)inputLanguage;
-(char)hasInputLanguage;
-(NSString *)search;
-(NSMutableArray *)filterByBusinessCategorys;
-(GEOBusinessOptions *)businessOptions;
-(NSString *)suggestionsPrefix;
-(NSString *)deviceTimeZone;
-(GEOSuggestionsOptions *)suggestionsOptions;
-(NSMutableArray *)limitToCountryCodeIso2s;
-(GEOSearchSubstring *)searchContextSubstring;
-(GEOAddress *)preserveFields;
-(GEOLatLng *)knownLocation;
-(NSString *)deviceLocationCountryCode;
-(NSString *)viewportCenterCountryCode;
-(void)addBusinessID:(unsigned long long)arg1 ;
-(void)setSearch:(NSString *)arg1 ;
-(void)setBusinessSortOrder:(int)arg1 ;
-(void)setIncludeBusinessRating:(char)arg1 ;
-(void)setIncludeBusinessCategories:(char)arg1 ;
-(void)setMaxBusinessReviews:(int)arg1 ;
-(void)addFilterByBusinessCategory:(id)arg1 ;
-(void)setIncludeEntryPoints:(char)arg1 ;
-(void)setBusinessOptions:(GEOBusinessOptions *)arg1 ;
-(void)setIncludeSuggestionsOnly:(char)arg1 ;
-(void)setSuggestionsPrefix:(NSString *)arg1 ;
-(void)setTransportTypeForTravelTimes:(int)arg1 ;
-(void)setSuggestionsOptions:(GEOSuggestionsOptions *)arg1 ;
-(void)setIsStrictGeocoding:(char)arg1 ;
-(void)setIncludeRoadAccessPoints:(char)arg1 ;
-(void)addLimitToCountryCodeIso2:(id)arg1 ;
-(void)setIsCanonicalLocationSearch:(char)arg1 ;
-(void)setIncludeQuads:(char)arg1 ;
-(void)setExcludeAddressInResults:(char)arg1 ;
-(void)addSearchSubstring:(id)arg1 ;
-(void)setIncludeGeoId:(char)arg1 ;
-(void)setSearchContextSubstring:(GEOSearchSubstring *)arg1 ;
-(void)setIncludeStatusCodeInfo:(char)arg1 ;
-(void)setPreserveFields:(GEOAddress *)arg1 ;
-(void)setIncludeUnmatchedStrings:(char)arg1 ;
-(void)setIncludeFeatureSets:(char)arg1 ;
-(void)setIntersectingGeoId:(unsigned long long)arg1 ;
-(void)setKnownLocation:(GEOLatLng *)arg1 ;
-(void)setIncludeMatchedToken:(char)arg1 ;
-(void)addOptionalSuppressionReason:(int)arg1 ;
-(void)setIncludeNameForForwardGeocodingResults:(char)arg1 ;
-(void)setIsPopularNearbyRequest:(char)arg1 ;
-(void)setDeviceLocationCountryCode:(NSString *)arg1 ;
-(void)setViewportCenterCountryCode:(NSString *)arg1 ;
-(unsigned long long)businessIDsCount;
-(void)clearBusinessIDs;
-(unsigned long long)businessIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)filterByBusinessCategorysCount;
-(void)clearFilterByBusinessCategorys;
-(id)filterByBusinessCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)limitToCountryCodeIso2sCount;
-(void)clearLimitToCountryCodeIso2s;
-(id)limitToCountryCodeIso2AtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchSubstringsCount;
-(void)clearSearchSubstrings;
-(id)searchSubstringAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)optionalSuppressionReasonsCount;
-(void)clearOptionalSuppressionReasons;
-(int)optionalSuppressionReasonAtIndex:(unsigned long long)arg1 ;
-(unsigned long long*)businessIDs;
-(void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(char)hasSearch;
-(int)businessSortOrder;
-(void)setHasBusinessSortOrder:(char)arg1 ;
-(char)hasBusinessSortOrder;
-(id)businessSortOrderAsString:(int)arg1 ;
-(int)StringAsBusinessSortOrder:(id)arg1 ;
-(char)includeBusinessRating;
-(void)setHasIncludeBusinessRating:(char)arg1 ;
-(char)hasIncludeBusinessRating;
-(char)includeBusinessCategories;
-(void)setHasIncludeBusinessCategories:(char)arg1 ;
-(char)hasIncludeBusinessCategories;
-(int)maxBusinessReviews;
-(void)setHasMaxBusinessReviews:(char)arg1 ;
-(char)hasMaxBusinessReviews;
-(void)setFilterByBusinessCategorys:(NSMutableArray *)arg1 ;
-(char)includeEntryPoints;
-(void)setHasIncludeEntryPoints:(char)arg1 ;
-(char)hasIncludeEntryPoints;
-(char)hasBusinessOptions;
-(char)includeSuggestionsOnly;
-(void)setHasIncludeSuggestionsOnly:(char)arg1 ;
-(char)hasIncludeSuggestionsOnly;
-(char)hasSuggestionsPrefix;
-(char)isFromAPI;
-(void)setHasIsFromAPI:(char)arg1 ;
-(char)hasIsFromAPI;
-(char)hasDeviceTimeZone;
-(char)includeTravelTime;
-(void)setHasIncludeTravelTime:(char)arg1 ;
-(char)hasIncludeTravelTime;
-(int)transportTypeForTravelTimes;
-(void)setHasTransportTypeForTravelTimes:(char)arg1 ;
-(char)hasTransportTypeForTravelTimes;
-(id)transportTypeForTravelTimesAsString:(int)arg1 ;
-(int)StringAsTransportTypeForTravelTimes:(id)arg1 ;
-(char)hasSuggestionsOptions;
-(char)isStrictGeocoding;
-(void)setHasIsStrictGeocoding:(char)arg1 ;
-(char)hasIsStrictGeocoding;
-(char)includeTravelDistance;
-(void)setHasIncludeTravelDistance:(char)arg1 ;
-(char)hasIncludeTravelDistance;
-(char)includeRoadAccessPoints;
-(void)setHasIncludeRoadAccessPoints:(char)arg1 ;
-(char)hasIncludeRoadAccessPoints;
-(void)setLimitToCountryCodeIso2s:(NSMutableArray *)arg1 ;
-(char)isCanonicalLocationSearch;
-(void)setHasIsCanonicalLocationSearch:(char)arg1 ;
-(char)hasIsCanonicalLocationSearch;
-(char)includeQuads;
-(void)setHasIncludeQuads:(char)arg1 ;
-(char)hasIncludeQuads;
-(char)excludeAddressInResults;
-(void)setHasExcludeAddressInResults:(char)arg1 ;
-(char)hasExcludeAddressInResults;
-(NSMutableArray *)searchSubstrings;
-(void)setSearchSubstrings:(NSMutableArray *)arg1 ;
-(char)includeGeoId;
-(void)setHasIncludeGeoId:(char)arg1 ;
-(char)hasIncludeGeoId;
-(char)hasSearchContext;
-(char)hasSearchContextSubstring;
-(char)includeStatusCodeInfo;
-(void)setHasIncludeStatusCodeInfo:(char)arg1 ;
-(char)hasIncludeStatusCodeInfo;
-(char)hasPreserveFields;
-(char)includeUnmatchedStrings;
-(void)setHasIncludeUnmatchedStrings:(char)arg1 ;
-(char)hasIncludeUnmatchedStrings;
-(char)includeFeatureSets;
-(void)setHasIncludeFeatureSets:(char)arg1 ;
-(char)hasIncludeFeatureSets;
-(unsigned long long)intersectingGeoId;
-(void)setHasIntersectingGeoId:(char)arg1 ;
-(char)hasIntersectingGeoId;
-(char)hasKnownLocation;
-(char)includeMatchedToken;
-(void)setHasIncludeMatchedToken:(char)arg1 ;
-(char)hasIncludeMatchedToken;
-(int)searchSource;
-(void)setHasSearchSource:(char)arg1 ;
-(char)hasSearchSource;
-(id)searchSourceAsString:(int)arg1 ;
-(int)StringAsSearchSource:(id)arg1 ;
-(int*)optionalSuppressionReasons;
-(void)setOptionalSuppressionReasons:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)optionalSuppressionReasonsAsString:(int)arg1 ;
-(int)StringAsOptionalSuppressionReasons:(id)arg1 ;
-(char)includeNameForForwardGeocodingResults;
-(void)setHasIncludeNameForForwardGeocodingResults:(char)arg1 ;
-(char)hasIncludeNameForForwardGeocodingResults;
-(int)mapMode;
-(void)setHasMapMode:(char)arg1 ;
-(char)hasMapMode;
-(id)mapModeAsString:(int)arg1 ;
-(int)StringAsMapMode:(id)arg1 ;
-(char)isPopularNearbyRequest;
-(void)setHasIsPopularNearbyRequest:(char)arg1 ;
-(char)hasIsPopularNearbyRequest;
-(char)hasDeviceLocationCountryCode;
-(char)hasViewportCenterCountryCode;
@end
