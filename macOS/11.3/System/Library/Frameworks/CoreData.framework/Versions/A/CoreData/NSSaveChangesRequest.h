/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet, NSNotification;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {

	NSSet* _insertedObjects;
	NSSet* _updatedObjects;
	NSSet* _deletedObjects;
	NSSet* _optimisticallyLockedObjects;
	unsigned long long _flags;
	NSNotification* _mutatedObjectIDsNotification;

}

@property (readonly) NSSet * insertedObjects; 
@property (readonly) NSSet * updatedObjects; 
@property (readonly) NSSet * deletedObjects; 
@property (readonly) NSSet * lockedObjects; 
+(void)initialize;
-(id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4 ;
-(void)_setSecureOperation:(char)arg1 ;
-(char)_retryHandlerCount;
-(void)_setRetryHandlerCount:(char)arg1 ;
-(id)_changedObjectIDsNotification;
-(void)_setChangedObjectIDsNotification:(id)arg1 ;
-(NSSet *)lockedObjects;
-(void)setDeletedObjects:(NSSet *)arg1 ;
-(char)_secureOperation;
-(void)dealloc;
-(id)description;
-(id)init;
-(char)hasChanges;
-(NSSet *)insertedObjects;
-(unsigned long long)requestType;
-(NSSet *)updatedObjects;
-(NSSet *)deletedObjects;
@end
