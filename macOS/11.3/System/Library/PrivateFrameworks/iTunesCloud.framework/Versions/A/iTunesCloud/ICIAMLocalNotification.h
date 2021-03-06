/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMLocalNotification : PBCodable <NSCopying> {

	double _date;
	double _interval;
	NSString* _notification;
	int _trigger;
	SCD_Struct_IC16 _has;

}

@property (assign,nonatomic) char hasTrigger; 
@property (assign,nonatomic) int trigger;                          //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) char hasDate; 
@property (assign,nonatomic) double date;                          //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) char hasInterval; 
@property (assign,nonatomic) double interval;                      //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) char hasNotification; 
@property (nonatomic,retain) NSString * notification;              //@synthesize notification=_notification - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)date;
-(id)dictionaryRepresentation;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(void)setDate:(double)arg1 ;
-(int)trigger;
-(void)setTrigger:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasDate;
-(NSString *)notification;
-(void)setNotification:(NSString *)arg1 ;
-(char)hasNotification;
-(void)setHasTrigger:(char)arg1 ;
-(char)hasTrigger;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(char)hasInterval;
-(void)setHasInterval:(char)arg1 ;
-(void)setHasDate:(char)arg1 ;
@end

