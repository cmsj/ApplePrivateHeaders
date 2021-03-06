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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEODataSetURLOverride : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSString* _announcementsURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _businessPortalBaseURL;
	NSString* _directionsURL;
	NSString* _dispatcherURL;
	NSString* _etaURL;
	NSString* _logMessageUsageURL;
	NSString* _problemCategoriesURL;
	NSString* _problemOptInURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSString* _simpleETAURL;
	NSString* _spatialLookupURL;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _dataSet;
	SCD_Struct_GE75 _flags;

}

@property (assign,nonatomic) char hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (nonatomic,readonly) char hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL; 
@property (nonatomic,readonly) char hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL; 
@property (nonatomic,readonly) char hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL; 
@property (nonatomic,readonly) char hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL; 
@property (nonatomic,readonly) char hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL; 
@property (nonatomic,readonly) char hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL; 
@property (nonatomic,readonly) char hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL; 
@property (nonatomic,readonly) char hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL; 
@property (nonatomic,readonly) char hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL; 
@property (nonatomic,readonly) char hasAnnouncementsURL; 
@property (nonatomic,retain) NSString * announcementsURL; 
@property (nonatomic,readonly) char hasDispatcherURL; 
@property (nonatomic,retain) NSString * dispatcherURL; 
@property (nonatomic,readonly) char hasProblemOptInURL; 
@property (nonatomic,retain) NSString * problemOptInURL; 
@property (nonatomic,readonly) char hasBusinessPortalBaseURL; 
@property (nonatomic,retain) NSString * businessPortalBaseURL; 
@property (nonatomic,readonly) char hasLogMessageUsageURL; 
@property (nonatomic,retain) NSString * logMessageUsageURL; 
@property (nonatomic,readonly) char hasSpatialLookupURL; 
@property (nonatomic,retain) NSString * spatialLookupURL; 
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
-(void)setDataSet:(unsigned)arg1 ;
-(unsigned)dataSet;
-(void)setHasDataSet:(char)arg1 ;
-(char)hasDataSet;
-(NSString *)directionsURL;
-(NSString *)etaURL;
-(NSString *)batchReverseGeocoderURL;
-(NSString *)simpleETAURL;
-(NSString *)addressCorrectionInitURL;
-(NSString *)addressCorrectionUpdateURL;
-(NSString *)problemSubmissionURL;
-(NSString *)problemStatusURL;
-(NSString *)problemCategoriesURL;
-(NSString *)announcementsURL;
-(NSString *)dispatcherURL;
-(NSString *)problemOptInURL;
-(NSString *)businessPortalBaseURL;
-(NSString *)logMessageUsageURL;
-(NSString *)spatialLookupURL;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(void)setEtaURL:(NSString *)arg1 ;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(void)setLogMessageUsageURL:(NSString *)arg1 ;
-(void)setSpatialLookupURL:(NSString *)arg1 ;
-(char)hasDirectionsURL;
-(char)hasEtaURL;
-(char)hasBatchReverseGeocoderURL;
-(char)hasSimpleETAURL;
-(char)hasAddressCorrectionInitURL;
-(char)hasAddressCorrectionUpdateURL;
-(char)hasProblemSubmissionURL;
-(char)hasProblemStatusURL;
-(char)hasProblemCategoriesURL;
-(char)hasAnnouncementsURL;
-(char)hasDispatcherURL;
-(char)hasProblemOptInURL;
-(char)hasBusinessPortalBaseURL;
-(char)hasLogMessageUsageURL;
-(char)hasSpatialLookupURL;
@end

