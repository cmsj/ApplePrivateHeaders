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

@class PBDataReader, NSString;

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceInputLocale;
	NSString* _deviceOutputLocale;
	NSString* _deviceSettingsLocale;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_deviceInputLocale : 1;
		unsigned read_deviceOutputLocale : 1;
		unsigned read_deviceSettingsLocale : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasDeviceSettingsLocale; 
@property (nonatomic,retain) NSString * deviceSettingsLocale; 
@property (nonatomic,readonly) char hasDeviceInputLocale; 
@property (nonatomic,retain) NSString * deviceInputLocale; 
@property (nonatomic,readonly) char hasDeviceOutputLocale; 
@property (nonatomic,retain) NSString * deviceOutputLocale; 
+(char)isValid:(id)arg1 ;
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
-(void)setDeviceSettingsLocale:(NSString *)arg1 ;
-(NSString *)deviceInputLocale;
-(void)setDeviceInputLocale:(NSString *)arg1 ;
-(NSString *)deviceOutputLocale;
-(void)setDeviceOutputLocale:(NSString *)arg1 ;
-(char)hasDeviceInputLocale;
-(char)hasDeviceOutputLocale;
-(NSString *)deviceSettingsLocale;
-(char)hasDeviceSettingsLocale;
@end

