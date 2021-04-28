/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOPDMapsIdentifier, NSData;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {

	GEOPDMapsIdentifier* _mapsIdentifier;

}

@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) int resultProviderID; 
@property (getter=hasCoordinate,nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,readonly) NSData * comparableRepresentation; 
+(char)supportsSecureCoding;
+(id)mapItemIdentifiersFromMapsIdentifiers:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOCoarseLocationLatLng)coordinate;
-(unsigned long long)muid;
-(int)resultProviderID;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithMapsIdentifier:(id)arg1 ;
-(char)hasCoordinate;
-(id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(GEOCoarseLocationLatLng)arg3 ;
-(id)initWithPlace:(id)arg1 ;
-(char)isEqualToGEOMapItemIdentifier:(id)arg1 ;
-(id)initWithXPCCoder:(id)arg1 ;
-(void)encodeWithXPCCoder:(id)arg1 ;
-(id)initWithMUID:(unsigned long long)arg1 ;
-(id)initWithMUID:(unsigned long long)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 ;
-(id)initWithBasemapId:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(GEOCoarseLocationLatLng)arg3 ;
-(id)mapsIdentifier;
-(id)shortDebugDescription;
-(NSData *)comparableRepresentation;
@end
