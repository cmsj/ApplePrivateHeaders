/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSSet, PLPerson, PLDetectedFace;

@interface PLDetectedFaceGroup : PLManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (assign,nonatomic) int unnamedFaceCount; 
@property (nonatomic,retain) PLPerson * associatedPerson; 
@property (nonatomic,retain) PLDetectedFace * keyFace; 
@property (assign,nonatomic) int personBuilderState; 
+(id)entityName;
+(void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)detectedFaceGroupWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)awakeFromInsert;
-(void)willSave;
-(id)mutableDetectedFaces;
-(void)refreshFaces;
@end

