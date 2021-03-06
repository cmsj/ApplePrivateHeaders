/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray;

@interface _INVocabularyGenerationDocument : NSObject <NSCopying> {

	NSMutableDictionary* _itemsBySiriIDCache;
	NSMutableDictionary* _itemsByStringCache;
	char _resetOnNextSync;
	char _haveAssignedAllSiriIDs;
	NSString* _appBundleID;
	NSString* _intentSlot;
	NSString* _validity;
	NSString* _thisGeneration;
	NSArray* _vocabularyItems;

}

@property (assign,nonatomic) char haveAssignedAllSiriIDs;              //@synthesize haveAssignedAllSiriIDs=_haveAssignedAllSiriIDs - In the implementation block
@property (assign,nonatomic) char resetOnNextSync;                     //@synthesize resetOnNextSync=_resetOnNextSync - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                     //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy) NSString * intentSlot;                      //@synthesize intentSlot=_intentSlot - In the implementation block
@property (nonatomic,copy) NSString * validity;                        //@synthesize validity=_validity - In the implementation block
@property (nonatomic,copy) NSString * thisGeneration;                  //@synthesize thisGeneration=_thisGeneration - In the implementation block
@property (nonatomic,copy) NSArray * vocabularyItems;                  //@synthesize vocabularyItems=_vocabularyItems - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithContentsOfFile:(id)arg1 ;
-(NSString *)appBundleID;
-(id)_dictionaryRepresentation;
-(id)_initWithDictionary:(id)arg1 ;
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
-(void)setAppBundleID:(NSString *)arg1 ;
-(id)_itemsBySiriID;
-(id)_everyVocabularyItemSiriID;
-(id)_vocabularyItemForSiriID:(id)arg1 ;
-(id)_vocabularyItemWithString:(id)arg1 ;
-(void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)arg1 ;
-(id)diffFromPreviousDocument:(id)arg1 ;
-(void)_clearVocabularyItemCaches;
-(void)setVocabularyItems:(NSArray *)arg1 ;
-(void)_addValueForSelector:(SEL)arg1 toDictionary:(id)arg2 ;
-(id)_valueForSelector:(SEL)arg1 ofClass:(Class)arg2 from:(id)arg3 ;
-(id)_stringForSelector:(SEL)arg1 from:(id)arg2 ;
-(void)_takeValuesFromDictionary:(id)arg1 ;
-(id)writeToFile:(id)arg1 createIntermediateDirectories:(char)arg2 ;
-(char)resetOnNextSync;
-(void)setResetOnNextSync:(char)arg1 ;
-(NSString *)intentSlot;
-(void)setIntentSlot:(NSString *)arg1 ;
-(NSString *)thisGeneration;
-(void)setThisGeneration:(NSString *)arg1 ;
-(NSArray *)vocabularyItems;
-(char)haveAssignedAllSiriIDs;
-(void)setHaveAssignedAllSiriIDs:(char)arg1 ;
@end

