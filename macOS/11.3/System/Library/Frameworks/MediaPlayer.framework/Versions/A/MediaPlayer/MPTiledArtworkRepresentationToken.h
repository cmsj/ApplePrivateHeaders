/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSArray;

@interface MPTiledArtworkRepresentationToken : NSObject {

	id<NSCopying> _revisionIdentifier;
	NSArray* _tileArtworkVisualIdenticalityIdentifiers;

}

@property (nonatomic,copy) id<NSCopying> revisionIdentifier;                                //@synthesize revisionIdentifier=_revisionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * tileArtworkVisualIdenticalityIdentifiers;              //@synthesize tileArtworkVisualIdenticalityIdentifiers=_tileArtworkVisualIdenticalityIdentifiers - In the implementation block
-(void)setRevisionIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)revisionIdentifier;
-(NSArray *)tileArtworkVisualIdenticalityIdentifiers;
-(void)setTileArtworkVisualIdenticalityIdentifiers:(NSArray *)arg1 ;
@end

