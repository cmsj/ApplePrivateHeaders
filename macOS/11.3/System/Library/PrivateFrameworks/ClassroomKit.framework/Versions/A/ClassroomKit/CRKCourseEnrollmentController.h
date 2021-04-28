/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKStudentDaemonProxyObserver.h>
#import <libobjc.A.dylib/CATTaskOperationNotificationDelegate.h>
#import <libobjc.A.dylib/CRKSettingsPaneInfoProvider.h>

@class NSArray, NSSet, NSDictionary, CRKStudentDaemonProxy, CATRemoteTaskOperation, CRKSecureCodedUserDefaultsObject, CRKSettingsUIVisibleRemoteValue, NSHashTable, NSString;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate, CRKSettingsPaneInfoProvider> {

	CRKStudentDaemonProxy* mDaemonProxy;
	CATRemoteTaskOperation* mBrowseOperation;
	CRKSecureCodedUserDefaultsObject* mStoredCourses;
	char mConfigurationFetched;
	CRKSettingsUIVisibleRemoteValue* mSettingsUIVisibleRemoteValue;
	unsigned long long _configurationType;
	NSArray* _courses;
	NSArray* _courseInvitations;
	NSSet* _acceptedInvitationIdentifiers;
	NSDictionary* _observingInstructorIdentifiersByCourseIdentifiers;
	NSSet* _activeInstructors;
	CATRemoteTaskOperation* _fetchActiveInstructorsOperation;
	NSHashTable* _observers;

}

@property (nonatomic,copy) NSArray * courses;                                                               //@synthesize courses=_courses - In the implementation block
@property (nonatomic,copy) NSArray * courseInvitations;                                                     //@synthesize courseInvitations=_courseInvitations - In the implementation block
@property (nonatomic,copy) NSSet * acceptedInvitationIdentifiers;                                           //@synthesize acceptedInvitationIdentifiers=_acceptedInvitationIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * observingInstructorIdentifiersByCourseIdentifiers;              //@synthesize observingInstructorIdentifiersByCourseIdentifiers=_observingInstructorIdentifiersByCourseIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned long long configurationType;                                          //@synthesize configurationType=_configurationType - In the implementation block
@property (nonatomic,retain) CATRemoteTaskOperation * fetchActiveInstructorsOperation;                      //@synthesize fetchActiveInstructorsOperation=_fetchActiveInstructorsOperation - In the implementation block
@property (nonatomic,copy) NSSet * activeInstructors;                                                       //@synthesize activeInstructors=_activeInstructors - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) char settingsUIVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(char)settingsUIVisible;
-(unsigned long long)configurationType;
-(void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(NSArray *)courses;
-(void)daemonProxyDidConnect:(id)arg1 ;
-(void)daemonProxyDidDisconnect:(id)arg1 ;
-(void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithStudentDaemonProxy:(id)arg1 ;
-(void)fetchStoredCourses;
-(NSArray *)courseInvitations;
-(NSSet *)activeInstructors;
-(char)instructor:(id)arg1 isForCourse:(id)arg2 ;
-(id)activeInstructorsWithIdentifier:(id)arg1 forCourse:(id)arg2 ;
-(void)disconnectOperationDidFinish:(id)arg1 ;
-(void)fetchCourses;
-(void)fetchCourseInvitations;
-(void)refreshASMCourses;
-(void)fetchActiveInstructors;
-(void)startLongRunningOperations;
-(void)stopLongRunningOperations;
-(void)fetchConfiguration;
-(void)stopBrowsingForInvitations;
-(char)canBrowseForInvitations;
-(void)startBrowsingForInvitations;
-(void)fetchConfigurationTypeOperationDidFinish:(id)arg1 ;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(void)updateInvitationBrowsingStatus;
-(void)fetchCoursesOperationDidFinish:(id)arg1 ;
-(id)coursesBySortingCourses:(id)arg1 ;
-(void)setCourses:(NSArray *)arg1 ;
-(void)storeCourses;
-(void)fetchCourseInvitationsOperationDidFinish:(id)arg1 ;
-(void)setCourseInvitations:(NSArray *)arg1 ;
-(NSSet *)acceptedInvitationIdentifiers;
-(void)setAcceptedInvitationIdentifiers:(NSSet *)arg1 ;
-(void)refreshASMCoursesOperationDidFail:(id)arg1 ;
-(CATRemoteTaskOperation *)fetchActiveInstructorsOperation;
-(void)setFetchActiveInstructorsOperation:(CATRemoteTaskOperation *)arg1 ;
-(void)fetchActiveInstructorsOperationDidFinish:(id)arg1 ;
-(id)activeCourseIdentifiers;
-(char)updateScreenObservingInstructors;
-(NSDictionary *)observingInstructorIdentifiersByCourseIdentifiers;
-(void)setObservingInstructorIdentifiersByCourseIdentifiers:(NSDictionary *)arg1 ;
-(char)isCourseActive:(id)arg1 ;
-(id)activeCourses;
-(char)isStudentScreenBeingObservedForCourse:(id)arg1 ;
-(char)isInstructorWithIdentifier:(id)arg1 disconnectableForCourse:(id)arg2 ;
-(char)isInstructorWithIdentifier:(id)arg1 activeForCourse:(id)arg2 ;
-(char)isInstructorWithIdentifier:(id)arg1 observingStudentScreenForCourse:(id)arg2 ;
-(void)disconnectInstructorWithIdentifier:(id)arg1 forCourse:(id)arg2 ;
-(void)addEnrollmentObserver:(id)arg1 ;
-(id)courseWithIdentifier:(id)arg1 ;
-(id)invitationWithCourseIdentifier:(id)arg1 ;
-(void)setActiveInstructors:(NSSet *)arg1 ;
@end
