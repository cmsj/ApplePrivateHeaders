/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObjectContext.h>

@interface MTManagedObjectContext : NSManagedObjectContext {

	char _isResetable;
	long long _type;

}

@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char isResetable;              //@synthesize isResetable=_isResetable - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)reset;
-(void)deleteObject:(id)arg1 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)objectWithID:(id)arg1 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)insertObject:(id)arg1 ;
-(id)objectRegisteredForID:(id)arg1 ;
-(void)validateConcurencyType;
-(void)validatePodcastDeletion:(id)arg1 ;
-(char)handleError:(id*)arg1 withCallback:(/*^block*/id)arg2 ;
-(char)_isInternalCoreDataQueue;
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicate:(id)arg2 ;
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicateFormat:(id)arg2 ;
-(void)seedCacheWithObjectsInArray:(id)arg1 forUUIDKey:(id)arg2 entityName:(id)arg3 ;
-(char)isResetable;
-(void)setIsResetable:(char)arg1 ;
@end

