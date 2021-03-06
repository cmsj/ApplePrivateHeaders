/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBDailyStatusEvent : PBCodable <NSCopying> {

	unsigned _appComplicationSlotsUsed;
	unsigned _appSessionCount;
	NSString* _automationSuggestionsTrialIdentifier;
	unsigned _averageShortcutCountPerFolder;
	unsigned _folderCount;
	NSString* _key;
	unsigned _numberOfLargeWidgets;
	unsigned _numberOfMediumWidgets;
	unsigned _numberOfPersonalAutomationsEnabled;
	unsigned _numberOfPersonalAutomationsFromSuggestionsEnabled;
	unsigned _numberOfSmallWidgets;
	unsigned _numberOfSuggestedAutomationsGenerated;
	unsigned _numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
	unsigned _numberOfWidgetsOnHomeScreen;
	unsigned _numberOfWidgetsOnLoL;
	unsigned _shortcutComplicationSlotsUsed;
	unsigned _shortcutRunCount;
	unsigned _shortcutsCount;
	unsigned _sleepShortcutsCount;
	unsigned _uncategorizedShortcutCount;
	unsigned _watchShortcutCount;
	char _homeAutomationsEnabled;
	char _installed;
	char _personalAutomationsEnabled;
	char _sharingEnabled;
	char _sleepEnabled;
	SCD_Struct_WF15 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                                                            //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasInstalled; 
@property (assign,nonatomic) char installed;                                                            //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) char hasSharingEnabled; 
@property (assign,nonatomic) char sharingEnabled;                                                       //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,nonatomic) char hasPersonalAutomationsEnabled; 
@property (assign,nonatomic) char personalAutomationsEnabled;                                           //@synthesize personalAutomationsEnabled=_personalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) char hasHomeAutomationsEnabled; 
@property (assign,nonatomic) char homeAutomationsEnabled;                                               //@synthesize homeAutomationsEnabled=_homeAutomationsEnabled - In the implementation block
@property (assign,nonatomic) char hasShortcutComplicationSlotsUsed; 
@property (assign,nonatomic) unsigned shortcutComplicationSlotsUsed;                                    //@synthesize shortcutComplicationSlotsUsed=_shortcutComplicationSlotsUsed - In the implementation block
@property (assign,nonatomic) char hasAppComplicationSlotsUsed; 
@property (assign,nonatomic) unsigned appComplicationSlotsUsed;                                         //@synthesize appComplicationSlotsUsed=_appComplicationSlotsUsed - In the implementation block
@property (assign,nonatomic) char hasSleepEnabled; 
@property (assign,nonatomic) char sleepEnabled;                                                         //@synthesize sleepEnabled=_sleepEnabled - In the implementation block
@property (assign,nonatomic) char hasShortcutsCount; 
@property (assign,nonatomic) unsigned shortcutsCount;                                                   //@synthesize shortcutsCount=_shortcutsCount - In the implementation block
@property (assign,nonatomic) char hasFolderCount; 
@property (assign,nonatomic) unsigned folderCount;                                                      //@synthesize folderCount=_folderCount - In the implementation block
@property (assign,nonatomic) char hasAverageShortcutCountPerFolder; 
@property (assign,nonatomic) unsigned averageShortcutCountPerFolder;                                    //@synthesize averageShortcutCountPerFolder=_averageShortcutCountPerFolder - In the implementation block
@property (assign,nonatomic) char hasUncategorizedShortcutCount; 
@property (assign,nonatomic) unsigned uncategorizedShortcutCount;                                       //@synthesize uncategorizedShortcutCount=_uncategorizedShortcutCount - In the implementation block
@property (assign,nonatomic) char hasShortcutRunCount; 
@property (assign,nonatomic) unsigned shortcutRunCount;                                                 //@synthesize shortcutRunCount=_shortcutRunCount - In the implementation block
@property (assign,nonatomic) char hasAppSessionCount; 
@property (assign,nonatomic) unsigned appSessionCount;                                                  //@synthesize appSessionCount=_appSessionCount - In the implementation block
@property (assign,nonatomic) char hasWatchShortcutCount; 
@property (assign,nonatomic) unsigned watchShortcutCount;                                               //@synthesize watchShortcutCount=_watchShortcutCount - In the implementation block
@property (assign,nonatomic) char hasSleepShortcutsCount; 
@property (assign,nonatomic) unsigned sleepShortcutsCount;                                              //@synthesize sleepShortcutsCount=_sleepShortcutsCount - In the implementation block
@property (assign,nonatomic) char hasNumberOfSmallWidgets; 
@property (assign,nonatomic) unsigned numberOfSmallWidgets;                                             //@synthesize numberOfSmallWidgets=_numberOfSmallWidgets - In the implementation block
@property (assign,nonatomic) char hasNumberOfMediumWidgets; 
@property (assign,nonatomic) unsigned numberOfMediumWidgets;                                            //@synthesize numberOfMediumWidgets=_numberOfMediumWidgets - In the implementation block
@property (assign,nonatomic) char hasNumberOfLargeWidgets; 
@property (assign,nonatomic) unsigned numberOfLargeWidgets;                                             //@synthesize numberOfLargeWidgets=_numberOfLargeWidgets - In the implementation block
@property (assign,nonatomic) char hasNumberOfWidgetsOnHomeScreen; 
@property (assign,nonatomic) unsigned numberOfWidgetsOnHomeScreen;                                      //@synthesize numberOfWidgetsOnHomeScreen=_numberOfWidgetsOnHomeScreen - In the implementation block
@property (assign,nonatomic) char hasNumberOfWidgetsOnLoL; 
@property (assign,nonatomic) unsigned numberOfWidgetsOnLoL;                                             //@synthesize numberOfWidgetsOnLoL=_numberOfWidgetsOnLoL - In the implementation block
@property (assign,nonatomic) char hasNumberOfPersonalAutomationsEnabled; 
@property (assign,nonatomic) unsigned numberOfPersonalAutomationsEnabled;                               //@synthesize numberOfPersonalAutomationsEnabled=_numberOfPersonalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) char hasNumberOfPersonalAutomationsFromSuggestionsEnabled; 
@property (assign,nonatomic) unsigned numberOfPersonalAutomationsFromSuggestionsEnabled;                //@synthesize numberOfPersonalAutomationsFromSuggestionsEnabled=_numberOfPersonalAutomationsFromSuggestionsEnabled - In the implementation block
@property (assign,nonatomic) char hasNumberOfSuggestedAutomationsGenerated; 
@property (assign,nonatomic) unsigned numberOfSuggestedAutomationsGenerated;                            //@synthesize numberOfSuggestedAutomationsGenerated=_numberOfSuggestedAutomationsGenerated - In the implementation block
@property (assign,nonatomic) char hasNumberOfSuggestedAutomationsGeneratedUserAlreadyHas; 
@property (assign,nonatomic) unsigned numberOfSuggestedAutomationsGeneratedUserAlreadyHas;              //@synthesize numberOfSuggestedAutomationsGeneratedUserAlreadyHas=_numberOfSuggestedAutomationsGeneratedUserAlreadyHas - In the implementation block
@property (nonatomic,readonly) char hasAutomationSuggestionsTrialIdentifier; 
@property (nonatomic,retain) NSString * automationSuggestionsTrialIdentifier;                           //@synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)installed;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)setInstalled:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasKey;
-(unsigned)shortcutsCount;
-(char)sharingEnabled;
-(void)setSharingEnabled:(char)arg1 ;
-(void)setHasInstalled:(char)arg1 ;
-(char)hasInstalled;
-(char)personalAutomationsEnabled;
-(void)setPersonalAutomationsEnabled:(char)arg1 ;
-(char)homeAutomationsEnabled;
-(void)setHomeAutomationsEnabled:(char)arg1 ;
-(char)sleepEnabled;
-(void)setSleepEnabled:(char)arg1 ;
-(unsigned)shortcutComplicationSlotsUsed;
-(void)setShortcutComplicationSlotsUsed:(unsigned)arg1 ;
-(unsigned)appComplicationSlotsUsed;
-(void)setAppComplicationSlotsUsed:(unsigned)arg1 ;
-(unsigned)averageShortcutCountPerFolder;
-(void)setAverageShortcutCountPerFolder:(unsigned)arg1 ;
-(void)setShortcutsCount:(unsigned)arg1 ;
-(unsigned)uncategorizedShortcutCount;
-(void)setUncategorizedShortcutCount:(unsigned)arg1 ;
-(unsigned)watchShortcutCount;
-(void)setWatchShortcutCount:(unsigned)arg1 ;
-(unsigned)folderCount;
-(void)setFolderCount:(unsigned)arg1 ;
-(unsigned)numberOfPersonalAutomationsEnabled;
-(void)setNumberOfPersonalAutomationsEnabled:(unsigned)arg1 ;
-(unsigned)numberOfPersonalAutomationsFromSuggestionsEnabled;
-(void)setNumberOfPersonalAutomationsFromSuggestionsEnabled:(unsigned)arg1 ;
-(unsigned)shortcutRunCount;
-(void)setShortcutRunCount:(unsigned)arg1 ;
-(unsigned)appSessionCount;
-(void)setAppSessionCount:(unsigned)arg1 ;
-(unsigned)sleepShortcutsCount;
-(void)setSleepShortcutsCount:(unsigned)arg1 ;
-(unsigned)numberOfSmallWidgets;
-(void)setNumberOfSmallWidgets:(unsigned)arg1 ;
-(unsigned)numberOfMediumWidgets;
-(void)setNumberOfMediumWidgets:(unsigned)arg1 ;
-(unsigned)numberOfLargeWidgets;
-(void)setNumberOfLargeWidgets:(unsigned)arg1 ;
-(unsigned)numberOfWidgetsOnHomeScreen;
-(void)setNumberOfWidgetsOnHomeScreen:(unsigned)arg1 ;
-(unsigned)numberOfWidgetsOnLoL;
-(void)setNumberOfWidgetsOnLoL:(unsigned)arg1 ;
-(unsigned)numberOfSuggestedAutomationsGenerated;
-(void)setNumberOfSuggestedAutomationsGenerated:(unsigned)arg1 ;
-(unsigned)numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
-(void)setNumberOfSuggestedAutomationsGeneratedUserAlreadyHas:(unsigned)arg1 ;
-(NSString *)automationSuggestionsTrialIdentifier;
-(void)setAutomationSuggestionsTrialIdentifier:(NSString *)arg1 ;
-(void)setHasSharingEnabled:(char)arg1 ;
-(char)hasSharingEnabled;
-(void)setHasPersonalAutomationsEnabled:(char)arg1 ;
-(char)hasPersonalAutomationsEnabled;
-(void)setHasHomeAutomationsEnabled:(char)arg1 ;
-(char)hasHomeAutomationsEnabled;
-(void)setHasShortcutComplicationSlotsUsed:(char)arg1 ;
-(char)hasShortcutComplicationSlotsUsed;
-(void)setHasAppComplicationSlotsUsed:(char)arg1 ;
-(char)hasAppComplicationSlotsUsed;
-(void)setHasSleepEnabled:(char)arg1 ;
-(char)hasSleepEnabled;
-(void)setHasShortcutsCount:(char)arg1 ;
-(char)hasShortcutsCount;
-(void)setHasFolderCount:(char)arg1 ;
-(char)hasFolderCount;
-(void)setHasAverageShortcutCountPerFolder:(char)arg1 ;
-(char)hasAverageShortcutCountPerFolder;
-(void)setHasUncategorizedShortcutCount:(char)arg1 ;
-(char)hasUncategorizedShortcutCount;
-(void)setHasShortcutRunCount:(char)arg1 ;
-(char)hasShortcutRunCount;
-(void)setHasAppSessionCount:(char)arg1 ;
-(char)hasAppSessionCount;
-(void)setHasWatchShortcutCount:(char)arg1 ;
-(char)hasWatchShortcutCount;
-(void)setHasSleepShortcutsCount:(char)arg1 ;
-(char)hasSleepShortcutsCount;
-(void)setHasNumberOfSmallWidgets:(char)arg1 ;
-(char)hasNumberOfSmallWidgets;
-(void)setHasNumberOfMediumWidgets:(char)arg1 ;
-(char)hasNumberOfMediumWidgets;
-(void)setHasNumberOfLargeWidgets:(char)arg1 ;
-(char)hasNumberOfLargeWidgets;
-(void)setHasNumberOfWidgetsOnHomeScreen:(char)arg1 ;
-(char)hasNumberOfWidgetsOnHomeScreen;
-(void)setHasNumberOfWidgetsOnLoL:(char)arg1 ;
-(char)hasNumberOfWidgetsOnLoL;
-(void)setHasNumberOfPersonalAutomationsEnabled:(char)arg1 ;
-(char)hasNumberOfPersonalAutomationsEnabled;
-(void)setHasNumberOfPersonalAutomationsFromSuggestionsEnabled:(char)arg1 ;
-(char)hasNumberOfPersonalAutomationsFromSuggestionsEnabled;
-(void)setHasNumberOfSuggestedAutomationsGenerated:(char)arg1 ;
-(char)hasNumberOfSuggestedAutomationsGenerated;
-(void)setHasNumberOfSuggestedAutomationsGeneratedUserAlreadyHas:(char)arg1 ;
-(char)hasNumberOfSuggestedAutomationsGeneratedUserAlreadyHas;
-(char)hasAutomationSuggestionsTrialIdentifier;
@end

