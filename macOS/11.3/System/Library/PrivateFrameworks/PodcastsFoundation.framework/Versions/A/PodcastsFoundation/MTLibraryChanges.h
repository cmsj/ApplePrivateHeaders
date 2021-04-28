/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface MTLibraryChanges : NSObject <NSCopying> {

	NSMutableDictionary* _changesByEntityName;

}

@property (nonatomic,retain) NSMutableDictionary * changesByEntityName;              //@synthesize changesByEntityName=_changesByEntityName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(char)hasChanges;
-(id)entityNames;
-(char)hasDeletes;
-(char)hasInserts;
-(char)hasUpdates;
-(void)addChangeWith:(id)arg1 entityName:(id)arg2 changeType:(int)arg3 ;
-(void)combineChanges:(id)arg1 ;
-(NSMutableDictionary *)changesByEntityName;
-(void)setChangesByEntityName:(NSMutableDictionary *)arg1 ;
-(id)changesForEntityName:(id)arg1 ;
-(char)hasChangesForEntityNames:(id)arg1 ;
-(char)hasInsertsForEntityNames:(id)arg1 ;
-(char)hasDeletesForEntityNames:(id)arg1 ;
-(char)hasUpdatesForEntityNames:(id)arg1 ;
-(void)removeAllChanges;
@end
