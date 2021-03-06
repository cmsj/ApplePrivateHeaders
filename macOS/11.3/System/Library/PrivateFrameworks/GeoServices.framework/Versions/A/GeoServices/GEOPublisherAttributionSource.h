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

@class PBDataReader, NSString, NSMutableArray;

@interface GEOPublisherAttributionSource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _appAdamID;
	NSMutableArray* _localizedAttributions;
	NSString* _websiteURL;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_appAdamID : 1;
		unsigned read_localizedAttributions : 1;
		unsigned read_websiteURL : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * localizedAttributions; 
@property (nonatomic,readonly) char hasAppAdamID; 
@property (nonatomic,retain) NSString * appAdamID; 
@property (nonatomic,readonly) char hasWebsiteURL; 
@property (nonatomic,retain) NSString * websiteURL; 
+(char)isValid:(id)arg1 ;
+(Class)localizedAttributionType;
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
-(NSString *)appAdamID;
-(NSString *)websiteURL;
-(void)addLocalizedAttribution:(id)arg1 ;
-(void)setAppAdamID:(NSString *)arg1 ;
-(void)setWebsiteURL:(NSString *)arg1 ;
-(unsigned long long)localizedAttributionsCount;
-(void)clearLocalizedAttributions;
-(id)localizedAttributionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)localizedAttributions;
-(void)setLocalizedAttributions:(NSMutableArray *)arg1 ;
-(char)hasAppAdamID;
-(char)hasWebsiteURL;
@end

