/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface ML3MigrationMisgroupedAlbum : NSObject {

	NSMutableArray* _misgroupedTracks;
	long long _albumPID;
	long long _albumArtistPID;

}

@property (nonatomic,readonly) long long albumPID;                      //@synthesize albumPID=_albumPID - In the implementation block
@property (nonatomic,readonly) long long albumArtistPID;                //@synthesize albumArtistPID=_albumArtistPID - In the implementation block
@property (nonatomic,readonly) NSArray * misgroupedTracks; 
-(id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2 ;
-(void)addMisgroupedTrack:(id)arg1 ;
-(NSArray *)misgroupedTracks;
-(long long)albumArtistPID;
-(long long)albumPID;
@end
