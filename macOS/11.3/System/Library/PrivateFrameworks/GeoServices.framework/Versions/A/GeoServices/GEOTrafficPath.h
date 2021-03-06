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

@class PBDataReader, NSMutableArray, NSData;

@interface GEOTrafficPath : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE69* _continuingRoadIds;
	SCD_Struct_GE69* _roadIds;
	NSMutableArray* _geometrys;
	NSData* _openlr;
	long long _pathletId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _endOffset;
	float _startOffset;
	struct {
		unsigned has_pathletId : 1;
		unsigned has_endOffset : 1;
		unsigned has_startOffset : 1;
		unsigned read_continuingRoadIds : 1;
		unsigned read_roadIds : 1;
		unsigned read_geometrys : 1;
		unsigned read_openlr : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasOpenlr; 
@property (nonatomic,retain) NSData * openlr; 
@property (nonatomic,readonly) unsigned long long roadIdsCount; 
@property (nonatomic,readonly) long long* roadIds; 
@property (assign,nonatomic) char hasStartOffset; 
@property (assign,nonatomic) float startOffset; 
@property (assign,nonatomic) char hasEndOffset; 
@property (assign,nonatomic) float endOffset; 
@property (nonatomic,readonly) unsigned long long continuingRoadIdsCount; 
@property (nonatomic,readonly) long long* continuingRoadIds; 
@property (assign,nonatomic) char hasPathletId; 
@property (assign,nonatomic) long long pathletId; 
@property (nonatomic,retain) NSMutableArray * geometrys; 
+(Class)geometryType;
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(float)startOffset;
-(float)endOffset;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)openlr;
-(void)setStartOffset:(float)arg1 ;
-(void)setEndOffset:(float)arg1 ;
-(void)setOpenlr:(NSData *)arg1 ;
-(void)setHasStartOffset:(char)arg1 ;
-(char)hasStartOffset;
-(void)setHasEndOffset:(char)arg1 ;
-(char)hasEndOffset;
-(char)hasOpenlr;
-(void)addRoadId:(long long)arg1 ;
-(void)addContinuingRoadId:(long long)arg1 ;
-(void)setPathletId:(long long)arg1 ;
-(void)addGeometry:(id)arg1 ;
-(unsigned long long)roadIdsCount;
-(void)clearRoadIds;
-(long long)roadIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)continuingRoadIdsCount;
-(void)clearContinuingRoadIds;
-(long long)continuingRoadIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)geometrysCount;
-(void)clearGeometrys;
-(id)geometryAtIndex:(unsigned long long)arg1 ;
-(long long*)roadIds;
-(void)setRoadIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(long long*)continuingRoadIds;
-(void)setContinuingRoadIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(long long)pathletId;
-(void)setHasPathletId:(char)arg1 ;
-(char)hasPathletId;
-(NSMutableArray *)geometrys;
-(void)setGeometrys:(NSMutableArray *)arg1 ;
@end

