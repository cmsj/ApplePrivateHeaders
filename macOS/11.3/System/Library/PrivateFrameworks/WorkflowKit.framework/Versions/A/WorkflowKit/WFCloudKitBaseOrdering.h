/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFCloudKitOrdering.h>

@class NSString, NSOrderedSet, CKRecordID, NSData, NSArray;

@interface WFCloudKitBaseOrdering : NSObject <WFCloudKitOrdering> {

	CKRecordID* _identifier;
	NSData* _recordSystemFieldsData;
	NSArray* _orderedWorkflowIDsArray;
	NSArray* _orderedFolderIDsArray;

}

@property (nonatomic,readonly) NSArray * orderedWorkflowIDsArray;              //@synthesize orderedWorkflowIDsArray=_orderedWorkflowIDsArray - In the implementation block
@property (nonatomic,readonly) NSArray * orderedFolderIDsArray;                //@synthesize orderedFolderIDsArray=_orderedFolderIDsArray - In the implementation block
@property (nonatomic,readonly) NSString * collectionIdentifier; 
@property (nonatomic,readonly) NSOrderedSet * orderedWorkflowIDs; 
@property (nonatomic,readonly) NSOrderedSet * orderedFolderIDs; 
@property (nonatomic,readonly) CKRecordID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData;                    //@synthesize recordSystemFieldsData=_recordSystemFieldsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordType;
+(id)properties;
+(id)collectionIdentifierForRecordID:(id)arg1 ;
+(id)recordBasename;
-(CKRecordID *)identifier;
-(NSString *)collectionIdentifier;
-(NSData *)recordSystemFieldsData;
-(NSOrderedSet *)orderedWorkflowIDs;
-(NSOrderedSet *)orderedFolderIDs;
-(void)setRecordSystemFieldsData:(NSData *)arg1 ;
-(id)initWithIdentifier:(id)arg1 orderedWorkflowIDs:(id)arg2 orderedFolderIDs:(id)arg3 ;
-(NSArray *)orderedWorkflowIDsArray;
-(NSArray *)orderedFolderIDsArray;
@end

