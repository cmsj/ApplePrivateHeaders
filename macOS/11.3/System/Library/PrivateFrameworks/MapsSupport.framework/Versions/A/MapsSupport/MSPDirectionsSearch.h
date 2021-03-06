/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOStorageRouteRequestStorage;

@interface MSPDirectionsSearch : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOStorageRouteRequestStorage* _routeRequestStorage;
	char _navigationInterrupted;
	SCD_Struct_MS3 _has;

}

@property (nonatomic,readonly) char hasRouteRequestStorage; 
@property (nonatomic,retain) GEOStorageRouteRequestStorage * routeRequestStorage;              //@synthesize routeRequestStorage=_routeRequestStorage - In the implementation block
@property (assign,nonatomic) char hasNavigationInterrupted; 
@property (assign,nonatomic) char navigationInterrupted;                                       //@synthesize navigationInterrupted=_navigationInterrupted - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(char)navigationInterrupted;
-(PBUnknownFields *)unknownFields;
-(void)setNavigationInterrupted:(char)arg1 ;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
-(char)hasRouteRequestStorage;
-(void)setHasNavigationInterrupted:(char)arg1 ;
-(char)hasNavigationInterrupted;
@end

