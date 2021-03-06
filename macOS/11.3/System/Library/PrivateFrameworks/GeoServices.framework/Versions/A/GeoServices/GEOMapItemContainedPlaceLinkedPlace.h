/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class GEOPDLinkedPlace, GEOMapItemIdentifier, GEOFeatureStyleAttributes;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {

	GEOPDLinkedPlace* _linkedPlace;
	GEOMapItemIdentifier* _identifier;
	GEOFeatureStyleAttributes* _styleAttributes;

}
-(id)description;
-(id)name;
-(char)isValid;
-(id)_identifier;
-(GEOCoarseLocationLatLng)coordinate;
-(unsigned long long)_muid;
-(int)referenceFrame;
-(char)_hasResolvablePartialInformation;
-(char)_responseStatusIsIncomplete;
-(char)_hasResultProviderID;
-(int)_resultProviderID;
-(char)_hasMUID;
-(id)_styleAttributes;
-(char)_isInLinkedPlaceRelationship;
-(id)initWithLinkedPlace:(id)arg1 ;
@end

