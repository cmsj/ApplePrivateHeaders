/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsPersistence/CNCDMigrator.h>

@class NSArray;

@interface CNCDDuplicateInfoCleanupMigrator : CNCDMigrator {

	NSArray* _recordsToRemove;

}

@property (copy) NSArray * recordsToRemove;              //@synthesize recordsToRemove=_recordsToRemove - In the implementation block
+(id)os_log;
-(void)migrate;
-(id)initWithContext:(id)arg1 store:(id)arg2 ;
-(void)fetchInfosWithNoContainer;
-(char)areRepairsNeeded;
-(void)warnRecordsWillBeRemoved;
-(void)removeInvalidRecords;
-(void)saveContext;
-(NSArray *)recordsToRemove;
-(void)setRecordsToRemove:(NSArray *)arg1 ;
@end

