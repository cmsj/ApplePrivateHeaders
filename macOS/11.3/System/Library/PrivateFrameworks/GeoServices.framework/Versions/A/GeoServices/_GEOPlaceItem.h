/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>
#import <libobjc.A.dylib/GEOMapItem.h>

@class NSString, NSData, GEOMapRegion, GEOAddress, NSDictionary, NSArray, NSTimeZone, NSDate, GEOAssociatedApp, GEOMapItemClientAttributes, GEOPlace, GEOPlaceResult, GEOPDPlace, GEOPDFlyover, GEOMuninViewState, GEOStorefrontInfo, GEOStorefrontPresentationInfo, GEOMapItemIdentifier, GEOPriceDescription, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim, GEORestaurantFeaturesLink, GEOMessageLink, GEORelatedPlaceList, GEOPlacecardLayoutConfiguration, GEOMapItemDetourInfo, GEOMapItemContainedPlace, GEOStyleAttributes, GEOAppleRating, GEOPlaceQuestionnaire, geo_isolater, GEOAddressObject;

@interface _GEOPlaceItem : GEOBaseMapItem <GEOMapItem> {

	GEOPlaceResult* _placeResult;
	GEOPlace* _place;
	geo_isolater* _lazyIvarIsolater;
	GEOAddressObject* _addressObject;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * secondaryName; 
@property (nonatomic,readonly) NSString * secondarySpokenName; 
@property (nonatomic,readonly) NSData * encodedData; 
@property (getter=isDisputed,nonatomic,readonly) char disputed; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng centerCoordinate; 
@property (nonatomic,readonly) int referenceFrame; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) char hasDisplayMinZoom; 
@property (nonatomic,readonly) float displayMinZoom; 
@property (nonatomic,readonly) char hasDisplayMaxZoom; 
@property (nonatomic,readonly) float displayMaxZoom; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (nonatomic,readonly) GEOAddress * geoAddress; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,readonly) NSArray * areasOfInterest; 
@property (nonatomic,readonly) NSTimeZone * timezone; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegionOrNil; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegionOrNil; 
@property (nonatomic,readonly) int contactAddressType; 
@property (nonatomic,readonly) NSString * contactName; 
@property (nonatomic,readonly) NSString * contactSpokenName; 
@property (nonatomic,readonly) char contactIsMe; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) char isEventAllDay; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_tips,nonatomic,readonly) NSArray * tips; 
@property (getter=_photos,nonatomic,readonly) NSArray * photos; 
@property (getter=_associatedApp,nonatomic,readonly) GEOAssociatedApp * associatedApp; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeResult,nonatomic,readonly) GEOPlaceResult * placeResult; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) char hasResolvablePartialInformation; 
@property (getter=_addressGeocodeAccuracy,nonatomic,readonly) int addressGeocodeAccuracy; 
@property (getter=_responseStatusIsIncomplete,nonatomic,readonly) char responseStatusIncomplete; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) char hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_isTransitDisplayFeature,nonatomic,readonly) char isTransitDisplayFeature; 
@property (getter=_hasTransit,nonatomic,readonly) char hasTransit; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOTransitAttribution> transitAttribution; 
@property (getter=_transitVehiclePosition,nonatomic,readonly) id<GEOTransitVehiclePosition> transitVehiclePosition; 
@property (getter=_hasFlyover,nonatomic,readonly) char hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_muninViewState,nonatomic,readonly) GEOMuninViewState * muninViewState; 
@property (getter=_storefrontInfo,nonatomic,readonly) GEOStorefrontInfo * storefrontInfo; 
@property (getter=_storefrontPresentationInfo,nonatomic,readonly) GEOStorefrontPresentationInfo * storefrontPresentationInfo; 
@property (getter=_hasMUID,nonatomic,readonly) char hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_identifier,nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (getter=_placeDisplayType,nonatomic,readonly) int placeDisplayType; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) char hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_priceDescription,nonatomic,readonly) GEOPriceDescription * priceDescription; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) char hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) char hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_resultSnippetLocationString,nonatomic,readonly) NSString * resultSnippetLocationString; 
@property (getter=_resultSnippetDistanceDisplayThreshold,nonatomic,readonly) unsigned resultSnippetDistanceDisplayThreshold; 
@property (getter=_childItems,nonatomic,readonly) NSArray * childItems; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) char hasAnyAmenities; 
@property (getter=_amenities,nonatomic,readonly) NSArray * amenities; 
@property (getter=_hasEncyclopedicInfo,nonatomic,readonly) char hasEncyclopedicInfo; 
@property (getter=_encyclopedicInfo,nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (getter=_hasTelephone,nonatomic,readonly) char hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_optsOutOfTelephoneAds,nonatomic,readonly) char optsOutOfTelephoneAds; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) char needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_poiPinpointURLString,nonatomic,readonly) NSString * poiPinpointURLString; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_poiCategory,nonatomic,readonly) NSString * poiCategory; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_mapsCategoryId,nonatomic,readonly) NSString * mapsCategoryId; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) char hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,readonly) NSArray * spatialMappedCategories; 
@property (nonatomic,readonly) NSArray * spatialMappedPlaceCategories; 
@property (nonatomic,readonly) char hasVenueCapacity; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (getter=_hasFeatureLink,nonatomic,readonly) char hasFeatureLink; 
@property (getter=_featureLink,nonatomic,readonly) GEORestaurantFeaturesLink * featureLink; 
@property (getter=_parsecSectionType,nonatomic,readonly) int parsecSectionType; 
@property (getter=_isStandaloneBrand,nonatomic,readonly) char isStandAloneBrand; 
@property (getter=_messageLink,nonatomic,readonly) GEOMessageLink * messageLink; 
@property (getter=_quickLinks,nonatomic,readonly) NSArray * quickLinks; 
@property (getter=_secondaryQuickLinks,nonatomic,readonly) NSArray * secondaryQuickLinks; 
@property (getter=_placeCollections,nonatomic,readonly) NSArray * placeCollections; 
@property (getter=_placeCollectionsIds,nonatomic,readonly) NSArray * placeCollectionsIds; 
@property (getter=_relatedPlaceList,nonatomic,readonly) GEORelatedPlaceList * relatedPlaceList; 
@property (getter=_placecardLayoutConfiguration,nonatomic,readonly) GEOPlacecardLayoutConfiguration * placecardLayoutConfiguration; 
@property (getter=_hasBrandMUID,nonatomic,readonly) char hasBrandMUID; 
@property (getter=_brandMUID,nonatomic,readonly) unsigned long long brandMUID; 
@property (nonatomic,readonly) GEOMapItemDetourInfo * detourInfo; 
@property (nonatomic,readonly) char hasExpiredComponents; 
@property (getter=_hasVenueFeatureType,nonatomic,readonly) char hasVenueFeatureType; 
@property (getter=_venueFeatureType,nonatomic,readonly) int venueFeatureType; 
@property (getter=_venueInfo,nonatomic,readonly) id<GEOMapItemVenueInfo> venueInfo; 
@property (getter=_browseCategories,nonatomic,readonly) NSArray * browseCategories; 
@property (getter=_placeDisplayStyle,nonatomic,readonly) int placeDisplayStyle; 
@property (getter=_annotatedItemList,nonatomic,readonly) id<GEOAnnotatedItemList> annotatedItemList; 
@property (getter=_hasOperatingHours,nonatomic,readonly) char hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) char hasCurrentOperatingHours; 
@property (getter=_hasBusinessHours,nonatomic,readonly) char hasBusinessHours; 
@property (getter=_businessHours,nonatomic,readonly) NSArray * businessHours; 
@property (getter=_hasLinkedServices,nonatomic,readonly) char hasLinkedServices; 
@property (getter=_linkedServices,nonatomic,readonly) NSArray * linkedServices; 
@property (nonatomic,readonly) NSData * externalTransitStationCode; 
@property (getter=_hasWifiFingerprintLabelType,nonatomic,readonly) char hasWifiFingerprintLabelType; 
@property (getter=_wifiFingerprintLabelType,nonatomic,readonly) int wifiFingerprintLabelType; 
@property (getter=_hasWifiFingerprintConfidence,nonatomic,readonly) char hasWifiFingerprintConfidence; 
@property (getter=_wifiFingerprintConfidence,nonatomic,readonly) unsigned wifiFingerprintConfidence; 
@property (getter=_hasWifiFingerprintLabelStatusCode,nonatomic,readonly) char hasWifiFingerprintLabelStatusCode; 
@property (getter=_wifiFingerprintLabelStatusCode,nonatomic,readonly) int wifiFingerprintLabelStatusCode; 
@property (getter=_containedPlace,nonatomic,readonly) GEOMapItemContainedPlace * containedPlace; 
@property (getter=_isInLinkedPlaceRelationship,nonatomic,readonly) char inLinkedPlaceRelationship; 
@property (getter=_hasGroundViewLocationId,nonatomic,readonly) char hasGroundViewLocationId; 
@property (getter=_groundViewLocationId,nonatomic,readonly) unsigned long long groundViewLocationId; 
@property (getter=_walletPlaceStyling,nonatomic,readonly) GEOStyleAttributes * walletPlaceStyling; 
@property (getter=_walletPlaceLocalizedString,nonatomic,readonly) NSString * walletPlaceLocalizedString; 
@property (getter=_walletPlaceLocalizedStringLocale,nonatomic,readonly) NSString * walletPlaceLocalizedStringLocale; 
@property (getter=_walletCategoryStyling,nonatomic,readonly) GEOStyleAttributes * walletCategoryStyling; 
@property (getter=_walletCategoryLocalizedString,nonatomic,readonly) NSString * walletCategoryLocalizedString; 
@property (getter=_walletCategoryLocalizedStringLocale,nonatomic,readonly) NSString * walletCategoryLocalizedStringLocale; 
@property (getter=_walletMapsCategoryIdentifier,nonatomic,readonly) NSString * walletMapsCategoryIdentifier; 
@property (getter=_walletCategoryIdentifier,nonatomic,readonly) NSString * walletCategoryIdentifier; 
@property (getter=_enableRAPLightweightFeedback,nonatomic,readonly) char enableRAPLightweightFeedback; 
@property (getter=_showSuggestAnEditButton,nonatomic,readonly) char showSuggestAnEditButton; 
@property (getter=_supportsAppleRatings,nonatomic,readonly) char supportsAppleRatings; 
@property (getter=_appleRatings,nonatomic,readonly) NSArray * appleRatings; 
@property (getter=_overallAppleRating,nonatomic,readonly) GEOAppleRating * overallRating; 
@property (getter=_hasPlaceQuestionnaire,nonatomic,readonly) char hasPlaceQuestionnaire; 
@property (getter=_placeQuestionnaire,nonatomic,readonly) GEOPlaceQuestionnaire * placeQuestionnaire; 
@property (getter=_identifierHistory,nonatomic,readonly) NSArray * identifierHistory; 
@property (getter=_canDownloadMorePhotos,nonatomic,readonly) char canDownloadMorePhotos; 
@property (getter=_totalPhotoCount,nonatomic,readonly) unsigned long long totalPhotoCount; 
@property (getter=_alternateSearchableNames,nonatomic,readonly) NSArray * alternateSearchableNames; 
@property (getter=_iso3166CountryCode,nonatomic,readonly) NSString * iso3166CountryCode; 
@property (getter=_iso3166SubdivisionCode,nonatomic,readonly) NSString * iso3166SubdivisionCode; 
@property (getter=_bestAvailableCountryCode,nonatomic,readonly) NSString * bestAvailableCountryCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)name;
-(char)isValid;
-(id)_identifier;
-(NSData *)encodedData;
-(GEOCoarseLocationLatLng)coordinate;
-(id)_vendorID;
-(NSString *)eventName;
-(unsigned long long)_muid;
-(NSArray *)areasOfInterest;
-(char)isEqualToMapItem:(id)arg1 ;
-(int)referenceFrame;
-(GEOCoarseLocationLatLng)centerCoordinate;
-(id)spokenNameForLocale:(id)arg1 ;
-(char)hasAmenityType:(int)arg1 ;
-(char)valueForAmenityType:(int)arg1 ;
-(id)_spokenAddressForLocale:(id)arg1 ;
-(id)_arrivalMapRegionForTransportType:(int)arg1 ;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(char)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(id)_asPlaceInfo;
-(id)_mapItemByStrippingOptionalData;
-(id)addressObject;
-(id)weatherDisplayName;
-(char)isDisputed;
-(GEOMapRegion *)displayMapRegion;
-(GEOMapRegion *)geoFenceMapRegion;
-(GEOAddress *)geoAddress;
-(NSDictionary *)addressDictionary;
-(NSTimeZone *)timezone;
-(GEOMapRegion *)displayMapRegionOrNil;
-(GEOMapRegion *)geoFenceMapRegionOrNil;
-(int)contactAddressType;
-(NSString *)contactName;
-(NSString *)contactSpokenName;
-(char)contactIsMe;
-(NSDate *)eventDate;
-(char)isEventAllDay;
-(id)_reviews;
-(id)_tips;
-(id)_photos;
-(id)_associatedApp;
-(id)_clientAttributes;
-(id)_place;
-(id)_placeResult;
-(id)_placeData;
-(int)_placeType;
-(id)_placeDataAsData;
-(char)_hasResolvablePartialInformation;
-(int)_addressGeocodeAccuracy;
-(char)_responseStatusIsIncomplete;
-(id)_roadAccessPoints;
-(char)_hasResultProviderID;
-(int)_resultProviderID;
-(char)_hasTransit;
-(id)_transitInfo;
-(id)_transitAttribution;
-(id)_transitVehiclePosition;
-(char)_hasFlyover;
-(id)_flyover;
-(id)_flyoverAnnouncementMessage;
-(char)_hasMUID;
-(char)_hasAreaInMeters;
-(double)_areaInMeters;
-(id)_businessURL;
-(id)_priceDescription;
-(char)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(char)_hasPriceRange;
-(unsigned)_priceRange;
-(id)_resultSnippetLocationString;
-(unsigned)_resultSnippetDistanceDisplayThreshold;
-(char)_hasAnyAmenities;
-(id)_amenities;
-(char)_hasEncyclopedicInfo;
-(id)_encyclopedicInfo;
-(char)_hasTelephone;
-(id)_telephone;
-(char)_optsOutOfTelephoneAds;
-(id)_disambiguationName;
-(unsigned long long)_openingHoursOptions;
-(char)_needsAttribution;
-(id)_webURL;
-(id)_providerURL;
-(id)_poiSurveyURLString;
-(id)_poiPinpointURLString;
-(id)_attribution;
-(id)_photosAttribution;
-(id)_reviewsAttribution;
-(id)_styleAttributes;
-(unsigned long long)_customIconID;
-(id)_additionalPlaceInfos;
-(char)_hasBusinessClaim;
-(id)_businessClaim;
-(NSArray *)spatialMappedCategories;
-(char)_hasFeatureLink;
-(id)_featureLink;
-(int)_parsecSectionType;
-(id)_messageLink;
-(id)_quickLinks;
-(id)_secondaryQuickLinks;
-(id)_placeCollections;
-(id)_relatedPlaceList;
-(id)_placecardLayoutConfiguration;
-(GEOMapItemDetourInfo *)detourInfo;
-(char)hasExpiredComponents;
-(char)_hasOperatingHours;
-(char)_hasCurrentOperatingHours;
-(NSData *)externalTransitStationCode;
-(id)initWithPlace:(id)arg1 ;
-(id)initWithPlaceResult:(id)arg1 ;
-(int)_recommendedTransportType;
-(char)_hasTravelTimeForTransportType:(int)arg1 ;
-(unsigned)_travelTimeForTransportType:(int)arg1 ;
-(unsigned)_travelDistanceForTransportType:(int)arg1 ;
-(id)_urlForPhotoWithUID:(id)arg1 ;
-(id)_urlForReview:(id)arg1 ;
-(id)_urlForWritingAReview;
-(id)_yelpID;
@end

