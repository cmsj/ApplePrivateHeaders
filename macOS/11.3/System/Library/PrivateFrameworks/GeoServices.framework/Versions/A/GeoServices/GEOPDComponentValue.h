/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDRoadAccessInfo, GEOPDAddressObject, GEOPDAddress, GEOPDAmenities, GEOPDAnnotatedItemList, GEOPDAssociatedApp, GEOPDBounds, GEOPDBrowseCategories, GEOPDBusinessClaim, GEOPDBusinessHours, GEOPDCaptionedPhoto, GEOPDCollectionIds, GEOPDContainedPlace, GEOPDEntity, GEOPDETA, GEOPDExternalAction, GEOPDFactoid, GEOPDFlyover, GEOPDGroundViewLabel, GEOPDHours, GEOPDIcon, GEOPDISO3166Code, GEOPDLinkedService, GEOPDLocationEvent, GEOPDMessageLink, GEOPDMiniBrowseCategories, GEOPDPhoto, GEOPDPlaceCollectionItem, GEOPDPlaceCollection, GEOPDPlaceInfo, GEOPDPlaceQuestionnaireResult, GEOPDPlacecardLayoutConfiguration, GEOPDPlacecardURL, GEOPDPoiEvent, GEOPDPriceDescription, GEOPDPrototypeContainer, GEOPDPublisher, GEOPDQuickLink, GEOPDRap, GEOPDRating, GEOPDRawAttribute, GEOPDRelatedPlace, GEOPDRestaurantReservationLink, GEOPDResultSnippet, GEOPDReview, GEOPDSimpleRestaurantMenuText, GEOPDSpatialLookupResult, GEOPDStorefrontPresentation, GEOPDStorefront, GEOStyleAttributes, GEOPDTextBlock, GEOPDTip, GEOPDTransitAttribution, GEOPDTransitIncident, GEOPDTransitInfoSnippet, GEOPDTransitInfo, GEOPDTransitSchedule, GEOPDTransitTripGeometry, GEOPDTransitTripStopTime, GEOPDTransitTripStop, GEOPBTransitVehiclePosition, GEOPDVenueInfo, GEOPDWifiFingerprint;

@interface GEOPDComponentValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDRoadAccessInfo* _accessInfo;
	GEOPDAddressObject* _addressObject;
	GEOPDAddress* _address;
	GEOPDAmenities* _amenities;
	GEOPDAnnotatedItemList* _annotatedItemList;
	GEOPDAssociatedApp* _associatedApp;
	GEOPDBounds* _bounds;
	GEOPDBrowseCategories* _browseCategories;
	GEOPDBusinessClaim* _businessClaim;
	GEOPDBusinessHours* _businessHours;
	GEOPDCaptionedPhoto* _captionedPhoto;
	GEOPDCollectionIds* _collectionIds;
	GEOPDContainedPlace* _containedPlace;
	GEOPDEntity* _entity;
	GEOPDETA* _eta;
	GEOPDExternalAction* _externalAction;
	GEOPDFactoid* _factoid;
	GEOPDFlyover* _flyover;
	GEOPDGroundViewLabel* _groundViewLabel;
	GEOPDHours* _hours;
	GEOPDIcon* _icon;
	GEOPDISO3166Code* _iso3166Code;
	GEOPDLinkedService* _linkedService;
	GEOPDLocationEvent* _locationEvent;
	GEOPDMessageLink* _messageLink;
	GEOPDMiniBrowseCategories* _miniPlaceBrowseCategories;
	GEOPDPhoto* _photo;
	GEOPDBrowseCategories* _placeBrowseCategories;
	GEOPDPlaceCollectionItem* _placeCollectionItem;
	GEOPDPlaceCollection* _placeCollection;
	GEOPDPlaceInfo* _placeInfo;
	GEOPDPlaceQuestionnaireResult* _placeQuestionnaire;
	GEOPDPlacecardLayoutConfiguration* _placecardLayoutConfiguration;
	GEOPDPlacecardURL* _placecardUrl;
	GEOPDPoiEvent* _poiEvent;
	GEOPDPriceDescription* _priceDescription;
	GEOPDPrototypeContainer* _prototypeContainer;
	GEOPDPublisher* _publisher;
	GEOPDQuickLink* _quickLink;
	GEOPDRap* _rap;
	GEOPDRating* _rating;
	GEOPDRawAttribute* _rawAttribute;
	GEOPDRelatedPlace* _relatedPlace;
	GEOPDRestaurantReservationLink* _restaurantReservationLink;
	GEOPDResultSnippet* _resultSnippet;
	GEOPDReview* _review;
	GEOPDSimpleRestaurantMenuText* _simpleRestaurantMenuText;
	GEOPDSpatialLookupResult* _spatialLookupResult;
	GEOPDStorefrontPresentation* _storefrontPresentation;
	GEOPDStorefront* _storefront;
	GEOStyleAttributes* _styleAttributes;
	GEOPDTextBlock* _textBlock;
	GEOPDTip* _tip;
	GEOPDTransitAttribution* _transitAttribution;
	GEOPDTransitIncident* _transitIncident;
	GEOPDTransitInfoSnippet* _transitInfoSnippet;
	GEOPDTransitInfo* _transitInfo;
	GEOPDTransitSchedule* _transitSchedule;
	GEOPDTransitTripGeometry* _transitTripGeometry;
	GEOPDTransitTripStopTime* _transitTripStopTime;
	GEOPDTransitTripStop* _transitTripStop;
	GEOPBTransitVehiclePosition* _transitVehiclePosition;
	GEOPDAmenities* _vendorAmenities;
	GEOPDVenueInfo* _venueInfo;
	GEOPDWifiFingerprint* _wifiFingerprint;

}

@property (nonatomic,readonly) char hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity; 
@property (nonatomic,readonly) char hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo; 
@property (nonatomic,readonly) char hasAccessInfo; 
@property (nonatomic,retain) GEOPDRoadAccessInfo * accessInfo; 
@property (nonatomic,readonly) char hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds; 
@property (nonatomic,readonly) char hasAddress; 
@property (nonatomic,retain) GEOPDAddress * address; 
@property (nonatomic,readonly) char hasRating; 
@property (nonatomic,retain) GEOPDRating * rating; 
@property (nonatomic,readonly) char hasReview; 
@property (nonatomic,retain) GEOPDReview * review; 
@property (nonatomic,readonly) char hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo; 
@property (nonatomic,readonly) char hasHours; 
@property (nonatomic,retain) GEOPDHours * hours; 
@property (nonatomic,readonly) char hasTransitInfo; 
@property (nonatomic,retain) GEOPDTransitInfo * transitInfo; 
@property (nonatomic,readonly) char hasTransitSchedule; 
@property (nonatomic,retain) GEOPDTransitSchedule * transitSchedule; 
@property (nonatomic,readonly) char hasEta; 
@property (nonatomic,retain) GEOPDETA * eta; 
@property (nonatomic,readonly) char hasFlyover; 
@property (nonatomic,retain) GEOPDFlyover * flyover; 
@property (nonatomic,readonly) char hasRawAttribute; 
@property (nonatomic,retain) GEOPDRawAttribute * rawAttribute; 
@property (nonatomic,readonly) char hasAmenities; 
@property (nonatomic,retain) GEOPDAmenities * amenities; 
@property (nonatomic,readonly) char hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) char hasTransitIncident; 
@property (nonatomic,retain) GEOPDTransitIncident * transitIncident; 
@property (nonatomic,readonly) char hasTextBlock; 
@property (nonatomic,retain) GEOPDTextBlock * textBlock; 
@property (nonatomic,readonly) char hasFactoid; 
@property (nonatomic,retain) GEOPDFactoid * factoid; 
@property (nonatomic,readonly) char hasTransitAttribution; 
@property (nonatomic,retain) GEOPDTransitAttribution * transitAttribution; 
@property (nonatomic,readonly) char hasBusinessClaim; 
@property (nonatomic,retain) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,readonly) char hasCaptionedPhoto; 
@property (nonatomic,retain) GEOPDCaptionedPhoto * captionedPhoto; 
@property (nonatomic,readonly) char hasTransitInfoSnippet; 
@property (nonatomic,retain) GEOPDTransitInfoSnippet * transitInfoSnippet; 
@property (nonatomic,readonly) char hasExternalAction; 
@property (nonatomic,retain) GEOPDExternalAction * externalAction; 
@property (nonatomic,readonly) char hasResultSnippet; 
@property (nonatomic,retain) GEOPDResultSnippet * resultSnippet; 
@property (nonatomic,readonly) char hasAddressObject; 
@property (nonatomic,retain) GEOPDAddressObject * addressObject; 
@property (nonatomic,readonly) char hasSimpleRestaurantMenuText; 
@property (nonatomic,retain) GEOPDSimpleRestaurantMenuText * simpleRestaurantMenuText; 
@property (nonatomic,readonly) char hasRestaurantReservationLink; 
@property (nonatomic,retain) GEOPDRestaurantReservationLink * restaurantReservationLink; 
@property (nonatomic,readonly) char hasSpatialLookupResult; 
@property (nonatomic,retain) GEOPDSpatialLookupResult * spatialLookupResult; 
@property (nonatomic,readonly) char hasTip; 
@property (nonatomic,retain) GEOPDTip * tip; 
@property (nonatomic,readonly) char hasPlacecardUrl; 
@property (nonatomic,retain) GEOPDPlacecardURL * placecardUrl; 
@property (nonatomic,readonly) char hasAssociatedApp; 
@property (nonatomic,retain) GEOPDAssociatedApp * associatedApp; 
@property (nonatomic,readonly) char hasMessageLink; 
@property (nonatomic,retain) GEOPDMessageLink * messageLink; 
@property (nonatomic,readonly) char hasQuickLink; 
@property (nonatomic,retain) GEOPDQuickLink * quickLink; 
@property (nonatomic,readonly) char hasRap; 
@property (nonatomic,retain) GEOPDRap * rap; 
@property (nonatomic,readonly) char hasLocationEvent; 
@property (nonatomic,retain) GEOPDLocationEvent * locationEvent; 
@property (nonatomic,readonly) char hasVenueInfo; 
@property (nonatomic,retain) GEOPDVenueInfo * venueInfo; 
@property (nonatomic,readonly) char hasContainedPlace; 
@property (nonatomic,retain) GEOPDContainedPlace * containedPlace; 
@property (nonatomic,readonly) char hasWifiFingerprint; 
@property (nonatomic,retain) GEOPDWifiFingerprint * wifiFingerprint; 
@property (nonatomic,readonly) char hasIcon; 
@property (nonatomic,retain) GEOPDIcon * icon; 
@property (nonatomic,readonly) char hasPriceDescription; 
@property (nonatomic,retain) GEOPDPriceDescription * priceDescription; 
@property (nonatomic,readonly) char hasBrowseCategories; 
@property (nonatomic,retain) GEOPDBrowseCategories * browseCategories; 
@property (nonatomic,readonly) char hasStorefront; 
@property (nonatomic,retain) GEOPDStorefront * storefront; 
@property (nonatomic,readonly) char hasGroundViewLabel; 
@property (nonatomic,retain) GEOPDGroundViewLabel * groundViewLabel; 
@property (nonatomic,readonly) char hasAnnotatedItemList; 
@property (nonatomic,retain) GEOPDAnnotatedItemList * annotatedItemList; 
@property (nonatomic,readonly) char hasPoiEvent; 
@property (nonatomic,retain) GEOPDPoiEvent * poiEvent; 
@property (nonatomic,readonly) char hasStorefrontPresentation; 
@property (nonatomic,retain) GEOPDStorefrontPresentation * storefrontPresentation; 
@property (nonatomic,readonly) char hasPlacecardLayoutConfiguration; 
@property (nonatomic,retain) GEOPDPlacecardLayoutConfiguration * placecardLayoutConfiguration; 
@property (nonatomic,readonly) char hasPrototypeContainer; 
@property (nonatomic,retain) GEOPDPrototypeContainer * prototypeContainer; 
@property (nonatomic,readonly) char hasTransitVehiclePosition; 
@property (nonatomic,retain) GEOPBTransitVehiclePosition * transitVehiclePosition; 
@property (nonatomic,readonly) char hasLinkedService; 
@property (nonatomic,retain) GEOPDLinkedService * linkedService; 
@property (nonatomic,readonly) char hasBusinessHours; 
@property (nonatomic,retain) GEOPDBusinessHours * businessHours; 
@property (nonatomic,readonly) char hasPlaceCollection; 
@property (nonatomic,retain) GEOPDPlaceCollection * placeCollection; 
@property (nonatomic,readonly) char hasRelatedPlace; 
@property (nonatomic,retain) GEOPDRelatedPlace * relatedPlace; 
@property (nonatomic,readonly) char hasTransitTripStop; 
@property (nonatomic,retain) GEOPDTransitTripStop * transitTripStop; 
@property (nonatomic,readonly) char hasTransitTripStopTime; 
@property (nonatomic,retain) GEOPDTransitTripStopTime * transitTripStopTime; 
@property (nonatomic,readonly) char hasTransitTripGeometry; 
@property (nonatomic,retain) GEOPDTransitTripGeometry * transitTripGeometry; 
@property (nonatomic,readonly) char hasPlaceBrowseCategories; 
@property (nonatomic,retain) GEOPDBrowseCategories * placeBrowseCategories; 
@property (nonatomic,readonly) char hasPublisher; 
@property (nonatomic,retain) GEOPDPublisher * publisher; 
@property (nonatomic,readonly) char hasMiniPlaceBrowseCategories; 
@property (nonatomic,retain) GEOPDMiniBrowseCategories * miniPlaceBrowseCategories; 
@property (nonatomic,readonly) char hasPlaceQuestionnaire; 
@property (nonatomic,retain) GEOPDPlaceQuestionnaireResult * placeQuestionnaire; 
@property (nonatomic,readonly) char hasPlaceCollectionItem; 
@property (nonatomic,retain) GEOPDPlaceCollectionItem * placeCollectionItem; 
@property (nonatomic,readonly) char hasCollectionIds; 
@property (nonatomic,retain) GEOPDCollectionIds * collectionIds; 
@property (nonatomic,readonly) char hasIso3166Code; 
@property (nonatomic,retain) GEOPDISO3166Code * iso3166Code; 
@property (nonatomic,readonly) char hasVendorAmenities; 
@property (nonatomic,retain) GEOPDAmenities * vendorAmenities; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDStorefront *)storefront;
-(id)dictionaryRepresentation;
-(GEOPDHours *)hours;
-(GEOPDAddress *)address;
-(void)setAddress:(GEOPDAddress *)arg1 ;
-(GEOPDBounds *)bounds;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(void)setIcon:(GEOPDIcon *)arg1 ;
-(GEOPDIcon *)icon;
-(char)hasIcon;
-(GEOPDEntity *)entity;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOPDPublisher *)publisher;
-(void)setPublisher:(GEOPDPublisher *)arg1 ;
-(void)setRating:(GEOPDRating *)arg1 ;
-(GEOPDRating *)rating;
-(GEOPDAddressObject *)addressObject;
-(GEOPDAssociatedApp *)associatedApp;
-(GEOPDTransitInfo *)transitInfo;
-(GEOPDTransitAttribution *)transitAttribution;
-(GEOPBTransitVehiclePosition *)transitVehiclePosition;
-(char)hasFlyover;
-(GEOPDFlyover *)flyover;
-(GEOPDPriceDescription *)priceDescription;
-(GEOPDAmenities *)amenities;
-(GEOStyleAttributes *)styleAttributes;
-(char)hasBusinessClaim;
-(GEOPDBusinessClaim *)businessClaim;
-(GEOPDMessageLink *)messageLink;
-(GEOPDPlacecardLayoutConfiguration *)placecardLayoutConfiguration;
-(GEOPDVenueInfo *)venueInfo;
-(GEOPDBrowseCategories *)browseCategories;
-(GEOPDAnnotatedItemList *)annotatedItemList;
-(char)hasBusinessHours;
-(GEOPDBusinessHours *)businessHours;
-(GEOPDContainedPlace *)containedPlace;
-(char)hasPlaceQuestionnaire;
-(GEOPDPlaceQuestionnaireResult *)placeQuestionnaire;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(GEOPDPhoto *)photo;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOPDCollectionIds *)collectionIds;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasPublisher;
-(char)hasAddress;
-(void)setBusinessHours:(GEOPDBusinessHours *)arg1 ;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(void)setAddressObject:(GEOPDAddressObject *)arg1 ;
-(char)hasAddressObject;
-(void)setCollectionIds:(GEOPDCollectionIds *)arg1 ;
-(char)hasStyleAttributes;
-(char)hasTextBlock;
-(char)hasPlaceCollection;
-(GEOPDPlaceCollection *)placeCollection;
-(char)hasPlaceCollectionItem;
-(GEOPDPlaceCollectionItem *)placeCollectionItem;
-(GEOPDRestaurantReservationLink *)restaurantReservationLink;
-(void)setRestaurantReservationLink:(GEOPDRestaurantReservationLink *)arg1 ;
-(GEOPDPlaceInfo *)placeInfo;
-(char)hasHours;
-(char)hasReview;
-(GEOPDReview *)review;
-(char)hasTip;
-(GEOPDTip *)tip;
-(char)hasPhoto;
-(char)hasCaptionedPhoto;
-(GEOPDCaptionedPhoto *)captionedPhoto;
-(GEOPDRoadAccessInfo *)accessInfo;
-(GEOPDResultSnippet *)resultSnippet;
-(GEOPDTransitInfoSnippet *)transitInfoSnippet;
-(GEOPDTransitTripStop *)transitTripStop;
-(GEOPDTransitTripStopTime *)transitTripStopTime;
-(GEOPDTransitTripGeometry *)transitTripGeometry;
-(GEOPDTransitSchedule *)transitSchedule;
-(char)hasTransitIncident;
-(GEOPDTransitIncident *)transitIncident;
-(GEOPDSpatialLookupResult *)spatialLookupResult;
-(GEOPDISO3166Code *)iso3166Code;
-(char)hasPlaceInfo;
-(char)hasEntity;
-(GEOPDTextBlock *)textBlock;
-(char)hasFactoid;
-(GEOPDFactoid *)factoid;
-(GEOPDQuickLink *)quickLink;
-(char)hasRelatedPlace;
-(GEOPDRelatedPlace *)relatedPlace;
-(GEOPDLinkedService *)linkedService;
-(void)setHours:(GEOPDHours *)arg1 ;
-(GEOPDETA *)eta;
-(GEOPDRawAttribute *)rawAttribute;
-(GEOPDExternalAction *)externalAction;
-(GEOPDSimpleRestaurantMenuText *)simpleRestaurantMenuText;
-(GEOPDPlacecardURL *)placecardUrl;
-(GEOPDRap *)rap;
-(GEOPDLocationEvent *)locationEvent;
-(GEOPDWifiFingerprint *)wifiFingerprint;
-(GEOPDGroundViewLabel *)groundViewLabel;
-(GEOPDPoiEvent *)poiEvent;
-(GEOPDStorefrontPresentation *)storefrontPresentation;
-(GEOPDPrototypeContainer *)prototypeContainer;
-(GEOPDBrowseCategories *)placeBrowseCategories;
-(GEOPDMiniBrowseCategories *)miniPlaceBrowseCategories;
-(GEOPDAmenities *)vendorAmenities;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(void)setAccessInfo:(GEOPDRoadAccessInfo *)arg1 ;
-(void)setReview:(GEOPDReview *)arg1 ;
-(void)setTransitInfo:(GEOPDTransitInfo *)arg1 ;
-(void)setTransitSchedule:(GEOPDTransitSchedule *)arg1 ;
-(void)setEta:(GEOPDETA *)arg1 ;
-(void)setFlyover:(GEOPDFlyover *)arg1 ;
-(void)setRawAttribute:(GEOPDRawAttribute *)arg1 ;
-(void)setAmenities:(GEOPDAmenities *)arg1 ;
-(void)setTransitIncident:(GEOPDTransitIncident *)arg1 ;
-(void)setTextBlock:(GEOPDTextBlock *)arg1 ;
-(void)setFactoid:(GEOPDFactoid *)arg1 ;
-(void)setTransitAttribution:(GEOPDTransitAttribution *)arg1 ;
-(void)setBusinessClaim:(GEOPDBusinessClaim *)arg1 ;
-(void)setCaptionedPhoto:(GEOPDCaptionedPhoto *)arg1 ;
-(void)setTransitInfoSnippet:(GEOPDTransitInfoSnippet *)arg1 ;
-(void)setExternalAction:(GEOPDExternalAction *)arg1 ;
-(void)setResultSnippet:(GEOPDResultSnippet *)arg1 ;
-(void)setSimpleRestaurantMenuText:(GEOPDSimpleRestaurantMenuText *)arg1 ;
-(void)setSpatialLookupResult:(GEOPDSpatialLookupResult *)arg1 ;
-(void)setTip:(GEOPDTip *)arg1 ;
-(void)setPlacecardUrl:(GEOPDPlacecardURL *)arg1 ;
-(void)setAssociatedApp:(GEOPDAssociatedApp *)arg1 ;
-(void)setMessageLink:(GEOPDMessageLink *)arg1 ;
-(void)setQuickLink:(GEOPDQuickLink *)arg1 ;
-(void)setRap:(GEOPDRap *)arg1 ;
-(void)setLocationEvent:(GEOPDLocationEvent *)arg1 ;
-(void)setVenueInfo:(GEOPDVenueInfo *)arg1 ;
-(void)setContainedPlace:(GEOPDContainedPlace *)arg1 ;
-(void)setWifiFingerprint:(GEOPDWifiFingerprint *)arg1 ;
-(void)setPriceDescription:(GEOPDPriceDescription *)arg1 ;
-(void)setBrowseCategories:(GEOPDBrowseCategories *)arg1 ;
-(void)setStorefront:(GEOPDStorefront *)arg1 ;
-(void)setGroundViewLabel:(GEOPDGroundViewLabel *)arg1 ;
-(void)setAnnotatedItemList:(GEOPDAnnotatedItemList *)arg1 ;
-(void)setPoiEvent:(GEOPDPoiEvent *)arg1 ;
-(void)setStorefrontPresentation:(GEOPDStorefrontPresentation *)arg1 ;
-(void)setPlacecardLayoutConfiguration:(GEOPDPlacecardLayoutConfiguration *)arg1 ;
-(void)setPrototypeContainer:(GEOPDPrototypeContainer *)arg1 ;
-(void)setTransitVehiclePosition:(GEOPBTransitVehiclePosition *)arg1 ;
-(void)setLinkedService:(GEOPDLinkedService *)arg1 ;
-(void)setPlaceCollection:(GEOPDPlaceCollection *)arg1 ;
-(void)setRelatedPlace:(GEOPDRelatedPlace *)arg1 ;
-(void)setTransitTripStop:(GEOPDTransitTripStop *)arg1 ;
-(void)setTransitTripStopTime:(GEOPDTransitTripStopTime *)arg1 ;
-(void)setTransitTripGeometry:(GEOPDTransitTripGeometry *)arg1 ;
-(void)setPlaceBrowseCategories:(GEOPDBrowseCategories *)arg1 ;
-(void)setMiniPlaceBrowseCategories:(GEOPDMiniBrowseCategories *)arg1 ;
-(void)setPlaceQuestionnaire:(GEOPDPlaceQuestionnaireResult *)arg1 ;
-(void)setPlaceCollectionItem:(GEOPDPlaceCollectionItem *)arg1 ;
-(void)setIso3166Code:(GEOPDISO3166Code *)arg1 ;
-(void)setVendorAmenities:(GEOPDAmenities *)arg1 ;
-(char)hasAccessInfo;
-(char)hasBounds;
-(char)hasRating;
-(char)hasTransitInfo;
-(char)hasTransitSchedule;
-(char)hasEta;
-(char)hasRawAttribute;
-(char)hasAmenities;
-(char)hasTransitAttribution;
-(char)hasTransitInfoSnippet;
-(char)hasExternalAction;
-(char)hasResultSnippet;
-(char)hasSimpleRestaurantMenuText;
-(char)hasRestaurantReservationLink;
-(char)hasSpatialLookupResult;
-(char)hasPlacecardUrl;
-(char)hasAssociatedApp;
-(char)hasMessageLink;
-(char)hasQuickLink;
-(char)hasRap;
-(char)hasLocationEvent;
-(char)hasVenueInfo;
-(char)hasContainedPlace;
-(char)hasWifiFingerprint;
-(char)hasPriceDescription;
-(char)hasBrowseCategories;
-(char)hasStorefront;
-(char)hasGroundViewLabel;
-(char)hasAnnotatedItemList;
-(char)hasPoiEvent;
-(char)hasStorefrontPresentation;
-(char)hasPlacecardLayoutConfiguration;
-(char)hasPrototypeContainer;
-(char)hasTransitVehiclePosition;
-(char)hasLinkedService;
-(char)hasTransitTripStop;
-(char)hasTransitTripStopTime;
-(char)hasTransitTripGeometry;
-(char)hasPlaceBrowseCategories;
-(char)hasMiniPlaceBrowseCategories;
-(char)hasCollectionIds;
-(char)hasIso3166Code;
-(char)hasVendorAmenities;
@end

