/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOComposedEnrouteNotice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteAnnotation, GEOLatLng, GEOPBTransitArtwork, GEOMiniCard;

@interface GEOComposedRouteAnnotation : GEOComposedEnrouteNotice <NSSecureCoding> {

	GEORouteAnnotation* _annotation;
	GEOLatLng* _derivedPosition;

}

@property (nonatomic,readonly) GEOPBTransitArtwork * artwork; 
@property (nonatomic,readonly) GEOMiniCard * infoCard; 
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)position;
-(GEOMiniCard *)infoCard;
-(GEOPBTransitArtwork *)artwork;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 annotation:(id)arg4 onRoute:(id)arg5 ;
@end

