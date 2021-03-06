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

@class PBDataReader, NSMutableArray;

@interface GEOLPRWorld : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _powerTypes;
	NSMutableArray* _regions;
	NSMutableArray* _vehicleTypes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_powerTypes : 1;
		unsigned read_regions : 1;
		unsigned read_vehicleTypes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * regions; 
@property (nonatomic,retain) NSMutableArray * powerTypes; 
@property (nonatomic,retain) NSMutableArray * vehicleTypes; 
+(char)isValid:(id)arg1 ;
+(Class)regionsType;
+(Class)powerTypesType;
+(Class)vehicleTypesType;
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
-(NSMutableArray *)regions;
-(void)clearRegions;
-(void)readAll:(char)arg1 ;
-(unsigned long long)regionsCount;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(void)addRegions:(id)arg1 ;
-(id)regionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)powerTypesCount;
-(void)clearPowerTypes;
-(unsigned long long)vehicleTypesCount;
-(void)clearVehicleTypes;
-(NSMutableArray *)powerTypes;
-(void)setPowerTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)vehicleTypes;
-(void)setVehicleTypes:(NSMutableArray *)arg1 ;
-(void)addPowerTypes:(id)arg1 ;
-(void)addVehicleTypes:(id)arg1 ;
-(id)powerTypesAtIndex:(unsigned long long)arg1 ;
-(id)vehicleTypesAtIndex:(unsigned long long)arg1 ;
@end

