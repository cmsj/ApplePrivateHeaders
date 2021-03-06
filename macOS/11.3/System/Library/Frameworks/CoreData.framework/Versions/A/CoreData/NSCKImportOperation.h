/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, NSData, NSSet;

@interface NSCKImportOperation : NSManagedObject

@property (nonatomic,retain) NSDate * importDate; 
@property (nonatomic,retain) NSUUID * operationUUID; 
@property (nonatomic,retain) NSData * changeTokenBytes; 
@property (nonatomic,retain) NSSet * pendingRelationships; 
+(id)entityPath;
+(id)fetchUnfinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOperationWithIdentifier:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(char)purgeFinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
@end

