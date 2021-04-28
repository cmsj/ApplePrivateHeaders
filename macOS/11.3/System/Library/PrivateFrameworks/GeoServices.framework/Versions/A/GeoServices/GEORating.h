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

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEORating : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _uRL;
	double _maxScore;
	NSString* _provider;
	NSString* _ratingCategoryId;
	NSMutableArray* _reviews;
	double _score;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _numberOfRatings;
	int _numberOfReviews;
	struct {
		unsigned has_maxScore : 1;
		unsigned has_score : 1;
		unsigned has_numberOfRatings : 1;
		unsigned has_numberOfReviews : 1;
		unsigned read_unknownFields : 1;
		unsigned read_uRL : 1;
		unsigned read_provider : 1;
		unsigned read_ratingCategoryId : 1;
		unsigned read_reviews : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasScore; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) char hasMaxScore; 
@property (assign,nonatomic) double maxScore; 
@property (assign,nonatomic) char hasNumberOfRatings; 
@property (assign,nonatomic) int numberOfRatings; 
@property (nonatomic,readonly) char hasProvider; 
@property (nonatomic,retain) NSString * provider; 
@property (nonatomic,readonly) char hasURL; 
@property (nonatomic,retain) NSString * uRL; 
@property (nonatomic,retain) NSMutableArray * reviews; 
@property (assign,nonatomic) char hasNumberOfReviews; 
@property (assign,nonatomic) int numberOfReviews; 
@property (nonatomic,readonly) char hasRatingCategoryId; 
@property (nonatomic,retain) NSString * ratingCategoryId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)reviewType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(double)score;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(char)arg1 ;
-(char)hasScore;
-(NSMutableArray *)reviews;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setMaxScore:(double)arg1 ;
-(double)maxScore;
-(void)setHasMaxScore:(char)arg1 ;
-(char)hasMaxScore;
-(char)hasURL;
-(NSString *)uRL;
-(NSString *)ratingCategoryId;
-(void)setNumberOfRatings:(int)arg1 ;
-(void)addReview:(id)arg1 ;
-(void)setNumberOfReviews:(int)arg1 ;
-(void)setRatingCategoryId:(NSString *)arg1 ;
-(unsigned long long)reviewsCount;
-(void)clearReviews;
-(id)reviewAtIndex:(unsigned long long)arg1 ;
-(int)numberOfRatings;
-(void)setHasNumberOfRatings:(char)arg1 ;
-(char)hasNumberOfRatings;
-(char)hasProvider;
-(void)setReviews:(NSMutableArray *)arg1 ;
-(int)numberOfReviews;
-(void)setHasNumberOfReviews:(char)arg1 ;
-(char)hasNumberOfReviews;
-(char)hasRatingCategoryId;
-(id)initWithSampleSizeForUserRatingScore:(unsigned)arg1 normalizedUserRatingScore:(float)arg2 ;
@end
