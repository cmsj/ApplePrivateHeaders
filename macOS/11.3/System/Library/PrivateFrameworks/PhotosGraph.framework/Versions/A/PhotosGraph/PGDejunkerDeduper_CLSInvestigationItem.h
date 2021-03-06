/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGDejunkerDeduper.h>

@class NSDictionary, NSSet;

@interface PGDejunkerDeduper_CLSInvestigationItem : PGDejunkerDeduper {

	NSDictionary* _personLocalIdentifiersByItemIdentifier;
	NSDictionary* _peopleScenesByItemIdentifier;
	NSDictionary* _averageFaceQualityByItemIdentifier;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (nonatomic,retain) NSSet * verifiedPersonLocalIdentifiers;              //@synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers - In the implementation block
-(void)setVerifiedPersonLocalIdentifiers:(NSSet *)arg1 ;
-(id)dejunkedDedupedItemIdentifiersWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 ;
-(id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)bestItemsInItems:(id)arg1 options:(id)arg2 ;
-(char)isJunkForItem:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg1 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1 ;
-(id)featureWithItem:(id)arg1 ;
-(id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2 ;
-(id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(char*)arg3 ;
-(NSSet *)verifiedPersonLocalIdentifiers;
-(void)_buildCachesWithItems:(id)arg1 options:(id)arg2 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 ;
-(char)item:(id)arg1 isStrongRequiredWithOptions:(id)arg2 ;
-(char)item:(id)arg1 isWeaklyRequiredWithOptions:(id)arg2 ;
@end

