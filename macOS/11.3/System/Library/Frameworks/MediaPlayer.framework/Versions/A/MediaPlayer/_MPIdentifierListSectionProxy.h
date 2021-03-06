/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPMutableIdentifierListSection.h>

@class NSString, NSArray, MPSectionedIdentifierList, NSMutableArray;

@interface _MPIdentifierListSectionProxy : NSObject <MPMutableIdentifierListSection> {

	NSString* _sectionIdentifier;
	MPSectionedIdentifierList* _sectionedIdentifierList;
	NSMutableArray* _mutableItemIdentifiers;

}

@property (nonatomic,retain) NSMutableArray * mutableItemIdentifiers;                                   //@synthesize mutableItemIdentifiers=_mutableItemIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;                                       //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) MPSectionedIdentifierList * sectionedIdentifierList;              //@synthesize sectionedIdentifierList=_sectionedIdentifierList - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeItem:(id)arg1 ;
-(NSArray *)itemIdentifiers;
-(NSString *)sectionIdentifier;
-(void)updateItem:(id)arg1 ;
-(MPSectionedIdentifierList *)sectionedIdentifierList;
-(id)initWithSection:(id)arg1 sectionedIdentifierList:(id)arg2 existingItemIdentifiers:(id)arg3 ;
-(void)insertItemsAtHead:(id)arg1 ;
-(void)insertItems:(id)arg1 afterItem:(id)arg2 ;
-(void)insertItemsAtTail:(id)arg1 ;
-(void)moveItemToHead:(id)arg1 ;
-(void)moveItem:(id)arg1 afterItem:(id)arg2 ;
-(void)moveItemToTail:(id)arg1 ;
-(void)updateSection;
-(void)applyChanges:(id)arg1 itemLookupBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableItemIdentifiers;
-(void)setMutableItemIdentifiers:(NSMutableArray *)arg1 ;
@end

