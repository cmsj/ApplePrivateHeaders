/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MIPArtist : PBCodable <NSCopying> {

	long long _persistentId;
	long long _storeId;
	NSString* _artworkId;
	NSString* _cloudUniversalLibraryId;
	NSString* _name;
	NSString* _sortName;
	SCD_Struct_MI1 _has;

}

@property (assign,nonatomic) char hasStoreId; 
@property (assign,nonatomic) long long storeId;                               //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasSortName; 
@property (nonatomic,retain) NSString * sortName;                             //@synthesize sortName=_sortName - In the implementation block
@property (nonatomic,readonly) char hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                            //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) char hasPersistentId; 
@property (assign,nonatomic) long long persistentId;                          //@synthesize persistentId=_persistentId - In the implementation block
@property (nonatomic,readonly) char hasCloudUniversalLibraryId; 
@property (nonatomic,retain) NSString * cloudUniversalLibraryId;              //@synthesize cloudUniversalLibraryId=_cloudUniversalLibraryId - In the implementation block
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
-(char)hasName;
-(long long)storeId;
-(void)setStoreId:(long long)arg1 ;
-(NSString *)sortName;
-(long long)persistentId;
-(char)hasStoreId;
-(char)hasCloudUniversalLibraryId;
-(char)hasSortName;
-(char)hasPersistentId;
-(char)hasArtworkId;
-(NSString *)cloudUniversalLibraryId;
-(NSString *)artworkId;
-(void)setHasStoreId:(char)arg1 ;
-(void)setPersistentId:(long long)arg1 ;
-(void)setHasPersistentId:(char)arg1 ;
-(void)setSortName:(NSString *)arg1 ;
-(void)setArtworkId:(NSString *)arg1 ;
-(void)setCloudUniversalLibraryId:(NSString *)arg1 ;
@end

