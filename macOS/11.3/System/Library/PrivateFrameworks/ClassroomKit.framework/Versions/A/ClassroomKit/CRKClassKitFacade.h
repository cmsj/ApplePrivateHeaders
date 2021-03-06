/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKClassKitFacade <NSObject>
@property (nonatomic,readonly) long long accountState; 
@required
-(void)currentUserWithCompletion:(/*^block*/id)arg1;
-(void)registerDataObserver:(id)arg1;
-(void)executeQuery:(id)arg1;
-(void)deregisterDataObserver:(id)arg1;
-(void)instructedClassesWithCompletion:(/*^block*/id)arg1;
-(void)saveClass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)enrolledClassesWithCompletion:(/*^block*/id)arg1;
-(long long)accountState;
-(id)makeQueryForPersonsWithIdentifiers:(id)arg1;
-(char)ownsError:(id)arg1;
-(void)instructorsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)studentsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(id)personObserverWithPersonIDs:(id)arg1 sortDescriptors:(id)arg2;
-(id)classDataObserverWithSortDescriptors:(id)arg1;
-(void)removeClass:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
-(id)subscribeToCurrentUserDidChangeEvents:(/*^block*/id)arg1;
-(id)subscribeToClassMembershipChangeEvents:(/*^block*/id)arg1;
-(void)addStudent:(id)arg1 toClass:(id)arg2;
-(void)removeStudent:(id)arg1 fromClass:(id)arg2;
-(id)objectIDsOfStudentsInClass:(id)arg1;
-(void)addInstructor:(id)arg1 toClass:(id)arg2;
-(void)removeInstructor:(id)arg1 fromClass:(id)arg2;
-(id)objectIDsOfInstructorsInClass:(id)arg1;
-(id)locationsObserverWithSortDescriptors:(id)arg1;
-(void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)locationsWithObjectIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(char)arg3 pageSize:(long long)arg4;
-(id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(char)arg3 pageSize:(long long)arg4;

@end

