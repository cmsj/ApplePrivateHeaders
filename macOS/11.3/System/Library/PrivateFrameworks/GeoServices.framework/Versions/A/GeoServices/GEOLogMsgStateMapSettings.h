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

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying> {

	int _locationType;
	int _navVoiceVolume;
	int _preferredTransportMode;
	char _avoidBusyRoads;
	char _avoidHighways;
	char _avoidHills;
	char _avoidStairs;
	char _avoidTolls;
	char _eBike;
	char _findMyCarEnabled;
	char _headingEnabled;
	char _labelEnabled;
	char _pauseSpokenAudioEnabled;
	char _speedLimitEnabled;
	char _trafficEnabled;
	struct {
		unsigned has_locationType : 1;
		unsigned has_navVoiceVolume : 1;
		unsigned has_preferredTransportMode : 1;
		unsigned has_avoidBusyRoads : 1;
		unsigned has_avoidHighways : 1;
		unsigned has_avoidHills : 1;
		unsigned has_avoidStairs : 1;
		unsigned has_avoidTolls : 1;
		unsigned has_eBike : 1;
		unsigned has_findMyCarEnabled : 1;
		unsigned has_headingEnabled : 1;
		unsigned has_labelEnabled : 1;
		unsigned has_pauseSpokenAudioEnabled : 1;
		unsigned has_speedLimitEnabled : 1;
		unsigned has_trafficEnabled : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasPreferredTransportMode; 
@property (assign,nonatomic) int preferredTransportMode; 
@property (assign,nonatomic) char hasAvoidTolls; 
@property (assign,nonatomic) char avoidTolls; 
@property (assign,nonatomic) char hasAvoidHighways; 
@property (assign,nonatomic) char avoidHighways; 
@property (assign,nonatomic) char hasHeadingEnabled; 
@property (assign,nonatomic) char headingEnabled; 
@property (assign,nonatomic) char hasSpeedLimitEnabled; 
@property (assign,nonatomic) char speedLimitEnabled; 
@property (assign,nonatomic) char hasNavVoiceVolume; 
@property (assign,nonatomic) int navVoiceVolume; 
@property (assign,nonatomic) char hasPauseSpokenAudioEnabled; 
@property (assign,nonatomic) char pauseSpokenAudioEnabled; 
@property (assign,nonatomic) char hasFindMyCarEnabled; 
@property (assign,nonatomic) char findMyCarEnabled; 
@property (assign,nonatomic) char hasTrafficEnabled; 
@property (assign,nonatomic) char trafficEnabled; 
@property (assign,nonatomic) char hasLabelEnabled; 
@property (assign,nonatomic) char labelEnabled; 
@property (assign,nonatomic) char hasAvoidHills; 
@property (assign,nonatomic) char avoidHills; 
@property (assign,nonatomic) char hasAvoidStairs; 
@property (assign,nonatomic) char avoidStairs; 
@property (assign,nonatomic) char hasAvoidBusyRoads; 
@property (assign,nonatomic) char avoidBusyRoads; 
@property (assign,nonatomic) char hasLocationType; 
@property (assign,nonatomic) int locationType; 
@property (assign,nonatomic) char hasEBike; 
@property (assign,nonatomic) char eBike; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)locationType;
-(void)setLocationType:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setAvoidStairs:(char)arg1 ;
-(void)setAvoidHills:(char)arg1 ;
-(void)setAvoidBusyRoads:(char)arg1 ;
-(char)avoidStairs;
-(void)setHasAvoidStairs:(char)arg1 ;
-(char)hasAvoidStairs;
-(char)avoidHills;
-(void)setHasAvoidHills:(char)arg1 ;
-(char)hasAvoidHills;
-(char)avoidBusyRoads;
-(void)setHasAvoidBusyRoads:(char)arg1 ;
-(char)hasAvoidBusyRoads;
-(void)setAvoidTolls:(char)arg1 ;
-(void)setAvoidHighways:(char)arg1 ;
-(char)avoidTolls;
-(void)setHasAvoidTolls:(char)arg1 ;
-(char)hasAvoidTolls;
-(char)avoidHighways;
-(void)setHasAvoidHighways:(char)arg1 ;
-(char)hasAvoidHighways;
-(void)setNavVoiceVolume:(int)arg1 ;
-(void)setPreferredTransportMode:(int)arg1 ;
-(void)setFindMyCarEnabled:(char)arg1 ;
-(void)setHeadingEnabled:(char)arg1 ;
-(void)setLabelEnabled:(char)arg1 ;
-(void)setPauseSpokenAudioEnabled:(char)arg1 ;
-(void)setSpeedLimitEnabled:(char)arg1 ;
-(void)setTrafficEnabled:(char)arg1 ;
-(void)setEBike:(char)arg1 ;
-(char)hasLocationType;
-(int)preferredTransportMode;
-(void)setHasPreferredTransportMode:(char)arg1 ;
-(char)hasPreferredTransportMode;
-(id)preferredTransportModeAsString:(int)arg1 ;
-(int)StringAsPreferredTransportMode:(id)arg1 ;
-(char)headingEnabled;
-(void)setHasHeadingEnabled:(char)arg1 ;
-(char)hasHeadingEnabled;
-(char)speedLimitEnabled;
-(void)setHasSpeedLimitEnabled:(char)arg1 ;
-(char)hasSpeedLimitEnabled;
-(int)navVoiceVolume;
-(void)setHasNavVoiceVolume:(char)arg1 ;
-(char)hasNavVoiceVolume;
-(id)navVoiceVolumeAsString:(int)arg1 ;
-(int)StringAsNavVoiceVolume:(id)arg1 ;
-(char)pauseSpokenAudioEnabled;
-(void)setHasPauseSpokenAudioEnabled:(char)arg1 ;
-(char)hasPauseSpokenAudioEnabled;
-(char)findMyCarEnabled;
-(void)setHasFindMyCarEnabled:(char)arg1 ;
-(char)hasFindMyCarEnabled;
-(char)trafficEnabled;
-(void)setHasTrafficEnabled:(char)arg1 ;
-(char)hasTrafficEnabled;
-(char)labelEnabled;
-(void)setHasLabelEnabled:(char)arg1 ;
-(char)hasLabelEnabled;
-(void)setHasLocationType:(char)arg1 ;
-(id)locationTypeAsString:(int)arg1 ;
-(int)StringAsLocationType:(id)arg1 ;
-(char)eBike;
-(void)setHasEBike:(char)arg1 ;
-(char)hasEBike;
@end
