/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPReader.h>
#import <TSPersistence/TSPDatabaseUnarchiverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, TSPDatabase, NSHashTable, TSPComponent, NSString;

@interface TSPDatabaseReader : TSPReader <TSPDatabaseUnarchiverDelegate> {

	NSObject*<OS_dispatch_queue> _databaseQueue;
	TSPDatabase* _database;
	unsigned long long _databaseVersion;
	IdentifierMap<long long>* _readIdentifiers;
	NSHashTable* _datas;

}

@property (nonatomic,readonly) long long componentIdentifier; 
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) char didFinishResolvingReferences; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) char canRetainObjectReferencedByWeakLazyReference; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
@property (nonatomic,readonly) TSPComponent * component; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)objectUUIDMap;
-(id)dataForIdentifier:(long long)arg1 referencedByObjectIdentifier:(long long)arg2 objectClass:(Class)arg3 ;
-(id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 ;
-(void)beginReadingWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2 ;
-(void)unarchiveObjectWithIdentifierAsync:(long long)arg1 referencedByObjectIdentifier:(long long)arg2 objectClass:(Class)arg3 ;
-(id)newUnarchiverWithDatabaseObject:(id)arg1 ;
-(Message*)newDataMessageForDatabaseObject:(id)arg1 ;
-(Message*)newImageDataMessageForDatabaseObject:(id)arg1 ;
-(char)validateObjectIdentifierForObject:(id)arg1 ;
-(void)resolveReferences;
-(id)appRelativePathForOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(id)dataForOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(id)filenameFromOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long>>*)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long>>*)arg1 ;
-(id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 database:(id)arg4 databaseVersion:(unsigned long long)arg5 ;
-(void)enumerateDataAppRelativePathsUsingBlock:(/*^block*/id)arg1 ;
@end
