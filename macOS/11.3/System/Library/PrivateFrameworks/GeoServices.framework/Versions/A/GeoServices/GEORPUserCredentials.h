/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _icloudUserMapsAuthToken;
	NSString* _icloudUserPersonId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) char hasIcloudUserPersonId; 
@property (nonatomic,retain) NSString * icloudUserPersonId; 
@property (nonatomic,readonly) char hasIcloudUserMapsAuthToken; 
@property (nonatomic,retain) NSString * icloudUserMapsAuthToken; 
+(char)isValid:(id)arg1 ;
+(id)_credentialsForPrimaryICloudAccount;
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
-(void)setIcloudUserPersonId:(NSString *)arg1 ;
-(void)setIcloudUserMapsAuthToken:(NSString *)arg1 ;
-(NSString *)icloudUserPersonId;
-(NSString *)icloudUserMapsAuthToken;
-(char)hasIcloudUserPersonId;
-(char)hasIcloudUserMapsAuthToken;
@end

