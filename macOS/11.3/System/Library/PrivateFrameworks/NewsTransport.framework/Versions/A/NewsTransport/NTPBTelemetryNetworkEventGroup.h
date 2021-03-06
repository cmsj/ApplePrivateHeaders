/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBTelemetryNetworkEventGroup : PBCodable <NSCopying> {

	int _cellularRadioAccessTechnology;
	int _eventType;
	NSMutableArray* _failures;
	NSString* _respondingPop;
	NSMutableArray* _successes;
	char _wifiReachabilityStatus;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) char hasEventType; 
@property (assign,nonatomic) int eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) char hasWifiReachabilityStatus; 
@property (assign,nonatomic) char wifiReachabilityStatus;                        //@synthesize wifiReachabilityStatus=_wifiReachabilityStatus - In the implementation block
@property (assign,nonatomic) char hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                  //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (nonatomic,readonly) char hasRespondingPop; 
@property (nonatomic,retain) NSString * respondingPop;                           //@synthesize respondingPop=_respondingPop - In the implementation block
@property (nonatomic,retain) NSMutableArray * successes;                         //@synthesize successes=_successes - In the implementation block
@property (nonatomic,retain) NSMutableArray * failures;                          //@synthesize failures=_failures - In the implementation block
+(Class)successesType;
+(Class)failuresType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(char)arg1 ;
-(char)hasEventType;
-(unsigned long long)failuresCount;
-(NSMutableArray *)failures;
-(void)addSuccesses:(id)arg1 ;
-(void)addFailures:(id)arg1 ;
-(void)setRespondingPop:(NSString *)arg1 ;
-(void)setWifiReachabilityStatus:(char)arg1 ;
-(void)setHasWifiReachabilityStatus:(char)arg1 ;
-(char)hasWifiReachabilityStatus;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(void)setHasCellularRadioAccessTechnology:(char)arg1 ;
-(char)hasCellularRadioAccessTechnology;
-(id)cellularRadioAccessTechnologyAsString:(int)arg1 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg1 ;
-(char)hasRespondingPop;
-(void)clearSuccesses;
-(unsigned long long)successesCount;
-(id)successesAtIndex:(unsigned long long)arg1 ;
-(void)clearFailures;
-(id)failuresAtIndex:(unsigned long long)arg1 ;
-(char)wifiReachabilityStatus;
-(NSString *)respondingPop;
-(NSMutableArray *)successes;
-(void)setSuccesses:(NSMutableArray *)arg1 ;
-(void)setFailures:(NSMutableArray *)arg1 ;
@end

