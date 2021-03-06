/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFRoutines : NSObject
+(id)_getUUID;
+(void)_logFileAccessDebugInformation:(const char*)arg1 ;
+(char)_isInMemoryStoreURL:(id)arg1 ;
+(id)_getPFBundleVersionNumber;
+(long long)integerValueForOverride:(id)arg1 ;
+(char)boolValueForOverride:(id)arg1 ;
+(id)stringValueForOverride:(id)arg1 ;
+(id)newSetOfObjectIDsFromCollection:(id)arg1 ;
+(id)newSetFromCollection:(id)arg1 byAddingItems:(id)arg2 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsByEntity:(id)arg1 ;
+(id)newOrderedSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)newMutableArrayFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)newMutableArrayFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(id)newMutableSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(id)newMutableOrderedSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(id)newMutableSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(char)_objectsInOrderedCollection:(id)arg1 formSubstringInOrderedCollection:(id)arg2 ;
+(id)newOrderedSetFromCollection:(id)arg1 byAddingItems:(id)arg2 ;
+(id)_replaceBaseline:(id)arg1 inOrderedSet:(id)arg2 withOrderedSet:(id)arg3 ;
+(void)getIndexes:(unsigned*)arg1 fromCollection:(id)arg2 forObjectsInCollection:(id)arg3 ;
+(id)newArrayOfObjectIDsFromCollection:(id)arg1 ;
+(char)isSanitizedVersionOf:(id)arg1 equalTo:(id)arg2 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsIDByRootEntity:(id)arg1 ;
+(unsigned long long)_generateUbiquityHashForPath:(id)arg1 ;
+(id)_rootEntityGroupsForObjects:(id)arg1 passingBlock:(/*^block*/id)arg2 ;
+(id)valueForProcessArgument:(id)arg1 ;
+(char)createExternalReferenceLinkFromPath:(id)arg1 toPath:(id)arg2 protectionLevel:(int)arg3 error:(id*)arg4 ;
+(id)invalidXMLCharacterSet;
+(char)isInvalidXMLCharacter:(unsigned short)arg1 ;
+(unsigned short*)_protectEvilCharacter:(unsigned short)arg1 ;
+(unsigned short)_unprotectEvilCharacter:(id)arg1 ;
+(id)revertInvalidXMLEscapedString:(id)arg1 ;
+(id)_dataFromBase64String:(id)arg1 ;
+(id)retainedDecodeValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(id)newCollection:(Class)arg1 fromCollection:(id)arg2 byAddingItems:(id)arg3 ;
+(id)_newCollectionFromCollection:(id)arg1 forParentContext:(id)arg2 andClass:(Class)arg3 ;
+(id)newMutableOrderedSetFromCollection:(id)arg1 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsByRootEntity:(id)arg1 ;
+(CFDictionaryRef)_createDictionaryPartitioningObjects:(id)arg1 intoHierarchies:(char)arg2 ;
+(CFDictionaryRef)_createDictionaryPartitioningObjectIDs:(id)arg1 intoHierarchies:(char)arg2 ;
+(char)_generateObjectIDMaptableForArray:(id)arg1 withMapping:(id*)arg2 andEntries:(id*)arg3 ;
+(id)_newObjectIDsArrayWithMapping:(id)arg1 andEntries:(id)arg2 andCoordinator:(id)arg3 ;
+(id)_frameworkHash;
+(id)_remoteChangeNotificationNameForStore:(id)arg1 ;
+(id)_groupObjectsByRootEntity:(id)arg1 ;
+(id)_coalescedPrefetchKeypaths:(id)arg1 ;
+(void)generateSHA512:(char*)arg1 forStrings:(id)arg2 ;
+(char)_doNameAndTypeCheck:(id)arg1 ;
+(char)convertCString:(const char*)arg1 toUnsignedInt64:(unsigned long long*)arg2 withBase:(int)arg3 ;
+(id)attributeClassesForSecureCoding;
+(id)plistClassesForSecureCoding;
+(id)writePFExternalReferenceDataToInterimFile:(id)arg1 ;
+(char)moveInterimFileToPermanentLocation:(id)arg1 ;
+(void*)readExternalReferenceDataFromFile:(id)arg1 ;
+(void)readBytesForExternalReferenceData:(id)arg1 intoBuffer:(void*)arg2 range:(NSRange)arg3 ;
+(id)newMappedDataForExternalReference:(id)arg1 ;
+(long long)lengthOfFileAtExternalReferenceLocation:(const char*)arg1 ;
+(void)deleteFileForPFExternalReferenceData:(id)arg1 ;
+(void)cleanupExternalReferenceLink:(const char*)arg1 ;
+(void)attemptToUpdatePermissionsForFileAtPath:(const char*)arg1 toLevel:(int)arg2 ;
+(char)_isInMemoryStore:(id)arg1 ;
+(void)setOrRemoveValue:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3 ;
+(id)_createNicksBase64EncodedStringFromData:(id)arg1 ;
+(id)_base64StringFromData:(id)arg1 ;
+(id)escapeInvalidXMLCharactersInString:(id)arg1 ;
+(id)_convert:(id)arg1 toValueClassUsing:(id)arg2 ;
+(id)simpleNodesFromXMLDocument:(id)arg1 atPath:(id)arg2 ;
+(id)retainedEncodeObjectValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(id)newOrderedSetFromCollection:(id)arg1 ;
+(id)anyObjectFromCollection:(id)arg1 ;
+(id)newOrderedSetOfObjectIDsFromCollection:(id)arg1 ;
+(id)newOrderedSetFromCollection:(id)arg1 byInsertingItems:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(id)newMutableSetFromCollection:(id)arg1 byIntersectingWithCollection:(id)arg2 ;
+(char)_expressionIsCompoundIndexCompatible:(id)arg1 ;
+(id)fetchHeterogeneousCollectionByObjectIDs:(id)arg1 intoContext:(id)arg2 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsIDByEntity:(id)arg1 ;
+(char)isUbiquitousURLUploaded:(id)arg1 error:(id*)arg2 ;
+(char)isUbiquitousURLDownloaded:(id)arg1 error:(id*)arg2 ;
+(id)applicationDeactivateLifecyleNotifications;
+(id)applicationActivateLifecyleNotifications;
+(void)wrapBlockInGuardedAutoreleasePool:(/*^block*/id)arg1 ;
+(void)efficientlyEnumerateManagedObjectsInFetchRequest:(id)arg1 usingManagedObjectContext:(id)arg2 andApplyBlock:(/*^block*/id)arg3 ;
+(void)initialize;
+(id)sanitize:(id)arg1 ;
@end

