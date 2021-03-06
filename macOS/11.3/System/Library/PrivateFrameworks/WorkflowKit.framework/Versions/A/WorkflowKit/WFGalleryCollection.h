/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFCloudKitItem.h>
#import <libobjc.A.dylib/WFSortableGalleryObject.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, CKRecordID, NSArray, NSDate, NSData;

@interface WFGalleryCollection : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying> {

	CKRecordID* _identifier;
	NSString* _name;
	NSString* _collectionDescription;
	NSArray* _workflows;
	long long _minVersion;
	NSDate* _modifiedAt;
	NSString* _language;
	CKRecordID* _base;
	NSString* _persistentIdentifier;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * collectionDescription;              //@synthesize collectionDescription=_collectionDescription - In the implementation block
@property (nonatomic,readonly) NSArray * workflows;                           //@synthesize workflows=_workflows - In the implementation block
@property (nonatomic,readonly) long long minVersion;                          //@synthesize minVersion=_minVersion - In the implementation block
@property (nonatomic,readonly) NSDate * modifiedAt;                           //@synthesize modifiedAt=_modifiedAt - In the implementation block
@property (nonatomic,readonly) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) CKRecordID * base;                             //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) NSString * persistentIdentifier;               //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) CKRecordID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordType;
+(id)properties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)persistentIdentifier;
-(NSString *)language;
-(NSString *)collectionDescription;
-(CKRecordID *)base;
-(long long)minVersion;
-(NSArray *)workflows;
-(unsigned long long)referenceActionForKey:(id)arg1 ;
-(void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3 ;
-(NSDate *)modifiedAt;
@end

