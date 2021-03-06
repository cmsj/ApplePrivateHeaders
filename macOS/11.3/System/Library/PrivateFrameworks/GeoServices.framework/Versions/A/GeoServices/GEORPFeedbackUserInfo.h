/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAppAttestInfo, NSData, NSString, GEORPUserCredentials;

@interface GEORPFeedbackUserInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAppAttestInfo* _anonUserInfo;
	NSData* _devicePushToken;
	NSString* _preferredEmail;
	GEORPAppAttestInfo* _rolloverInfo;
	NSString* _ugcUserId;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_anonUserInfo : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_preferredEmail : 1;
		unsigned read_rolloverInfo : 1;
		unsigned read_ugcUserId : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) char hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken; 
@property (nonatomic,readonly) char hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail; 
@property (nonatomic,readonly) char hasPreferredEmail; 
@property (nonatomic,retain) NSString * preferredEmail; 
@property (nonatomic,readonly) char hasUgcUserId; 
@property (nonatomic,retain) NSString * ugcUserId; 
@property (nonatomic,readonly) char hasAnonUserInfo; 
@property (nonatomic,retain) GEORPAppAttestInfo * anonUserInfo; 
@property (nonatomic,readonly) char hasRolloverInfo; 
@property (nonatomic,retain) GEORPAppAttestInfo * rolloverInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEORPUserCredentials *)userCredentials;
-(NSData *)devicePushToken;
-(NSString *)userEmail;
-(NSString *)preferredEmail;
-(NSString *)ugcUserId;
-(GEORPAppAttestInfo *)anonUserInfo;
-(GEORPAppAttestInfo *)rolloverInfo;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(void)setPreferredEmail:(NSString *)arg1 ;
-(void)setUgcUserId:(NSString *)arg1 ;
-(void)setAnonUserInfo:(GEORPAppAttestInfo *)arg1 ;
-(void)setRolloverInfo:(GEORPAppAttestInfo *)arg1 ;
-(char)hasUserCredentials;
-(char)hasDevicePushToken;
-(char)hasUserEmail;
-(char)hasPreferredEmail;
-(char)hasUgcUserId;
-(char)hasAnonUserInfo;
-(char)hasRolloverInfo;
@end

