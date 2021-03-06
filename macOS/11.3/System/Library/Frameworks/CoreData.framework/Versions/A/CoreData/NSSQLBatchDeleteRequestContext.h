/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSFetchRequest, NSArray, NSSQLFetchRequestContext, NSString, NSBatchDeleteRequest;

@interface NSSQLBatchDeleteRequestContext : NSSQLStoreRequestContext {

	NSFetchRequest* _fetchRequestForObjectsToDelete;
	NSArray* _deleteStatements;
	NSArray* _deletedObjectIDs;
	NSSQLFetchRequestContext* _fetchContext;
	NSArray* _externalDataReferenceTriggerStatements;
	NSString* _tempTableName;
	NSArray* _externalDataReferencesToDelete;
	NSArray* _fileBackedFuturesToDelete;

}

@property (nonatomic,readonly) NSBatchDeleteRequest * request; 
@property (nonatomic,retain,readonly) NSFetchRequest * fetchRequestForObjectsToDelete; 
@property (nonatomic,retain,readonly) NSArray * deleteStatements;                                   //@synthesize deleteStatements=_deleteStatements - In the implementation block
@property (nonatomic,retain,readonly) NSSQLFetchRequestContext * fetchContext; 
@property (nonatomic,retain) NSArray * affectedObjectIDs;                                           //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,retain) NSArray * exernalDataReferenceStatements;                              //@synthesize externalDataReferenceTriggerStatements=_externalDataReferenceTriggerStatements - In the implementation block
@property (nonatomic,retain) NSString * tempTableName;                                              //@synthesize tempTableName=_tempTableName - In the implementation block
@property (nonatomic,retain) NSArray * externalDataReferencesToDelete;                              //@synthesize externalDataReferencesToDelete=_externalDataReferencesToDelete - In the implementation block
@property (nonatomic,retain) NSArray * fileBackedFuturesToDelete;                                   //@synthesize fileBackedFuturesToDelete=_fileBackedFuturesToDelete - In the implementation block
-(void)executePrologue;
-(NSString *)tempTableName;
-(void)setTempTableName:(NSString *)arg1 ;
-(NSFetchRequest *)fetchRequestForObjectsToDelete;
-(NSArray *)affectedObjectIDs;
-(void)setExernalDataReferenceStatements:(NSArray *)arg1 ;
-(NSArray *)exernalDataReferenceStatements;
-(void)setExternalDataReferencesToDelete:(NSArray *)arg1 ;
-(void)setFileBackedFuturesToDelete:(NSArray *)arg1 ;
-(id)_createFetchRequestContextForObjectsToDelete;
-(void)_createDeleteStatements;
-(char)isWritingRequest;
-(NSArray *)deleteStatements;
-(char)executeRequestCore:(id*)arg1 ;
-(void)setAffectedObjectIDs:(NSArray *)arg1 ;
-(NSArray *)externalDataReferencesToDelete;
-(NSArray *)fileBackedFuturesToDelete;
-(void)dealloc;
-(NSBatchDeleteRequest *)request;
-(NSSQLFetchRequestContext *)fetchContext;
@end

