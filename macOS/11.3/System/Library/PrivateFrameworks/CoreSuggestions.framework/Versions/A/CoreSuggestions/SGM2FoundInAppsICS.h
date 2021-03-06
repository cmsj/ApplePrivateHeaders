/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2FoundInAppsICS : PBCodable <NSCopying> {

	int _datetime;
	NSString* _key;
	int _timezone;
	SCD_Struct_SG4 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasTimezone; 
@property (assign,nonatomic) int timezone;                  //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) char hasDatetime; 
@property (assign,nonatomic) int datetime;                  //@synthesize datetime=_datetime - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)timezone;
-(char)hasKey;
-(void)setTimezone:(int)arg1 ;
-(char)hasTimezone;
-(void)setHasTimezone:(char)arg1 ;
-(id)timezoneAsString:(int)arg1 ;
-(int)StringAsTimezone:(id)arg1 ;
-(int)datetime;
-(void)setDatetime:(int)arg1 ;
-(void)setHasDatetime:(char)arg1 ;
-(char)hasDatetime;
-(id)datetimeAsString:(int)arg1 ;
-(int)StringAsDatetime:(id)arg1 ;
@end

