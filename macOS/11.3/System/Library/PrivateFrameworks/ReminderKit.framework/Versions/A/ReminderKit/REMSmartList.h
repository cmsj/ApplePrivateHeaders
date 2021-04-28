/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMObjectIDProviding.h>

@class REMStore, REMSmartListStorage, REMResolutionTokenMap, NSData, REMObjectID, NSString;

@interface REMSmartList : NSObject <REMObjectIDProviding> {

	REMStore* _store;
	REMSmartListStorage* _storage;

}

@property (nonatomic,copy) REMSmartListStorage * storage;                               //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,readonly) NSData * resolutionTokenMapData; 
@property (assign,nonatomic) char isPersisted; 
@property (nonatomic,readonly) REMStore * store;                                        //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,copy) NSString * smartListType; 
@property (nonatomic,readonly) NSString * sortingStyle; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
-(char)isEqual:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMSmartListStorage *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(REMStore *)store;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setStorage:(REMSmartListStorage *)arg1 ;
-(REMObjectID *)remObjectID;
-(id)initWithStore:(id)arg1 storage:(id)arg2 ;
-(id)optionalObjectID;
@end
