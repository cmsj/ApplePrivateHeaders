/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFStoreComparisonCache.h>

@class NSMutableDictionary;

@interface PFCloudKitStoreComparisonCache : PFStoreComparisonCache {

	NSMutableDictionary* _mtmKeyToStoreUUIDToMirroredRelationship;
	NSMutableDictionary* _storeUUIDToMtmKeys;
	NSMutableDictionary* _storeUUIDToRecordIDToRelationshipNameToRelatedRecordIDs;
	NSMutableDictionary* _recordIDToStoreUUIDToMetadata;
	NSMutableDictionary* _objectIDToRecordMetadata;
	NSMutableDictionary* _storeIdentifierToRecordIDs;
	NSMutableDictionary* _recordIDToStoreUUIDToObjectID;
	NSMutableDictionary* _objectIDToRecordID;

}
-(void)cacheRecordMetadata:(id)arg1 ;
-(void)cacheMirroredRelationship:(id)arg1 withManagedObjectModel:(id)arg2 ;
-(id)objectIDForRecordID:(id)arg1 inStore:(id)arg2 ;
-(id)recordIdsForStore:(id)arg1 ;
-(id)mtmKeysForStore:(id)arg1 ;
-(id)recordIDsRelatedToRecordID:(id)arg1 byRelationshipNamed:(id)arg2 inStore:(id)arg3 ;
-(id)recordIDForObjectID:(id)arg1 ;
-(id)mirroredRelationshipForObject:(id)arg1 relatedToObject:(id)arg2 byRelationship:(id)arg3 ;
-(id)metadataForObjectWithID:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

