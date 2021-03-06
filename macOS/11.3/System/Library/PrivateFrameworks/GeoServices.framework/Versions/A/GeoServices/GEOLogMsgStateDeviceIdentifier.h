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

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceHwIdentifier;
	NSString* _deviceOsVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	char _deviceDarkMode;
	char _isInternalInstall;
	char _isInternalTool;
	struct {
		unsigned has_deviceDarkMode : 1;
		unsigned has_isInternalInstall : 1;
		unsigned has_isInternalTool : 1;
		unsigned read_deviceHwIdentifier : 1;
		unsigned read_deviceOsVersion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasDeviceOsVersion; 
@property (nonatomic,retain) NSString * deviceOsVersion; 
@property (nonatomic,readonly) char hasDeviceHwIdentifier; 
@property (nonatomic,retain) NSString * deviceHwIdentifier; 
@property (assign,nonatomic) char hasIsInternalTool; 
@property (assign,nonatomic) char isInternalTool; 
@property (assign,nonatomic) char hasIsInternalInstall; 
@property (assign,nonatomic) char isInternalInstall; 
@property (assign,nonatomic) char hasDeviceDarkMode; 
@property (assign,nonatomic) char deviceDarkMode; 
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
-(char)isInternalInstall;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setIsInternalTool:(char)arg1 ;
-(void)setIsInternalInstall:(char)arg1 ;
-(char)isInternalTool;
-(void)setHasIsInternalTool:(char)arg1 ;
-(char)hasIsInternalTool;
-(void)setHasIsInternalInstall:(char)arg1 ;
-(char)hasIsInternalInstall;
-(void)setDeviceDarkMode:(char)arg1 ;
-(char)deviceDarkMode;
-(void)setHasDeviceDarkMode:(char)arg1 ;
-(char)hasDeviceDarkMode;
-(void)setDeviceHwIdentifier:(NSString *)arg1 ;
-(void)setDeviceOsVersion:(NSString *)arg1 ;
-(NSString *)deviceOsVersion;
-(NSString *)deviceHwIdentifier;
-(char)hasDeviceOsVersion;
-(char)hasDeviceHwIdentifier;
@end

