/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaItemCollection.h>

@class NSArray, MPMediaQuery, NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {

	NSArray* _representativeArtists;
	MPMediaQuery* _seedTracksQuery;

}

@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * cloudGlobalID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long playlistAttributes; 
@property (nonatomic,readonly) NSArray * seedItems; 
@property (nonatomic,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) NSString * authorDisplayName; 
+(char)supportsSecureCoding;
+(char)_isValidPlaylistProperty:(id)arg1 ;
+(char)canFilterByProperty:(id)arg1 ;
+(void)_createFilterableDictionary;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)items;
-(unsigned long long)persistentID;
-(unsigned long long)mediaTypes;
-(NSString *)descriptionText;
-(id)artworkCatalog;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)initWithPersistentID:(unsigned long long)arg1 mediaLibrary:(id)arg2 ;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(char)existsInLibrary;
-(unsigned long long)playlistAttributes;
-(NSArray *)seedItems;
-(NSString *)authorDisplayName;
-(void)removeFirstItem;
-(id)representativeItem;
-(id)multiverseIdentifier;
-(id)representativeArtists;
-(id)seedTracksQuery;
-(char)isCloudMix;
-(NSString *)cloudGlobalID;
-(id)artworkCatalogsWithMaximumCount:(unsigned long long)arg1 ;
-(id)tiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 ;
@end
