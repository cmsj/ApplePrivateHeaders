/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSString, ISDIdMapDatabase;

@interface ISDRecordIdMapper : NSObject {

	NSMutableSet* _entityNames;
	NSMutableDictionary* _globalIdMap;
	NSMutableDictionary* _localIdMap;
	NSMutableDictionary* _unresolvedLocalIdMap;
	NSMutableDictionary* _phantomUnresolvedIdMap;
	NSString* _path;
	unsigned long long _flushCount;
	char _dirty;
	ISDIdMapDatabase* _constructedIdMapper;
	NSMutableSet* _newLocalIdMappings;
	char _useLocalsAsGlobals;
	NSMutableDictionary* _unknownRecordTypes;

}
+(id)legacyGlobalIdFromConstructedLocalId:(id)arg1 ;
+(id)defaultMapperFileName;
+(id)recordIdMapperWithContentsOfFile:(id)arg1 ;
+(id)recordIdMapperInDataDirectory:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDirty:(char)arg1 ;
-(void)commit;
-(void)vacuum;
-(void)resetState;
-(id)verboseDescription;
-(void)disableFlush;
-(void)enableFlush;
-(void)setUseLocalIdsAsGlobalIds:(char)arg1 ;
-(id)localIdForGlobalId:(id)arg1 ;
-(id)recordDictionaryByConvertingIds:(id)arg1 inRecordDictionary:(id)arg2 entity:(id)arg3 ;
-(id)entityNameForGlobalId:(id)arg1 ;
-(id)changeByConvertingIds:(id)arg1 inChange:(id)arg2 entity:(id)arg3 ;
-(char)hasMappingForLocalId:(id)arg1 ;
-(id)globalIdForUnresolvedLocalId:(id)arg1 ;
-(id)globalIdForLocalId:(id)arg1 ;
-(void)replaceLocalId:(id)arg1 withLocalId:(id)arg2 ;
-(char)hasUnresolvedReferences;
-(id)unresolvedReferences;
-(id)globalIdFromConstructedLocalId:(id)arg1 ;
-(void)removeUnresolvedLocalId:(id)arg1 ;
-(id)unresolvedGlobalIdentifiers;
-(id)unresolvedLocalIdentifiers;
-(id)entityNameForLocalId:(id)arg1 ;
-(void)removeMappingsForGlobalIds:(id)arg1 ;
-(void)removeMappingsForEntityNames:(id)arg1 ;
-(void)noteUnresolvedPhantomWithGlobalId:(id)arg1 ;
-(id)recordIdentifiersOfUnknownType;
-(void)noteRecordIdentifier:(id)arg1 withUnknownType:(id)arg2 ;
-(id)cleanLocalIdForLocalId:(id)arg1 ;
-(char)isRecordIdentifierOfUnknownType:(id)arg1 ;
-(char)isRecordIdentifierOfUnknownTypeFromThisSession:(id)arg1 ;
-(void)noteUnresolvedPhantomWithGlobalId:(id)arg1 forLocalId:(id)arg2 ;
-(char)removeRecordIdentifierOfUnknownType:(id)arg1 ;
-(void)setMappingWithGlobalId:(id)arg1 localId:(id)arg2 entityName:(id)arg3 ;
-(id)changeByConvertingLocalIdsToGlobalIdsInChange:(id)arg1 entity:(id)arg2 ;
-(id)recordDictionaryByConvertingLocalIdsToGlobalIdsInRecordDictionary:(id)arg1 entity:(id)arg2 ;
-(void)removePurgedMappings;
-(id)changeByConvertingGlobalIdsToLocalIdsInChange:(id)arg1 entity:(id)arg2 ;
-(id)recordIdMapForLocalId:(id)arg1 isCached:(char*)arg2 ;
-(void)freeOSResources;
-(id)initWithQuickDirtyCoder:(id)arg1 ;
-(void)encodeWithQuickDirtyCoder:(id)arg1 ;
-(int)isd_quickDirtyCoderType;
-(id)constructedIdMapper;
-(char)_writeToFile:(id)arg1 ;
-(char)commitMappings;
-(id)localIdConstructedFromGlobalId:(id)arg1 useLocalIdAsGlobalId:(char)arg2 ;
-(id)recordIdMapForGlobalId:(id)arg1 isCached:(char*)arg2 ;
-(id)localIdForGlobalId:(id)arg1 useLocalIdAsGlobalId:(char)arg2 ;
-(void)setGlobalId:(id)arg1 forUnresolvedLocalId:(id)arg2 ;
-(id)_safeGlobalIdForLocalId:(id)arg1 useConstructedIdMap:(char)arg2 ;
-(id)createUnresolvedGlobalIdForLocalId:(id)arg1 ;
-(id)globalIdForLocalId:(id)arg1 useLocalIdAsGlobalId:(char)arg2 useConstructedIdMap:(char)arg3 ;
-(char)hasMappingForLocalId:(id)arg1 useConstructedIdMap:(char)arg2 ;
-(void)noteNewMappingForLocalId:(id)arg1 ;
-(void)changeUnresolvedLocalId:(id)arg1 toUnresolvedLocalId:(id)arg2 ;
-(void)removeMappingsForEntityNames:(id)arg1 truth:(id)arg2 ;
-(id)globalIdForLocalIdUsingConstructedIdMap:(id)arg1 ;
-(id)convertRecordIdentifiers:(id)arg1 fromLocalToGlobal:(char)arg2 ;
-(id)recordDictionaryByConvertingRecordIdsInRecordDictionary:(id)arg1 entity:(id)arg2 fromLocalToGlobal:(char)arg3 ;
-(id)changeByConvertingRecordIdsInChange:(id)arg1 entity:(id)arg2 fromLocalToGlobal:(char)arg3 ;
-(id)_valueByConvertingIds:(id)arg1 inValue:(id)arg2 ;
-(void)removeMappingForGlobalId:(id)arg1 ;
-(char)isLocalIdConstructedFromGlobalId:(id)arg1 ;
-(id)localIdConstructedFromGlobalId:(id)arg1 ;
-(id)_localIdForGlobalIdIgnoringConstructedIds:(id)arg1 ;
-(id)allLocalIds;
-(id)allGlobalIds;
-(char)hasMappingForGlobalId:(id)arg1 ;
-(char)useLocalIdsAsGlobalIds;
-(void)replaceGlobalId:(id)arg1 withGlobalId:(id)arg2 ;
-(id)recordDictionaryByConvertingGlobalIdsToLocalIdsInRecordDictionary:(id)arg1 entity:(id)arg2 ;
-(id)unresolvedPhantoms;
@end

