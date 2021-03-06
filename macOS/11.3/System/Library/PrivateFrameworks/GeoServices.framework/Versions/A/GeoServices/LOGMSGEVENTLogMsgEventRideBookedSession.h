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

@class PBDataReader, NSMutableArray, NSString;

@interface LOGMSGEVENTLogMsgEventRideBookedSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _intentResponseFailures;
	NSString* _rideAppId;
	NSString* _rideAppVersion;
	NSString* _rideBookedSessionId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusIssue;
	char _bookedUsingMaps;
	char _cancelled;
	char _contactedDriver;
	char _invalidVehicleLocation;
	char _missingVehicleLocation;
	char _tappedProactiveTrayItem;
	char _viewedDetails;
	char _viewedInProactiveTray;
	struct {
		unsigned has_statusIssue : 1;
		unsigned has_bookedUsingMaps : 1;
		unsigned has_cancelled : 1;
		unsigned has_contactedDriver : 1;
		unsigned has_invalidVehicleLocation : 1;
		unsigned has_missingVehicleLocation : 1;
		unsigned has_tappedProactiveTrayItem : 1;
		unsigned has_viewedDetails : 1;
		unsigned has_viewedInProactiveTray : 1;
		unsigned read_intentResponseFailures : 1;
		unsigned read_rideAppId : 1;
		unsigned read_rideAppVersion : 1;
		unsigned read_rideBookedSessionId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasBookedUsingMaps; 
@property (assign,nonatomic) char bookedUsingMaps; 
@property (assign,nonatomic) char hasCancelled; 
@property (assign,nonatomic) char cancelled; 
@property (assign,nonatomic) char hasContactedDriver; 
@property (assign,nonatomic) char contactedDriver; 
@property (assign,nonatomic) char hasViewedInProactiveTray; 
@property (assign,nonatomic) char viewedInProactiveTray; 
@property (assign,nonatomic) char hasTappedProactiveTrayItem; 
@property (assign,nonatomic) char tappedProactiveTrayItem; 
@property (assign,nonatomic) char hasViewedDetails; 
@property (assign,nonatomic) char viewedDetails; 
@property (nonatomic,readonly) char hasRideAppId; 
@property (nonatomic,retain) NSString * rideAppId; 
@property (nonatomic,readonly) char hasRideBookedSessionId; 
@property (nonatomic,retain) NSString * rideBookedSessionId; 
@property (nonatomic,readonly) char hasRideAppVersion; 
@property (nonatomic,retain) NSString * rideAppVersion; 
@property (assign,nonatomic) char hasInvalidVehicleLocation; 
@property (assign,nonatomic) char invalidVehicleLocation; 
@property (assign,nonatomic) char hasMissingVehicleLocation; 
@property (assign,nonatomic) char missingVehicleLocation; 
@property (assign,nonatomic) char hasStatusIssue; 
@property (assign,nonatomic) int statusIssue; 
@property (nonatomic,retain) NSMutableArray * intentResponseFailures; 
+(char)isValid:(id)arg1 ;
+(Class)intentResponseFailureType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)cancelled;
-(void)setCancelled:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setBookedUsingMaps:(char)arg1 ;
-(void)setViewedInProactiveTray:(char)arg1 ;
-(void)setTappedProactiveTrayItem:(char)arg1 ;
-(char)bookedUsingMaps;
-(void)setHasBookedUsingMaps:(char)arg1 ;
-(char)hasBookedUsingMaps;
-(void)setHasCancelled:(char)arg1 ;
-(char)hasCancelled;
-(char)viewedInProactiveTray;
-(void)setHasViewedInProactiveTray:(char)arg1 ;
-(char)hasViewedInProactiveTray;
-(char)tappedProactiveTrayItem;
-(void)setHasTappedProactiveTrayItem:(char)arg1 ;
-(char)hasTappedProactiveTrayItem;
-(void)setStatusIssue:(int)arg1 ;
-(void)setRideAppId:(NSString *)arg1 ;
-(void)setRideAppVersion:(NSString *)arg1 ;
-(NSMutableArray *)intentResponseFailures;
-(void)setIntentResponseFailures:(NSMutableArray *)arg1 ;
-(void)setRideBookedSessionId:(NSString *)arg1 ;
-(void)setContactedDriver:(char)arg1 ;
-(void)setViewedDetails:(char)arg1 ;
-(void)setInvalidVehicleLocation:(char)arg1 ;
-(void)setMissingVehicleLocation:(char)arg1 ;
-(NSString *)rideAppId;
-(NSString *)rideBookedSessionId;
-(NSString *)rideAppVersion;
-(void)addIntentResponseFailure:(id)arg1 ;
-(unsigned long long)intentResponseFailuresCount;
-(void)clearIntentResponseFailures;
-(id)intentResponseFailureAtIndex:(unsigned long long)arg1 ;
-(char)contactedDriver;
-(void)setHasContactedDriver:(char)arg1 ;
-(char)hasContactedDriver;
-(char)viewedDetails;
-(void)setHasViewedDetails:(char)arg1 ;
-(char)hasViewedDetails;
-(char)hasRideAppId;
-(char)hasRideBookedSessionId;
-(char)hasRideAppVersion;
-(char)invalidVehicleLocation;
-(void)setHasInvalidVehicleLocation:(char)arg1 ;
-(char)hasInvalidVehicleLocation;
-(char)missingVehicleLocation;
-(void)setHasMissingVehicleLocation:(char)arg1 ;
-(char)hasMissingVehicleLocation;
-(int)statusIssue;
-(void)setHasStatusIssue:(char)arg1 ;
-(char)hasStatusIssue;
-(id)statusIssueAsString:(int)arg1 ;
-(int)StringAsStatusIssue:(id)arg1 ;
@end

