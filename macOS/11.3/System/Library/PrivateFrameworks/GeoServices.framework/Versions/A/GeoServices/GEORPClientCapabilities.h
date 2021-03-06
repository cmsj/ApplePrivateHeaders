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

@interface GEORPClientCapabilities : PBCodable <NSCopying> {

	int _transitMarketSupport;
	char _hasConstrainedProblemStatusSize;
	char _hasFeatureHandle;
	char _hasNoOptInRequest;
	char _hasSupportForIdsBasedNotifications;
	struct {
		unsigned has_transitMarketSupport : 1;
		unsigned has_hasConstrainedProblemStatusSize : 1;
		unsigned has_hasFeatureHandle : 1;
		unsigned has_hasNoOptInRequest : 1;
		unsigned has_hasSupportForIdsBasedNotifications : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasHasConstrainedProblemStatusSize; 
@property (assign,nonatomic) char hasConstrainedProblemStatusSize; 
@property (assign,nonatomic) char hasHasNoOptInRequest; 
@property (assign,nonatomic) char hasNoOptInRequest; 
@property (assign,nonatomic) char hasHasFeatureHandle; 
@property (assign,nonatomic) char hasFeatureHandle; 
@property (assign,nonatomic) char hasHasSupportForIdsBasedNotifications; 
@property (assign,nonatomic) char hasSupportForIdsBasedNotifications; 
@property (assign,nonatomic) char hasTransitMarketSupport; 
@property (assign,nonatomic) int transitMarketSupport; 
+(char)isValid:(id)arg1 ;
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
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasConstrainedProblemStatusSize:(char)arg1 ;
-(void)setHasNoOptInRequest:(char)arg1 ;
-(void)setHasFeatureHandle:(char)arg1 ;
-(void)setHasSupportForIdsBasedNotifications:(char)arg1 ;
-(void)setTransitMarketSupport:(int)arg1 ;
-(char)hasConstrainedProblemStatusSize;
-(void)setHasHasConstrainedProblemStatusSize:(char)arg1 ;
-(char)hasHasConstrainedProblemStatusSize;
-(char)hasNoOptInRequest;
-(void)setHasHasNoOptInRequest:(char)arg1 ;
-(char)hasHasNoOptInRequest;
-(char)hasFeatureHandle;
-(void)setHasHasFeatureHandle:(char)arg1 ;
-(char)hasHasFeatureHandle;
-(char)hasSupportForIdsBasedNotifications;
-(void)setHasHasSupportForIdsBasedNotifications:(char)arg1 ;
-(char)hasHasSupportForIdsBasedNotifications;
-(int)transitMarketSupport;
-(void)setHasTransitMarketSupport:(char)arg1 ;
-(char)hasTransitMarketSupport;
-(id)transitMarketSupportAsString:(int)arg1 ;
-(int)StringAsTransitMarketSupport:(id)arg1 ;
@end

