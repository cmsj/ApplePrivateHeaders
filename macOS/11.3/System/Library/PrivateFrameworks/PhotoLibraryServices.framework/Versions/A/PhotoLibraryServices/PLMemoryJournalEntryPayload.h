/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString, NSSet;

@interface PLMemoryJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,retain) NSString * keyAssetUUID; 
@property (nonatomic,retain) NSSet * curatedAssetUUIDs; 
@property (nonatomic,retain) NSSet * extendedCuratedAssetUUIDs; 
@property (nonatomic,retain) NSSet * movieCuratedAssetUUIDs; 
@property (nonatomic,retain) NSSet * representativeAssetUUIDs; 
+(unsigned)payloadVersion;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)minimumSnapshotPayloadVersion;
+(char)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(NSString *)keyAssetUUID;
-(void)setKeyAssetUUID:(NSString *)arg1 ;
-(char)updateAssetsInMemory:(id)arg1 includePendingAssetChanges:(char)arg2 ;
-(id)insertMemoryFromDataInManagedObjectContext:(id)arg1 ;
-(char)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(char)arg2 ;
-(char)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(char)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(NSSet *)representativeAssetUUIDs;
-(NSSet *)curatedAssetUUIDs;
-(NSSet *)extendedCuratedAssetUUIDs;
-(NSSet *)movieCuratedAssetUUIDs;
-(void)setRepresentativeAssetUUIDs:(NSSet *)arg1 ;
-(void)setCuratedAssetUUIDs:(NSSet *)arg1 ;
-(void)setExtendedCuratedAssetUUIDs:(NSSet *)arg1 ;
-(void)setMovieCuratedAssetUUIDs:(NSSet *)arg1 ;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4 ;
@end

