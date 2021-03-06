/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph;

@interface PGSearchMetadataComputer : NSObject {

	PGGraph* _graph;

}

@property (readonly) PGGraph * graph;              //@synthesize graph=_graph - In the implementation block
-(PGGraph *)graph;
-(id)initWithGraph:(id)arg1 ;
-(id)searchMetadataWithOptions:(id)arg1 ;
-(id)_mePersonUUID;
-(id)_sceneWhitelist;
-(id)_blacklistedMeaningsByMeaning;
@end

