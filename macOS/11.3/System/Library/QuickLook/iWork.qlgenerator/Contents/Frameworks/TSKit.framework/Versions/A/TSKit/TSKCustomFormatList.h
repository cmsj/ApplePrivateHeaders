/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, TSUNoCopyDictionary, TSUSparseArray, NSMutableSet;

@interface TSKCustomFormatList : TSPObject <NSCopying> {

	char _importing;
	char _upgrading;
	char _upgradingDone;
	char _importingDone;
	NSMutableDictionary* _formatsByKeyDictionary;
	TSUNoCopyDictionary* _keysByFormatDictionary;
	TSUNoCopyDictionary* _keysByFormatWithNameStemMatching;
	TSUSparseArray* _keysByIndex;
	TSUNoCopyDictionary* _indexesByKey;
	NSMutableSet* _namesList;

}

@property (nonatomic,retain) NSMutableDictionary * formatsByKeyDictionary;                        //@synthesize formatsByKeyDictionary=_formatsByKeyDictionary - In the implementation block
@property (nonatomic,retain) TSUNoCopyDictionary * keysByFormatDictionary;                        //@synthesize keysByFormatDictionary=_keysByFormatDictionary - In the implementation block
@property (nonatomic,retain) TSUNoCopyDictionary * keysByFormatWithNameStemMatching;              //@synthesize keysByFormatWithNameStemMatching=_keysByFormatWithNameStemMatching - In the implementation block
@property (nonatomic,retain) TSUSparseArray * keysByIndex;                                        //@synthesize keysByIndex=_keysByIndex - In the implementation block
@property (nonatomic,retain) TSUNoCopyDictionary * indexesByKey;                                  //@synthesize indexesByKey=_indexesByKey - In the implementation block
@property (nonatomic,retain) NSMutableSet * namesList;                                            //@synthesize namesList=_namesList - In the implementation block
@property (assign,nonatomic) char upgradingDone;                                                  //@synthesize upgradingDone=_upgradingDone - In the implementation block
@property (assign,nonatomic) char importingDone;                                                  //@synthesize importingDone=_importingDone - In the implementation block
@property (assign,nonatomic) char importing;                                                      //@synthesize importing=_importing - In the implementation block
@property (assign,nonatomic) char upgrading;                                                      //@synthesize upgrading=_upgrading - In the implementation block
+(void)archiveKeys:(id)arg1 message:(RepeatedPtrField<TSP::UUID>*)arg2 ;
+(id)unarchiveKeys:(const RepeatedPtrField<TSP::UUID>*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)count;
-(id)allKeys;
-(id)initWithContext:(id)arg1 ;
-(void)removeAll;
-(void)setImporting:(char)arg1 ;
-(id)customFormatForKey:(id)arg1 ;
-(char)importing;
-(char)upgrading;
-(void)setUpgrading:(char)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)keyForCustomFormat:(id)arg1 ;
-(void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg1 ;
-(id)addCustomFormat:(id)arg1 oldKey:(id)arg2 fuzzyNameMatching:(char)arg3 ;
-(id)upgradedCustomFormatKeyForLegacyID:(unsigned)arg1 ;
-(char)upgradingDone;
-(void)setUpgradingDone:(char)arg1 ;
-(char)importingDone;
-(void)setImportingDone:(char)arg1 ;
-(NSMutableDictionary *)formatsByKeyDictionary;
-(TSUNoCopyDictionary *)keysByFormatDictionary;
-(NSMutableSet *)namesList;
-(void)p_addCustomFormatToNameStemDict:(id)arg1 key:(id)arg2 ;
-(TSUSparseArray *)keysByIndex;
-(TSUNoCopyDictionary *)indexesByKey;
-(void)setFormatsByKeyDictionary:(NSMutableDictionary *)arg1 ;
-(void)setKeysByFormatDictionary:(TSUNoCopyDictionary *)arg1 ;
-(void)setNamesList:(NSMutableSet *)arg1 ;
-(TSUNoCopyDictionary *)keysByFormatWithNameStemMatching;
-(void)setKeysByFormatWithNameStemMatching:(TSUNoCopyDictionary *)arg1 ;
-(void)setKeysByIndex:(TSUSparseArray *)arg1 ;
-(void)setIndexesByKey:(TSUNoCopyDictionary *)arg1 ;
-(void)p_setCustomFormat:(id)arg1 key:(id)arg2 legacyKey:(unsigned)arg3 ;
-(id)p_keyForFormatUsingNameStem:(id)arg1 ;
-(void)p_setCustomFormat:(id)arg1 key:(id)arg2 ;
-(void)p_removeCustomFormatFromNameStemDict:(id)arg1 key:(id)arg2 ;
-(void)removeCustomFormatForKey:(id)arg1 ;
-(void)removeCustomFormatsForKeys:(id)arg1 ;
-(id)addedKeysRelativeTo:(id)arg1 ;
-(char)hasFormatNamed:(id)arg1 ;
-(unsigned long long)inspectorIndexForKey:(id)arg1 ;
-(id)keyForInspectorIndex:(unsigned long long)arg1 ;
-(char)p_validateNameStemCount;
-(void)updateCustomFormat:(id)arg1 oldKey:(id)arg2 ;
-(id)addImportedCustomFormat:(id)arg1 ;
-(void)addCustomFormatForUpgrade:(id)arg1 legacyKey:(unsigned)arg2 ;
@end

