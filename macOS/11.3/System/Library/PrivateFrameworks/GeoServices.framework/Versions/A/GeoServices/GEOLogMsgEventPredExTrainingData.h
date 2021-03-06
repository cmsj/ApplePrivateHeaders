/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLatLng;

@interface GEOLogMsgEventPredExTrainingData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _chanceOfPrecipitation;
	double _chanceOfRain;
	double _chanceOfSnow;
	double _dayOfWeek;
	double _durationUntilEventEnd;
	double _durationUntilEventStart;
	double _endTime;
	double _isTourist;
	double _startTime;
	double _temperature;
	double _timeOfDay;
	double _timeSinceBackgrounded;
	NSString* _userLocationGeohash4;
	GEOLatLng* _userLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _actualTransportMode;
	int _distanceFromHereToHome;
	int _distanceFromHereToOrigin;
	int _distanceFromHereToParkedCar;
	int _distanceFromHereToWork;
	int _distanceFromHere;
	int _distanceFromOriginToDestination;
	int _entryType;
	int _mapType;
	int _predictedTransportMode;
	int _preferredTransportMode;
	int _weatherType;
	char _isCarplayConnected;
	char _isInBasemode;
	char _isTransitPossible;
	char _routePlanningScreenPresented;
	struct {
		unsigned has_chanceOfPrecipitation : 1;
		unsigned has_chanceOfRain : 1;
		unsigned has_chanceOfSnow : 1;
		unsigned has_dayOfWeek : 1;
		unsigned has_durationUntilEventEnd : 1;
		unsigned has_durationUntilEventStart : 1;
		unsigned has_endTime : 1;
		unsigned has_isTourist : 1;
		unsigned has_startTime : 1;
		unsigned has_temperature : 1;
		unsigned has_timeOfDay : 1;
		unsigned has_timeSinceBackgrounded : 1;
		unsigned has_actualTransportMode : 1;
		unsigned has_distanceFromHereToHome : 1;
		unsigned has_distanceFromHereToOrigin : 1;
		unsigned has_distanceFromHereToParkedCar : 1;
		unsigned has_distanceFromHereToWork : 1;
		unsigned has_distanceFromHere : 1;
		unsigned has_distanceFromOriginToDestination : 1;
		unsigned has_entryType : 1;
		unsigned has_mapType : 1;
		unsigned has_predictedTransportMode : 1;
		unsigned has_preferredTransportMode : 1;
		unsigned has_weatherType : 1;
		unsigned has_isCarplayConnected : 1;
		unsigned has_isInBasemode : 1;
		unsigned has_isTransitPossible : 1;
		unsigned has_routePlanningScreenPresented : 1;
		unsigned read_userLocationGeohash4 : 1;
		unsigned read_userLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasEntryType; 
@property (assign,nonatomic) int entryType; 
@property (assign,nonatomic) char hasDurationUntilEventStart; 
@property (assign,nonatomic) double durationUntilEventStart; 
@property (assign,nonatomic) char hasDurationUntilEventEnd; 
@property (assign,nonatomic) double durationUntilEventEnd; 
@property (assign,nonatomic) char hasStartTime; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) char hasEndTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) char hasTemperature; 
@property (assign,nonatomic) double temperature; 
@property (assign,nonatomic) char hasChanceOfPrecipitation; 
@property (assign,nonatomic) double chanceOfPrecipitation; 
@property (assign,nonatomic) char hasChanceOfRain; 
@property (assign,nonatomic) double chanceOfRain; 
@property (assign,nonatomic) char hasChanceOfSnow; 
@property (assign,nonatomic) double chanceOfSnow; 
@property (assign,nonatomic) char hasTimeOfDay; 
@property (assign,nonatomic) double timeOfDay; 
@property (assign,nonatomic) char hasDayOfWeek; 
@property (assign,nonatomic) double dayOfWeek; 
@property (assign,nonatomic) char hasIsTourist; 
@property (assign,nonatomic) double isTourist; 
@property (assign,nonatomic) char hasPreferredTransportMode; 
@property (assign,nonatomic) int preferredTransportMode; 
@property (assign,nonatomic) char hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) char hasIsTransitPossible; 
@property (assign,nonatomic) char isTransitPossible; 
@property (assign,nonatomic) char hasIsInBasemode; 
@property (assign,nonatomic) char isInBasemode; 
@property (assign,nonatomic) char hasTimeSinceBackgrounded; 
@property (assign,nonatomic) double timeSinceBackgrounded; 
@property (assign,nonatomic) char hasRoutePlanningScreenPresented; 
@property (assign,nonatomic) char routePlanningScreenPresented; 
@property (assign,nonatomic) char hasPredictedTransportMode; 
@property (assign,nonatomic) int predictedTransportMode; 
@property (assign,nonatomic) char hasActualTransportMode; 
@property (assign,nonatomic) int actualTransportMode; 
@property (assign,nonatomic) char hasDistanceFromHere; 
@property (assign,nonatomic) int distanceFromHere; 
@property (assign,nonatomic) char hasDistanceFromHereToOrigin; 
@property (assign,nonatomic) int distanceFromHereToOrigin; 
@property (assign,nonatomic) char hasDistanceFromOriginToDestination; 
@property (assign,nonatomic) int distanceFromOriginToDestination; 
@property (assign,nonatomic) char hasDistanceFromHereToHome; 
@property (assign,nonatomic) int distanceFromHereToHome; 
@property (assign,nonatomic) char hasDistanceFromHereToWork; 
@property (assign,nonatomic) int distanceFromHereToWork; 
@property (assign,nonatomic) char hasDistanceFromHereToParkedCar; 
@property (assign,nonatomic) int distanceFromHereToParkedCar; 
@property (nonatomic,readonly) char hasUserLocation; 
@property (nonatomic,retain) GEOLatLng * userLocation; 
@property (nonatomic,readonly) char hasUserLocationGeohash4; 
@property (nonatomic,retain) NSString * userLocationGeohash4; 
@property (assign,nonatomic) char hasIsCarplayConnected; 
@property (assign,nonatomic) char isCarplayConnected; 
@property (assign,nonatomic) char hasWeatherType; 
@property (assign,nonatomic) int weatherType; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)dayOfWeek;
-(id)dictionaryRepresentation;
-(int)entryType;
-(void)setEntryType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(double)temperature;
-(void)setTemperature:(double)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasStartTime:(char)arg1 ;
-(char)hasStartTime;
-(GEOLatLng *)userLocation;
-(void)setUserLocation:(GEOLatLng *)arg1 ;
-(char)hasUserLocation;
-(void)setMapType:(int)arg1 ;
-(char)hasMapType;
-(int)mapType;
-(void)setDayOfWeek:(double)arg1 ;
-(void)setHasDayOfWeek:(char)arg1 ;
-(char)hasDayOfWeek;
-(void)setHasMapType:(char)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(void)setHasEndTime:(char)arg1 ;
-(char)hasEndTime;
-(void)setIsCarplayConnected:(char)arg1 ;
-(char)isCarplayConnected;
-(void)setHasIsCarplayConnected:(char)arg1 ;
-(char)hasIsCarplayConnected;
-(void)setIsTourist:(double)arg1 ;
-(double)isTourist;
-(void)setHasIsTourist:(char)arg1 ;
-(char)hasIsTourist;
-(void)setPreferredTransportMode:(int)arg1 ;
-(void)setTimeOfDay:(double)arg1 ;
-(double)timeOfDay;
-(void)setHasTimeOfDay:(char)arg1 ;
-(char)hasTimeOfDay;
-(void)setChanceOfPrecipitation:(double)arg1 ;
-(void)setChanceOfRain:(double)arg1 ;
-(void)setChanceOfSnow:(double)arg1 ;
-(void)setDurationUntilEventEnd:(double)arg1 ;
-(void)setDurationUntilEventStart:(double)arg1 ;
-(void)setTimeSinceBackgrounded:(double)arg1 ;
-(void)setActualTransportMode:(int)arg1 ;
-(void)setDistanceFromHereToHome:(int)arg1 ;
-(void)setDistanceFromHereToOrigin:(int)arg1 ;
-(void)setDistanceFromHereToParkedCar:(int)arg1 ;
-(void)setDistanceFromHereToWork:(int)arg1 ;
-(void)setDistanceFromHere:(int)arg1 ;
-(void)setDistanceFromOriginToDestination:(int)arg1 ;
-(void)setWeatherType:(int)arg1 ;
-(void)setPredictedTransportMode:(int)arg1 ;
-(void)setIsInBasemode:(char)arg1 ;
-(void)setIsTransitPossible:(char)arg1 ;
-(void)setRoutePlanningScreenPresented:(char)arg1 ;
-(void)setUserLocationGeohash4:(NSString *)arg1 ;
-(NSString *)userLocationGeohash4;
-(void)setHasEntryType:(char)arg1 ;
-(char)hasEntryType;
-(id)entryTypeAsString:(int)arg1 ;
-(int)StringAsEntryType:(id)arg1 ;
-(double)durationUntilEventStart;
-(void)setHasDurationUntilEventStart:(char)arg1 ;
-(char)hasDurationUntilEventStart;
-(double)durationUntilEventEnd;
-(void)setHasDurationUntilEventEnd:(char)arg1 ;
-(char)hasDurationUntilEventEnd;
-(void)setHasTemperature:(char)arg1 ;
-(char)hasTemperature;
-(double)chanceOfPrecipitation;
-(void)setHasChanceOfPrecipitation:(char)arg1 ;
-(char)hasChanceOfPrecipitation;
-(double)chanceOfRain;
-(void)setHasChanceOfRain:(char)arg1 ;
-(char)hasChanceOfRain;
-(double)chanceOfSnow;
-(void)setHasChanceOfSnow:(char)arg1 ;
-(char)hasChanceOfSnow;
-(int)preferredTransportMode;
-(void)setHasPreferredTransportMode:(char)arg1 ;
-(char)hasPreferredTransportMode;
-(id)preferredTransportModeAsString:(int)arg1 ;
-(int)StringAsPreferredTransportMode:(id)arg1 ;
-(char)isTransitPossible;
-(void)setHasIsTransitPossible:(char)arg1 ;
-(char)hasIsTransitPossible;
-(char)isInBasemode;
-(void)setHasIsInBasemode:(char)arg1 ;
-(char)hasIsInBasemode;
-(double)timeSinceBackgrounded;
-(void)setHasTimeSinceBackgrounded:(char)arg1 ;
-(char)hasTimeSinceBackgrounded;
-(char)routePlanningScreenPresented;
-(void)setHasRoutePlanningScreenPresented:(char)arg1 ;
-(char)hasRoutePlanningScreenPresented;
-(int)predictedTransportMode;
-(void)setHasPredictedTransportMode:(char)arg1 ;
-(char)hasPredictedTransportMode;
-(id)predictedTransportModeAsString:(int)arg1 ;
-(int)StringAsPredictedTransportMode:(id)arg1 ;
-(int)actualTransportMode;
-(void)setHasActualTransportMode:(char)arg1 ;
-(char)hasActualTransportMode;
-(id)actualTransportModeAsString:(int)arg1 ;
-(int)StringAsActualTransportMode:(id)arg1 ;
-(int)distanceFromHere;
-(void)setHasDistanceFromHere:(char)arg1 ;
-(char)hasDistanceFromHere;
-(id)distanceFromHereAsString:(int)arg1 ;
-(int)StringAsDistanceFromHere:(id)arg1 ;
-(int)distanceFromHereToOrigin;
-(void)setHasDistanceFromHereToOrigin:(char)arg1 ;
-(char)hasDistanceFromHereToOrigin;
-(id)distanceFromHereToOriginAsString:(int)arg1 ;
-(int)StringAsDistanceFromHereToOrigin:(id)arg1 ;
-(int)distanceFromOriginToDestination;
-(void)setHasDistanceFromOriginToDestination:(char)arg1 ;
-(char)hasDistanceFromOriginToDestination;
-(id)distanceFromOriginToDestinationAsString:(int)arg1 ;
-(int)StringAsDistanceFromOriginToDestination:(id)arg1 ;
-(int)distanceFromHereToHome;
-(void)setHasDistanceFromHereToHome:(char)arg1 ;
-(char)hasDistanceFromHereToHome;
-(id)distanceFromHereToHomeAsString:(int)arg1 ;
-(int)StringAsDistanceFromHereToHome:(id)arg1 ;
-(int)distanceFromHereToWork;
-(void)setHasDistanceFromHereToWork:(char)arg1 ;
-(char)hasDistanceFromHereToWork;
-(id)distanceFromHereToWorkAsString:(int)arg1 ;
-(int)StringAsDistanceFromHereToWork:(id)arg1 ;
-(int)distanceFromHereToParkedCar;
-(void)setHasDistanceFromHereToParkedCar:(char)arg1 ;
-(char)hasDistanceFromHereToParkedCar;
-(id)distanceFromHereToParkedCarAsString:(int)arg1 ;
-(int)StringAsDistanceFromHereToParkedCar:(id)arg1 ;
-(char)hasUserLocationGeohash4;
-(int)weatherType;
-(void)setHasWeatherType:(char)arg1 ;
-(char)hasWeatherType;
-(id)weatherTypeAsString:(int)arg1 ;
-(int)StringAsWeatherType:(id)arg1 ;
@end

