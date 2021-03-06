/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@interface _NSCoreManagedObjectID : NSManagedObjectID
+(void)_storeDeallocated;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(char*)generatedNameSuffix;
+(id)_retain_1;
+(void)_release_1;
+(char)_usesTaggedPointers;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_setStoreInfo1:(id)arg1 ;
+(id)_storeInfo1;
+(id)retain;
+(void)release;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)alloc;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(long long)version;
+(char)accessInstanceVariablesDirectly;
+(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(char)_isPersistentStoreAlive;
-(id)_storeInfo1;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)entityName;
-(id)entity;
-(id)URIRepresentation;
-(char)isTemporaryID;
-(id)persistentStore;
-(id)_storeIdentifier;
@end

