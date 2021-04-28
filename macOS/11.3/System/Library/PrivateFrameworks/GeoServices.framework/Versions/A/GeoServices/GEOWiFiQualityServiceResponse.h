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

@class PBDataReader, NSMutableArray;

@interface GEOWiFiQualityServiceResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _locationResults;
	NSMutableArray* _networkResults;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCode;
	struct {
		unsigned has_statusCode : 1;
		unsigned read_locationResults : 1;
		unsigned read_networkResults : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * locationResults; 
@property (nonatomic,retain) NSMutableArray * networkResults; 
+(char)isValid:(id)arg1 ;
+(Class)locationResultsType;
+(Class)networkResultsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(char)arg1 ;
-(char)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(NSMutableArray *)networkResults;
-(void)addLocationResults:(id)arg1 ;
-(void)addNetworkResults:(id)arg1 ;
-(unsigned long long)locationResultsCount;
-(void)clearLocationResults;
-(id)locationResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)networkResultsCount;
-(void)clearNetworkResults;
-(id)networkResultsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)locationResults;
-(void)setLocationResults:(NSMutableArray *)arg1 ;
-(void)setNetworkResults:(NSMutableArray *)arg1 ;
@end
