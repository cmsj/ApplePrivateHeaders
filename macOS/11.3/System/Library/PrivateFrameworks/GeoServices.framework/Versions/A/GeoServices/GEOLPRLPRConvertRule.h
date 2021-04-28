/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOLPRLPRConvertRule : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _fillRules;
	NSMutableArray* _mapRules;
	NSMutableArray* _pickupRules;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _validEndTime;
	unsigned _validStartTime;
	struct {
		unsigned has_validEndTime : 1;
		unsigned has_validStartTime : 1;
		unsigned read_fillRules : 1;
		unsigned read_mapRules : 1;
		unsigned read_pickupRules : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * pickupRules; 
@property (nonatomic,retain) NSMutableArray * mapRules; 
@property (nonatomic,retain) NSMutableArray * fillRules; 
@property (assign,nonatomic) char hasValidStartTime; 
@property (assign,nonatomic) unsigned validStartTime; 
@property (assign,nonatomic) char hasValidEndTime; 
@property (assign,nonatomic) unsigned validEndTime; 
+(char)isValid:(id)arg1 ;
+(Class)pickupRuleType;
+(Class)mapRuleType;
+(Class)fillRuleType;
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
-(void)addPickupRule:(id)arg1 ;
-(void)addMapRule:(id)arg1 ;
-(void)addFillRule:(id)arg1 ;
-(void)setValidStartTime:(unsigned)arg1 ;
-(void)setValidEndTime:(unsigned)arg1 ;
-(unsigned long long)pickupRulesCount;
-(void)clearPickupRules;
-(id)pickupRuleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mapRulesCount;
-(void)clearMapRules;
-(id)mapRuleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fillRulesCount;
-(void)clearFillRules;
-(id)fillRuleAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pickupRules;
-(void)setPickupRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mapRules;
-(void)setMapRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fillRules;
-(void)setFillRules:(NSMutableArray *)arg1 ;
-(unsigned)validStartTime;
-(void)setHasValidStartTime:(char)arg1 ;
-(char)hasValidStartTime;
-(unsigned)validEndTime;
-(void)setHasValidEndTime:(char)arg1 ;
-(char)hasValidEndTime;
@end
