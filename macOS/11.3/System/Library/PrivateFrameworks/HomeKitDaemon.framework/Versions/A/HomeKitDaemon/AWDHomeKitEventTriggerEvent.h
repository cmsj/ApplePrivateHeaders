/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitCalendarEvent, AWDHomeKitCharacteristicEvent, AWDHomeKitCharacteristicThresholdEvent, AWDHomeKitDurationEvent, AWDHomeKitLocationEvent, AWDHomeKitPresenceEvent, AWDHomeKitSignificantTimeEvent;

@interface AWDHomeKitEventTriggerEvent : PBCodable <NSCopying> {

	AWDHomeKitCalendarEvent* _calendarEvent;
	AWDHomeKitCharacteristicEvent* _charEvent;
	AWDHomeKitCharacteristicThresholdEvent* _charThresholdEvent;
	AWDHomeKitDurationEvent* _durationEvent;
	AWDHomeKitLocationEvent* _locationEvent;
	AWDHomeKitPresenceEvent* _presenceEvent;
	AWDHomeKitSignificantTimeEvent* _significantTimeEvent;
	AWDHomeKitCharacteristicThresholdEvent* _thresholdEvent;
	char _endEvent;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasEndEvent; 
@property (assign,nonatomic) char endEvent;                                                            //@synthesize endEvent=_endEvent - In the implementation block
@property (nonatomic,readonly) char hasCharEvent; 
@property (nonatomic,retain) AWDHomeKitCharacteristicEvent * charEvent;                                //@synthesize charEvent=_charEvent - In the implementation block
@property (nonatomic,readonly) char hasLocationEvent; 
@property (nonatomic,retain) AWDHomeKitLocationEvent * locationEvent;                                  //@synthesize locationEvent=_locationEvent - In the implementation block
@property (nonatomic,readonly) char hasCharThresholdEvent; 
@property (nonatomic,retain) AWDHomeKitCharacteristicThresholdEvent * charThresholdEvent;              //@synthesize charThresholdEvent=_charThresholdEvent - In the implementation block
@property (nonatomic,readonly) char hasCalendarEvent; 
@property (nonatomic,retain) AWDHomeKitCalendarEvent * calendarEvent;                                  //@synthesize calendarEvent=_calendarEvent - In the implementation block
@property (nonatomic,readonly) char hasSignificantTimeEvent; 
@property (nonatomic,retain) AWDHomeKitSignificantTimeEvent * significantTimeEvent;                    //@synthesize significantTimeEvent=_significantTimeEvent - In the implementation block
@property (nonatomic,readonly) char hasThresholdEvent; 
@property (nonatomic,retain) AWDHomeKitCharacteristicThresholdEvent * thresholdEvent;                  //@synthesize thresholdEvent=_thresholdEvent - In the implementation block
@property (nonatomic,readonly) char hasPresenceEvent; 
@property (nonatomic,retain) AWDHomeKitPresenceEvent * presenceEvent;                                  //@synthesize presenceEvent=_presenceEvent - In the implementation block
@property (nonatomic,readonly) char hasDurationEvent; 
@property (nonatomic,retain) AWDHomeKitDurationEvent * durationEvent;                                  //@synthesize durationEvent=_durationEvent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(AWDHomeKitLocationEvent *)locationEvent;
-(void)setLocationEvent:(AWDHomeKitLocationEvent *)arg1 ;
-(char)hasLocationEvent;
-(char)endEvent;
-(void)setEndEvent:(char)arg1 ;
-(void)setCalendarEvent:(AWDHomeKitCalendarEvent *)arg1 ;
-(void)setPresenceEvent:(AWDHomeKitPresenceEvent *)arg1 ;
-(AWDHomeKitPresenceEvent *)presenceEvent;
-(void)setSignificantTimeEvent:(AWDHomeKitSignificantTimeEvent *)arg1 ;
-(void)setCharEvent:(AWDHomeKitCharacteristicEvent *)arg1 ;
-(void)setCharThresholdEvent:(AWDHomeKitCharacteristicThresholdEvent *)arg1 ;
-(void)setDurationEvent:(AWDHomeKitDurationEvent *)arg1 ;
-(void)setThresholdEvent:(AWDHomeKitCharacteristicThresholdEvent *)arg1 ;
-(AWDHomeKitCharacteristicEvent *)charEvent;
-(AWDHomeKitCharacteristicThresholdEvent *)charThresholdEvent;
-(AWDHomeKitSignificantTimeEvent *)significantTimeEvent;
-(AWDHomeKitCharacteristicThresholdEvent *)thresholdEvent;
-(AWDHomeKitCalendarEvent *)calendarEvent;
-(AWDHomeKitDurationEvent *)durationEvent;
-(void)setHasEndEvent:(char)arg1 ;
-(char)hasEndEvent;
-(char)hasCharEvent;
-(char)hasCharThresholdEvent;
-(char)hasCalendarEvent;
-(char)hasSignificantTimeEvent;
-(char)hasThresholdEvent;
-(char)hasPresenceEvent;
-(char)hasDurationEvent;
@end

