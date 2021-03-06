/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFGalleryCollection.h>

@class CKRecordID, NSString, NSArray, NSDate;

@interface WFMutableGalleryCollection : WFGalleryCollection {

	CKRecordID* identifier;
	NSString* name;
	NSString* collectionDescription;
	NSArray* workflows;
	long long minVersion;
	NSDate* modifiedAt;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * collectionDescription; 
@property (nonatomic,copy) NSArray * workflows; 
@property (assign,nonatomic) long long minVersion; 
@property (nonatomic,retain) NSDate * modifiedAt; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)persistentIdentifier;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)collectionDescription;
-(CKRecordID *)base;
-(void)setBase:(CKRecordID *)arg1 ;
-(long long)minVersion;
-(void)setMinVersion:(long long)arg1 ;
-(void)setCollectionDescription:(NSString *)arg1 ;
-(NSArray *)workflows;
-(NSDate *)modifiedAt;
-(void)setWorkflows:(NSArray *)arg1 ;
-(void)setModifiedAt:(NSDate *)arg1 ;
@end

