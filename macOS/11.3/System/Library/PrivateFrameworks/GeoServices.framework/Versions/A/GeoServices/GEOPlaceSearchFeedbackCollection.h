/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	NSMutableArray* _actionCaptures;
	unsigned long long _businessID;
	long long _placeID;
	int _localSearchProviderID;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_businessID : 1;
		unsigned has_placeID : 1;
		unsigned has_localSearchProviderID : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) char hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID; 
@property (assign,nonatomic) char hasPlaceID; 
@property (assign,nonatomic) long long placeID; 
@property (nonatomic,retain) NSMutableArray * actionCaptures; 
@property (assign,nonatomic) char hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID; 
+(char)isValid:(id)arg1 ;
+(Class)actionCaptureType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setPlaceID:(long long)arg1 ;
-(void)addActionCapture:(id)arg1 ;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(unsigned long long)actionCapturesCount;
-(void)clearActionCaptures;
-(id)actionCaptureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)businessID;
-(void)setHasBusinessID:(char)arg1 ;
-(char)hasBusinessID;
-(long long)placeID;
-(void)setHasPlaceID:(char)arg1 ;
-(char)hasPlaceID;
-(NSMutableArray *)actionCaptures;
-(void)setActionCaptures:(NSMutableArray *)arg1 ;
-(int)localSearchProviderID;
-(void)setHasLocalSearchProviderID:(char)arg1 ;
-(char)hasLocalSearchProviderID;
@end

