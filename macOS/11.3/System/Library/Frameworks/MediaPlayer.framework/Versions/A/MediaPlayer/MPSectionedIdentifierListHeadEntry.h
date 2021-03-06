/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationTrackingEntry.h>

@protocol MPSectionedIdentifierListDataSource;
@class NSMutableDictionary, MPSectionedIdentifierListTailEntry, MPSectionedIdentifierListItemEntry, NSString;

@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {

	char _shuffledHead;
	NSMutableDictionary* _identifiersItemEntryMap;
	MPSectionedIdentifierListTailEntry* _tailEntry;
	MPSectionedIdentifierListItemEntry* _lastItemEntry;
	id<MPSectionedIdentifierListDataSource> _dataSource;

}

@property (nonatomic,readonly) NSMutableDictionary * identifiersItemEntryMap;                 //@synthesize identifiersItemEntryMap=_identifiersItemEntryMap - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierListTailEntry * tailEntry;                  //@synthesize tailEntry=_tailEntry - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierListItemEntry * lastItemEntry;              //@synthesize lastItemEntry=_lastItemEntry - In the implementation block
@property (nonatomic,retain) id<MPSectionedIdentifierListDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isShuffledHead,nonatomic) char shuffledHead;                         //@synthesize shuffledHead=_shuffledHead - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)headEntryWithSectionIdentifier:(id)arg1 ;
-(NSString *)description;
-(id<MPSectionedIdentifierListDataSource>)dataSource;
-(void)setDataSource:(id<MPSectionedIdentifierListDataSource>)arg1 ;
-(long long)entryType;
-(id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)nextEntries;
-(void)setBranchDepth:(long long)arg1 ;
-(MPSectionedIdentifierListItemEntry *)lastItemEntry;
-(NSMutableDictionary *)identifiersItemEntryMap;
-(MPSectionedIdentifierListTailEntry *)tailEntry;
-(void)setTailEntry:(MPSectionedIdentifierListTailEntry *)arg1 ;
-(void)setLastItemEntry:(MPSectionedIdentifierListItemEntry *)arg1 ;
-(char)isShuffledHead;
-(void)setShuffledHead:(char)arg1 ;
@end

