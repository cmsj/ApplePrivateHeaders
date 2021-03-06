/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString;

@interface MIPAlbum : PBCodable <NSCopying> {

	long long _persistentId;
	long long _storeId;
	MIPArtist* _artist;
	NSString* _artworkId;
	NSString* _cloudId;
	NSString* _name;
	int _numDiscs;
	int _numTracks;
	NSString* _sortName;
	int _userRating;
	char _compilation;
	SCD_Struct_MI11 _has;

}

@property (assign,nonatomic) char hasStoreId; 
@property (assign,nonatomic) long long storeId;                   //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasSortName; 
@property (nonatomic,retain) NSString * sortName;                 //@synthesize sortName=_sortName - In the implementation block
@property (nonatomic,readonly) char hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                  //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) char hasNumTracks; 
@property (assign,nonatomic) int numTracks;                       //@synthesize numTracks=_numTracks - In the implementation block
@property (assign,nonatomic) char hasNumDiscs; 
@property (assign,nonatomic) int numDiscs;                        //@synthesize numDiscs=_numDiscs - In the implementation block
@property (nonatomic,readonly) char hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) char hasUserRating; 
@property (assign,nonatomic) int userRating;                      //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) char hasCompilation; 
@property (assign,nonatomic) char compilation;                    //@synthesize compilation=_compilation - In the implementation block
@property (assign,nonatomic) char hasPersistentId; 
@property (assign,nonatomic) long long persistentId;              //@synthesize persistentId=_persistentId - In the implementation block
@property (nonatomic,readonly) char hasCloudId; 
@property (nonatomic,retain) NSString * cloudId;                  //@synthesize cloudId=_cloudId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(MIPArtist *)artist;
-(char)hasName;
-(void)setArtist:(MIPArtist *)arg1 ;
-(long long)storeId;
-(void)setStoreId:(long long)arg1 ;
-(char)hasArtist;
-(int)userRating;
-(char)compilation;
-(NSString *)sortName;
-(void)setCompilation:(char)arg1 ;
-(void)setUserRating:(int)arg1 ;
-(void)setHasUserRating:(char)arg1 ;
-(char)hasUserRating;
-(int)numDiscs;
-(int)numTracks;
-(long long)persistentId;
-(char)hasCompilation;
-(char)hasNumDiscs;
-(char)hasNumTracks;
-(char)hasStoreId;
-(char)hasCloudId;
-(char)hasSortName;
-(char)hasPersistentId;
-(char)hasArtworkId;
-(NSString *)cloudId;
-(NSString *)artworkId;
-(void)setHasStoreId:(char)arg1 ;
-(void)setPersistentId:(long long)arg1 ;
-(void)setHasPersistentId:(char)arg1 ;
-(void)setSortName:(NSString *)arg1 ;
-(void)setArtworkId:(NSString *)arg1 ;
-(void)setCloudId:(NSString *)arg1 ;
-(void)setNumTracks:(int)arg1 ;
-(void)setHasNumTracks:(char)arg1 ;
-(void)setNumDiscs:(int)arg1 ;
-(void)setHasNumDiscs:(char)arg1 ;
-(void)setHasCompilation:(char)arg1 ;
@end

