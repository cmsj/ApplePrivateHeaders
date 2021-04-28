/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/Frameworks/DictationServices.framework/Versions/A/DictationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSString, NSDictionary, NSSet;

@interface SODictationCommandManager : NSObject {

	NSArray* _commandItems;
	NSArray* _commandsOnly;
	NSMutableArray* _newCommandItems;
	NSMutableArray* _deletedCommandIdentifiers;
	NSArray* _commandGroups;
	NSArray* _allCommandGroups;
	NSString* _searchString;
	NSString* _locale;
	NSArray* _externalCommandGroups;
	NSArray* _relevantCommandIdentifiers;
	NSDictionary* _additionalCommandInfo;
	NSSet* _excludedSearchWordSet;
	NSDictionary* _conflictDictionary;
	char _usedByPreferences;

}

@property (nonatomic,retain) NSString * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                 //@synthesize searchString=_searchString - In the implementation block
@property (readonly) char isSearching; 
@property (nonatomic,retain) NSArray * externalCommandGroups;                         //@synthesize externalCommandGroups=_externalCommandGroups - In the implementation block
@property (nonatomic,retain) NSArray * relevantCommandIdentifiers;                    //@synthesize relevantCommandIdentifiers=_relevantCommandIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalCommandInfo;                    //@synthesize additionalCommandInfo=_additionalCommandInfo - In the implementation block
@property (nonatomic,readonly) NSArray * nestedCommandGroupsAndItems; 
@property (nonatomic,readonly) NSArray * flattenedCommandGroupsAndItems; 
@property (assign,nonatomic) char usedByPreferences;                                  //@synthesize usedByPreferences=_usedByPreferences - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(char)isSearching;
-(void)saveChanges;
-(NSArray *)flattenedCommandGroupsAndItems;
-(void)setRelevantCommandIdentifiers:(NSArray *)arg1 ;
-(void)setAdditionalCommandInfo:(NSDictionary *)arg1 ;
-(void)setExternalCommandGroups:(NSArray *)arg1 ;
-(void)discardChanges;
-(void)setGroup:(id)arg1 isCollapsed:(char)arg2 ;
-(char)groupIsCollapsed:(id)arg1 ;
-(NSDictionary *)additionalCommandInfo;
-(void)setUsedByPreferences:(char)arg1 ;
-(void)refreshItemWithIdentifier:(id)arg1 ;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ;
-(void)sortCustomCommands;
-(void)addCustomCommandItem:(id)arg1 ;
-(void)deleteCustomCommandAtIndex:(unsigned long long)arg1 ;
-(void)resetConflicts;
-(char)hasConflicts;
-(id)itemsConflictingWithItem:(id)arg1 ;
-(void)_flushCommands;
-(void)_deepFlush;
-(NSArray *)nestedCommandGroupsAndItems;
-(id)_filteredCommandGroupsAndItemsWithSearchString:(id)arg1 ;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ignoreGroups:(char)arg2 ;
-(NSArray *)externalCommandGroups;
-(NSArray *)relevantCommandIdentifiers;
-(char)usedByPreferences;
@end
