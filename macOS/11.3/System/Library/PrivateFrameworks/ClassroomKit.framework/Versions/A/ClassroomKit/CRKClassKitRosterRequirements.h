/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKClassKitRosterRequirements <NSObject>
@property (nonatomic,readonly) long long accountState; 
@required
-(void)removeObserver:(id)arg1;
-(void)currentUserWithCompletion:(/*^block*/id)arg1;
-(void)executeQuery:(id)arg1;
-(void)saveClass:(id)arg1 completion:(/*^block*/id)arg2;
-(long long)accountState;
-(id)makeQueryForPersonsWithIdentifiers:(id)arg1;
-(char)ownsError:(id)arg1;
-(void)removeClass:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
-(void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)locationsWithObjectIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(char)arg3 pageSize:(long long)arg4;
-(id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(char)arg3 pageSize:(long long)arg4;
-(void)classesWithCompletion:(/*^block*/id)arg1;
-(id)objectIDsOfPersonsInClass:(id)arg1;
-(id)objectIDsOfTrustedPersonsInClass:(id)arg1;
-(void)addPerson:(id)arg1 toClass:(id)arg2;
-(void)removePerson:(id)arg1 fromClass:(id)arg2;
-(void)addTrustedPerson:(id)arg1 toClass:(id)arg2;
-(void)removeTrustedPerson:(id)arg1 fromClass:(id)arg2;
-(id)addGeneralObserver:(/*^block*/id)arg1;
-(id)addObserverForPersonIDs:(id)arg1 observerBlock:(/*^block*/id)arg2;
-(void)personsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)trustedPersonsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;

@end
