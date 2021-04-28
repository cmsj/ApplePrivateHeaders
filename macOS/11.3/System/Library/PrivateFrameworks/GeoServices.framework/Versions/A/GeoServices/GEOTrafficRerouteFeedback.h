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

@class PBDataReader, NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSData* _oldRouteID;
	NSMutableArray* _oldRouteIncidents;
	NSData* _reroutedRouteID;
	NSData* _responseId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _actionType;
	int _alertType;
	unsigned _oldRouteHistoricTravelTime;
	unsigned _oldRouteTravelTime;
	int _rerouteType;
	unsigned _reroutedRouteHistoricTravelTime;
	unsigned _reroutedRouteTravelTime;
	char _backgrounded;
	struct {
		unsigned has_actionType : 1;
		unsigned has_alertType : 1;
		unsigned has_oldRouteHistoricTravelTime : 1;
		unsigned has_oldRouteTravelTime : 1;
		unsigned has_rerouteType : 1;
		unsigned has_reroutedRouteHistoricTravelTime : 1;
		unsigned has_reroutedRouteTravelTime : 1;
		unsigned has_backgrounded : 1;
		unsigned read_oldRouteID : 1;
		unsigned read_oldRouteIncidents : 1;
		unsigned read_reroutedRouteID : 1;
		unsigned read_responseId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasOldRouteTravelTime; 
@property (assign,nonatomic) unsigned oldRouteTravelTime; 
@property (assign,nonatomic) char hasReroutedRouteTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteTravelTime; 
@property (assign,nonatomic) char hasOldRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned oldRouteHistoricTravelTime; 
@property (assign,nonatomic) char hasReroutedRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteHistoricTravelTime; 
@property (nonatomic,retain) NSMutableArray * oldRouteIncidents; 
@property (nonatomic,readonly) char hasOldRouteID; 
@property (nonatomic,retain) NSData * oldRouteID; 
@property (nonatomic,readonly) char hasReroutedRouteID; 
@property (nonatomic,retain) NSData * reroutedRouteID; 
@property (assign,nonatomic) char hasActionType; 
@property (assign,nonatomic) int actionType; 
@property (assign,nonatomic) char hasAlertType; 
@property (assign,nonatomic) int alertType; 
@property (assign,nonatomic) char hasBackgrounded; 
@property (assign,nonatomic) char backgrounded; 
@property (assign,nonatomic) char hasRerouteType; 
@property (assign,nonatomic) int rerouteType; 
@property (nonatomic,readonly) char hasResponseId; 
@property (nonatomic,retain) NSData * responseId; 
+(char)isValid:(id)arg1 ;
+(Class)oldRouteIncidentsType;
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
-(int)alertType;
-(void)setAlertType:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)responseId;
-(void)setResponseId:(NSData *)arg1 ;
-(char)hasResponseId;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)setHasActionType:(char)arg1 ;
-(char)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(void)setHasAlertType:(char)arg1 ;
-(char)hasAlertType;
-(id)alertTypeAsString:(int)arg1 ;
-(int)StringAsAlertType:(id)arg1 ;
-(NSData *)oldRouteID;
-(NSData *)reroutedRouteID;
-(void)setOldRouteTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteTravelTime:(unsigned)arg1 ;
-(void)setOldRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)addOldRouteIncidents:(id)arg1 ;
-(void)setOldRouteID:(NSData *)arg1 ;
-(void)setReroutedRouteID:(NSData *)arg1 ;
-(unsigned long long)oldRouteIncidentsCount;
-(void)clearOldRouteIncidents;
-(id)oldRouteIncidentsAtIndex:(unsigned long long)arg1 ;
-(unsigned)oldRouteTravelTime;
-(void)setHasOldRouteTravelTime:(char)arg1 ;
-(char)hasOldRouteTravelTime;
-(unsigned)reroutedRouteTravelTime;
-(void)setHasReroutedRouteTravelTime:(char)arg1 ;
-(char)hasReroutedRouteTravelTime;
-(unsigned)oldRouteHistoricTravelTime;
-(void)setHasOldRouteHistoricTravelTime:(char)arg1 ;
-(char)hasOldRouteHistoricTravelTime;
-(unsigned)reroutedRouteHistoricTravelTime;
-(void)setHasReroutedRouteHistoricTravelTime:(char)arg1 ;
-(char)hasReroutedRouteHistoricTravelTime;
-(NSMutableArray *)oldRouteIncidents;
-(void)setOldRouteIncidents:(NSMutableArray *)arg1 ;
-(char)hasOldRouteID;
-(char)hasReroutedRouteID;
-(void)setBackgrounded:(char)arg1 ;
-(void)setRerouteType:(int)arg1 ;
-(char)backgrounded;
-(void)setHasBackgrounded:(char)arg1 ;
-(char)hasBackgrounded;
-(int)rerouteType;
-(void)setHasRerouteType:(char)arg1 ;
-(char)hasRerouteType;
-(id)rerouteTypeAsString:(int)arg1 ;
-(int)StringAsRerouteType:(id)arg1 ;
@end
