/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface SLDatabase : NSObject {

	NSString* _modelPath;
	NSString* _storePath;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;

}
-(id)_persistentStoreCoordinator;
-(char)save:(id*)arg1 ;
-(id)_managedObjectModel;
-(id)initWithStoreName:(id)arg1 modelPath:(id)arg2 ;
-(void)_setUpManagedObjectContext;
-(void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)newObjectForEntityNamed:(id)arg1 ;
@end

