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

@interface GEOLogMsgStateMapsFeatures : PBCodable <NSCopying> {

	int _favoritesCount;
	int _followedPublisherCount;
	int _personalCollectionsCount;
	int _savedCollectionsCount;
	int _submittedPhotosCount;
	int _submittedRatingsCount;
	char _homeFavoriteSet;
	char _schoolFavoriteSet;
	char _workFavoriteSet;
	struct {
		unsigned has_favoritesCount : 1;
		unsigned has_followedPublisherCount : 1;
		unsigned has_personalCollectionsCount : 1;
		unsigned has_savedCollectionsCount : 1;
		unsigned has_submittedPhotosCount : 1;
		unsigned has_submittedRatingsCount : 1;
		unsigned has_homeFavoriteSet : 1;
		unsigned has_schoolFavoriteSet : 1;
		unsigned has_workFavoriteSet : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasHomeFavoriteSet; 
@property (assign,nonatomic) char homeFavoriteSet; 
@property (assign,nonatomic) char hasWorkFavoriteSet; 
@property (assign,nonatomic) char workFavoriteSet; 
@property (assign,nonatomic) char hasSchoolFavoriteSet; 
@property (assign,nonatomic) char schoolFavoriteSet; 
@property (assign,nonatomic) char hasFavoritesCount; 
@property (assign,nonatomic) int favoritesCount; 
@property (assign,nonatomic) char hasPersonalCollectionsCount; 
@property (assign,nonatomic) int personalCollectionsCount; 
@property (assign,nonatomic) char hasSavedCollectionsCount; 
@property (assign,nonatomic) int savedCollectionsCount; 
@property (assign,nonatomic) char hasFollowedPublisherCount; 
@property (assign,nonatomic) int followedPublisherCount; 
@property (assign,nonatomic) char hasSubmittedRatingsCount; 
@property (assign,nonatomic) int submittedRatingsCount; 
@property (assign,nonatomic) char hasSubmittedPhotosCount; 
@property (assign,nonatomic) int submittedPhotosCount; 
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
-(void)setHomeFavoriteSet:(char)arg1 ;
-(void)setWorkFavoriteSet:(char)arg1 ;
-(void)setSchoolFavoriteSet:(char)arg1 ;
-(void)setFavoritesCount:(int)arg1 ;
-(void)setPersonalCollectionsCount:(int)arg1 ;
-(void)setSavedCollectionsCount:(int)arg1 ;
-(void)setFollowedPublisherCount:(int)arg1 ;
-(void)setSubmittedRatingsCount:(int)arg1 ;
-(void)setSubmittedPhotosCount:(int)arg1 ;
-(char)homeFavoriteSet;
-(void)setHasHomeFavoriteSet:(char)arg1 ;
-(char)hasHomeFavoriteSet;
-(char)workFavoriteSet;
-(void)setHasWorkFavoriteSet:(char)arg1 ;
-(char)hasWorkFavoriteSet;
-(char)schoolFavoriteSet;
-(void)setHasSchoolFavoriteSet:(char)arg1 ;
-(char)hasSchoolFavoriteSet;
-(int)favoritesCount;
-(void)setHasFavoritesCount:(char)arg1 ;
-(char)hasFavoritesCount;
-(int)personalCollectionsCount;
-(void)setHasPersonalCollectionsCount:(char)arg1 ;
-(char)hasPersonalCollectionsCount;
-(int)savedCollectionsCount;
-(void)setHasSavedCollectionsCount:(char)arg1 ;
-(char)hasSavedCollectionsCount;
-(int)followedPublisherCount;
-(void)setHasFollowedPublisherCount:(char)arg1 ;
-(char)hasFollowedPublisherCount;
-(int)submittedRatingsCount;
-(void)setHasSubmittedRatingsCount:(char)arg1 ;
-(char)hasSubmittedRatingsCount;
-(int)submittedPhotosCount;
-(void)setHasSubmittedPhotosCount:(char)arg1 ;
-(char)hasSubmittedPhotosCount;
@end

