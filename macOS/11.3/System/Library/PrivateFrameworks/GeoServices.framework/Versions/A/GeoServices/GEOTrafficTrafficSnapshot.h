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

@class PBDataReader, NSMutableArray, GEOTrafficSnapshotMetaData;

@interface GEOTrafficTrafficSnapshot : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _colors;
	NSMutableArray* _incidents;
	NSMutableArray* _predictedPaces;
	unsigned long long _receivedTime;
	GEOTrafficSnapshotMetaData* _snapshotMetaData;
	NSMutableArray* _speeds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_receivedTime : 1;
		unsigned read_colors : 1;
		unsigned read_incidents : 1;
		unsigned read_predictedPaces : 1;
		unsigned read_snapshotMetaData : 1;
		unsigned read_speeds : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasSnapshotMetaData; 
@property (nonatomic,retain) GEOTrafficSnapshotMetaData * snapshotMetaData; 
@property (nonatomic,retain) NSMutableArray * speeds; 
@property (nonatomic,retain) NSMutableArray * incidents; 
@property (nonatomic,retain) NSMutableArray * colors; 
@property (assign,nonatomic) char hasReceivedTime; 
@property (assign,nonatomic) unsigned long long receivedTime; 
@property (nonatomic,retain) NSMutableArray * predictedPaces; 
+(char)isValid:(id)arg1 ;
+(Class)incidentsType;
+(Class)speedsType;
+(Class)colorsType;
+(Class)predictedPacesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setColors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)colors;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addIncidents:(id)arg1 ;
-(void)addSpeeds:(id)arg1 ;
-(unsigned long long)incidentsCount;
-(void)clearIncidents;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)speedsCount;
-(void)clearSpeeds;
-(id)speedsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)incidents;
-(void)setIncidents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)speeds;
-(void)setSpeeds:(NSMutableArray *)arg1 ;
-(GEOTrafficSnapshotMetaData *)snapshotMetaData;
-(void)setSnapshotMetaData:(GEOTrafficSnapshotMetaData *)arg1 ;
-(void)setReceivedTime:(unsigned long long)arg1 ;
-(char)hasSnapshotMetaData;
-(unsigned long long)receivedTime;
-(void)setHasReceivedTime:(char)arg1 ;
-(char)hasReceivedTime;
-(NSMutableArray *)predictedPaces;
-(void)setPredictedPaces:(NSMutableArray *)arg1 ;
-(void)addColors:(id)arg1 ;
-(void)addPredictedPaces:(id)arg1 ;
-(unsigned long long)colorsCount;
-(void)clearColors;
-(id)colorsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)predictedPacesCount;
-(void)clearPredictedPaces;
-(id)predictedPacesAtIndex:(unsigned long long)arg1 ;
@end

