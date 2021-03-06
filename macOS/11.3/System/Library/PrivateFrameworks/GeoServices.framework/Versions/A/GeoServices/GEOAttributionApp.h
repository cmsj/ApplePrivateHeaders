/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOAttributionApp : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _appBundleIdentifier;
	NSMutableArray* _handledSchemes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _restaurantReservationExtensionSupport;
	char _supportsRestaurantQueueing;
	char _supportsRestaurantReservations;
	struct {
		unsigned has_restaurantReservationExtensionSupport : 1;
		unsigned has_supportsRestaurantQueueing : 1;
		unsigned has_supportsRestaurantReservations : 1;
		unsigned read_appBundleIdentifier : 1;
		unsigned read_handledSchemes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * appBundleIdentifier; 
@property (nonatomic,retain) NSMutableArray * handledSchemes; 
@property (assign,nonatomic) char hasSupportsRestaurantReservations; 
@property (assign,nonatomic) char supportsRestaurantReservations; 
@property (assign,nonatomic) char hasSupportsRestaurantQueueing; 
@property (assign,nonatomic) char supportsRestaurantQueueing; 
@property (assign,nonatomic) char hasRestaurantReservationExtensionSupport; 
@property (assign,nonatomic) int restaurantReservationExtensionSupport; 
+(char)isValid:(id)arg1 ;
+(Class)handledSchemesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setRestaurantReservationExtensionSupport:(int)arg1 ;
-(int)restaurantReservationExtensionSupport;
-(NSString *)appBundleIdentifier;
-(NSMutableArray *)handledSchemes;
-(void)addHandledSchemes:(id)arg1 ;
-(void)setSupportsRestaurantReservations:(char)arg1 ;
-(void)setSupportsRestaurantQueueing:(char)arg1 ;
-(unsigned long long)handledSchemesCount;
-(void)clearHandledSchemes;
-(id)handledSchemesAtIndex:(unsigned long long)arg1 ;
-(void)setHandledSchemes:(NSMutableArray *)arg1 ;
-(char)supportsRestaurantReservations;
-(void)setHasSupportsRestaurantReservations:(char)arg1 ;
-(char)hasSupportsRestaurantReservations;
-(char)supportsRestaurantQueueing;
-(void)setHasSupportsRestaurantQueueing:(char)arg1 ;
-(char)hasSupportsRestaurantQueueing;
-(void)setHasRestaurantReservationExtensionSupport:(char)arg1 ;
-(char)hasRestaurantReservationExtensionSupport;
-(id)restaurantReservationExtensionSupportAsString:(int)arg1 ;
-(int)StringAsRestaurantReservationExtensionSupport:(id)arg1 ;
@end

