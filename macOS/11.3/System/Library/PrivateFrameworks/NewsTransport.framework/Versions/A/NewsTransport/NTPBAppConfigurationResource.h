/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBDate;

@interface NTPBAppConfigurationResource : PBCodable <NSCopying> {

	long long _maxAge;
	NSString* _etag;
	NSData* _gzippedConfigurationData;
	NTPBDate* _lastFetchedDate;
	NTPBDate* _lastModifiedDate;
	NSString* _lastModifiedString;
	NSString* _resourceID;
	NSString* _sourceURL;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) char hasGzippedConfigurationData; 
@property (nonatomic,retain) NSData * gzippedConfigurationData;               //@synthesize gzippedConfigurationData=_gzippedConfigurationData - In the implementation block
@property (nonatomic,readonly) char hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL;                            //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                                 //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) char hasLastFetchedDate; 
@property (nonatomic,retain) NTPBDate * lastFetchedDate;                      //@synthesize lastFetchedDate=_lastFetchedDate - In the implementation block
@property (nonatomic,readonly) char hasLastModifiedDate; 
@property (nonatomic,retain) NTPBDate * lastModifiedDate;                     //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) char hasLastModifiedString; 
@property (nonatomic,retain) NSString * lastModifiedString;                   //@synthesize lastModifiedString=_lastModifiedString - In the implementation block
@property (assign,nonatomic) char hasMaxAge; 
@property (assign,nonatomic) long long maxAge;                                //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,readonly) char hasResourceID; 
@property (nonatomic,retain) NSString * resourceID;                           //@synthesize resourceID=_resourceID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(char)hasEtag;
-(NTPBDate *)lastModifiedDate;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(char)hasSourceURL;
-(void)setLastModifiedDate:(NTPBDate *)arg1 ;
-(long long)maxAge;
-(void)setMaxAge:(long long)arg1 ;
-(NSString *)resourceID;
-(void)setResourceID:(NSString *)arg1 ;
-(NTPBDate *)lastFetchedDate;
-(void)setLastFetchedDate:(NTPBDate *)arg1 ;
-(void)setGzippedConfigurationData:(NSData *)arg1 ;
-(NSString *)lastModifiedString;
-(void)setLastModifiedString:(NSString *)arg1 ;
-(NSData *)gzippedConfigurationData;
-(char)hasGzippedConfigurationData;
-(char)hasLastFetchedDate;
-(char)hasLastModifiedDate;
-(char)hasLastModifiedString;
-(void)setHasMaxAge:(char)arg1 ;
-(char)hasMaxAge;
-(char)hasResourceID;
@end

