/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedFileList/SharedFileList-Structs.h>
#import <libobjc.A.dylib/SFLList.h>
#import <libobjc.A.dylib/SPMSharePointManagerObserver.h>
#import <libobjc.A.dylib/SFLSharePointsSet.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSArray, NSString, NSObject, NSHashTable, SPMSharePointManager, NSDictionary;

@interface SFLSharePointList : NSObject <SFLList, SPMSharePointManagerObserver, SFLSharePointsSet> {

	id _internalObservers;
	id _internalSharePointManager;
	id _items;
	unsigned long long _seed;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _internalQueue;
	os_unfair_lock_s _internalObserverLock;
	NSObject*<OS_dispatch_group> _internalInitializeGroup;

}

@property (readonly) NSHashTable * observers;                                       //@synthesize internalObservers=_internalObservers - In the implementation block
@property (readonly) SPMSharePointManager * internalSharePointManager;              //@synthesize internalSharePointManager=_internalSharePointManager - In the implementation block
@property (readonly) unsigned long long seed; 
@property (copy,readonly) NSArray * snapshotItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSArray * allItems; 
@property (copy) NSDictionary * properties; 
-(SPMSharePointManager *)internalSharePointManager;
-(void)_notifyObserverListInitialize:(id)arg1 ;
-(char)setPropertyValuesForKeysWithDictionary:(id)arg1 error:(id*)arg2 ;
-(char)removeItem:(id)arg1 error:(id*)arg2 ;
-(char)updateItem:(id)arg1 error:(id*)arg2 ;
-(char)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)insertItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3 ;
-(char)moveItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3 ;
-(NSArray *)snapshotItems;
-(void)sharePointsDidChange:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)_cfTypeID;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)removeAllItems;
-(NSHashTable *)observers;
-(unsigned long long)indexOfItem:(id)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(unsigned long long)seed;
-(char)addItem:(id)arg1 error:(id*)arg2 ;
-(NSArray *)allItems;
-(char)containsItem:(id)arg1 ;
-(void)_fetchItems;
-(void)_notifyObservers;
-(void)setAuthorization:(AuthorizationOpaqueRefRef)arg1 ;
@end

