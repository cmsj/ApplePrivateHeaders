/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKClassKitRosterRequirements;
@class NSString, NSObject, CRKASMCredentialStore;

@interface CRKASMRosterProviderConfiguration : NSObject {

	NSString* _userCommonNamePrefix;
	NSString* _trustedUserCommonNamePrefix;
	NSObject*<CRKClassKitRosterRequirements> _rosterRequirements;
	CRKASMCredentialStore* _credentialStore;
	long long _maxCourseUsersCount;
	long long _maxCourseTrustedUsersCount;
	double _rosterMutationTimeout;

}

@property (nonatomic,copy,readonly) NSString * userCommonNamePrefix;                                     //@synthesize userCommonNamePrefix=_userCommonNamePrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * trustedUserCommonNamePrefix;                              //@synthesize trustedUserCommonNamePrefix=_trustedUserCommonNamePrefix - In the implementation block
@property (nonatomic,readonly) NSObject*<CRKClassKitRosterRequirements> rosterRequirements;              //@synthesize rosterRequirements=_rosterRequirements - In the implementation block
@property (nonatomic,readonly) CRKASMCredentialStore * credentialStore;                                  //@synthesize credentialStore=_credentialStore - In the implementation block
@property (nonatomic,readonly) long long maxCourseUsersCount;                                            //@synthesize maxCourseUsersCount=_maxCourseUsersCount - In the implementation block
@property (nonatomic,readonly) long long maxCourseTrustedUsersCount;                                     //@synthesize maxCourseTrustedUsersCount=_maxCourseTrustedUsersCount - In the implementation block
@property (nonatomic,readonly) double rosterMutationTimeout;                                             //@synthesize rosterMutationTimeout=_rosterMutationTimeout - In the implementation block
+(id)makeStudentClassKitFacade;
+(id)makeStandardClassKitFacade;
+(char)currentPlatformRequiresPersonaAdoption;
+(id)studentRosterConfiguration;
+(id)instructorRosterConfiguration;
-(NSObject*<CRKClassKitRosterRequirements>)rosterRequirements;
-(id)initWithUserCommonNamePrefix:(id)arg1 trustedUserCommonNamePrefix:(id)arg2 rosterRequirements:(id)arg3 credentialStore:(id)arg4 maxCourseUsersCount:(long long)arg5 maxCourseTrustedUsersCount:(long long)arg6 rosterMutationTimeout:(double)arg7 ;
-(NSString *)userCommonNamePrefix;
-(NSString *)trustedUserCommonNamePrefix;
-(CRKASMCredentialStore *)credentialStore;
-(long long)maxCourseUsersCount;
-(long long)maxCourseTrustedUsersCount;
-(double)rosterMutationTimeout;
@end

