/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {

	GEOSessionID _sessionGUID;
	long long _businessID;
	double _timestamp;
	int _feedbackType;
	int _localSearchProviderID;
	int _numberOfResults;
	int _positionInResults;
	int _sequenceNumber;
	struct {
		unsigned has_sessionGUID : 1;
		unsigned has_businessID : 1;
		unsigned has_timestamp : 1;
		unsigned has_feedbackType : 1;
		unsigned has_localSearchProviderID : 1;
		unsigned has_numberOfResults : 1;
		unsigned has_positionInResults : 1;
		unsigned has_sequenceNumber : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) char hasSessionGUID; 
@property (assign,nonatomic) GEOSessionID sessionGUID; 
@property (assign,nonatomic) char hasBusinessID; 
@property (assign,nonatomic) long long businessID; 
@property (assign,nonatomic) char hasFeedbackType; 
@property (assign,nonatomic) int feedbackType; 
@property (assign,nonatomic) char hasNumberOfResults; 
@property (assign,nonatomic) int numberOfResults; 
@property (assign,nonatomic) char hasPositionInResults; 
@property (assign,nonatomic) int positionInResults; 
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber; 
@property (assign,nonatomic) char hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(int)sequenceNumber;
-(void)setSequenceNumber:(int)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(char)hasTimestamp;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(void)setBusinessID:(long long)arg1 ;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(long long)businessID;
-(void)setHasBusinessID:(char)arg1 ;
-(char)hasBusinessID;
-(int)localSearchProviderID;
-(void)setHasLocalSearchProviderID:(char)arg1 ;
-(char)hasLocalSearchProviderID;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setSessionGUID:(GEOSessionID)arg1 ;
-(void)setFeedbackType:(int)arg1 ;
-(void)setNumberOfResults:(int)arg1 ;
-(void)setPositionInResults:(int)arg1 ;
-(GEOSessionID)sessionGUID;
-(void)setHasSessionGUID:(char)arg1 ;
-(char)hasSessionGUID;
-(int)feedbackType;
-(void)setHasFeedbackType:(char)arg1 ;
-(char)hasFeedbackType;
-(id)feedbackTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackType:(id)arg1 ;
-(int)numberOfResults;
-(void)setHasNumberOfResults:(char)arg1 ;
-(char)hasNumberOfResults;
-(int)positionInResults;
-(void)setHasPositionInResults:(char)arg1 ;
-(char)hasPositionInResults;
@end
