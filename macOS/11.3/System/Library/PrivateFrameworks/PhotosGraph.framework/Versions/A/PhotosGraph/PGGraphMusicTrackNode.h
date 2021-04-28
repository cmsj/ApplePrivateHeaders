/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString, NSSet;

@interface PGGraphMusicTrackNode : PGGraphOptimizedNode {

	NSString* _title;
	double _durationInSeconds;

}

@property (nonatomic,readonly) NSSet * albumNodes; 
@property (nonatomic,readonly) NSSet * genreNodes; 
@property (nonatomic,readonly) NSSet * artistNodes; 
@property (readonly) double durationInSeconds;                   //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
+(id)musicTrackTitleSortDescriptors;
-(id)description;
-(id)init;
-(unsigned short)domain;
-(id)label;
-(NSString *)title;
-(char)hasProperties:(id)arg1 ;
-(double)durationInSeconds;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(void)enumerateAlbumNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateGenreNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateArtistNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)albumNodes;
-(NSSet *)genreNodes;
-(NSSet *)artistNodes;
@end
