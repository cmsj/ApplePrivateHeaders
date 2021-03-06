/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel;

@interface NSPersistentContainer : NSObject {

	NSArray* _storeDescriptions;
	NSString* _name;
	NSManagedObjectContext* _viewContext;
	NSPersistentStoreCoordinator* _storeCoordinator;

}

@property (copy,readonly) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (readonly) NSManagedObjectContext * viewContext;                                   //@synthesize viewContext=_viewContext - In the implementation block
@property (readonly) NSManagedObjectModel * managedObjectModel; 
@property (readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize storeCoordinator=_storeCoordinator - In the implementation block
@property (copy) NSArray * persistentStoreDescriptions; 
+(Class)persistentStoreDescriptionClass;
+(id)_newModelForName:(id)arg1 ;
+(id)persistentContainerWithName:(id)arg1 ;
+(id)persistentContainerWithPath:(id)arg1 ;
+(id)persistentContainerWithPath:(id)arg1 modelNamed:(id)arg2 ;
+(id)persistentContainerUsingCachedModelWithPath:(id)arg1 ;
+(id)defaultDirectoryURL;
+(id)persistentContainerWithName:(id)arg1 managedObjectModel:(id)arg2 ;
+(id)persistentContainerWithPath:(id)arg1 managedObjectModel:(id)arg2 ;
-(id)_createDefaultStoreDescriptions;
-(void)_loadStoreDescriptions:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSManagedObjectModel *)managedObjectModel;
-(char)load:(id*)arg1 ;
-(void)loadPersistentStoresWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)newBackgroundContext;
-(id)initWithName:(id)arg1 managedObjectModel:(id)arg2 ;
-(void)setPersistentStoreDescriptions:(NSArray *)arg1 ;
-(NSArray *)persistentStoreDescriptions;
-(void)performBackgroundTask:(/*^block*/id)arg1 ;
-(NSManagedObjectContext *)viewContext;
@end

