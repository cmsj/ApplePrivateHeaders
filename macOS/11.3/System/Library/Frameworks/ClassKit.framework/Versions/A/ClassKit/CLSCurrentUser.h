/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLSPerson, NSString, NSDictionary;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding> {

	char _hasDataSeparatedAccount;
	char _hasMatchingPersona;
	char _hasEDUAccount;
	char _hasUbiquityEnabled;
	char _organizationProgressTrackingAllowed;
	int _devMode;
	int _rosterServiceAuthenticationState;
	int _handoutServiceAuthenticationState;
	CLSPerson* _person;
	NSString* _personaUniqueString;
	NSString* _clientPersonaUniqueString;
	NSString* _organizationName;
	long long _catalogEnvironment;
	unsigned long long _roles;
	NSDictionary* _locationIDsByAXMRoleType;

}

@property (assign,nonatomic) int devMode;                                           //@synthesize devMode=_devMode - In the implementation block
@property (nonatomic,retain) CLSPerson * person;                                    //@synthesize person=_person - In the implementation block
@property (nonatomic,copy) NSString * personaUniqueString;                          //@synthesize personaUniqueString=_personaUniqueString - In the implementation block
@property (nonatomic,copy) NSString * clientPersonaUniqueString;                    //@synthesize clientPersonaUniqueString=_clientPersonaUniqueString - In the implementation block
@property (assign,nonatomic) char hasDataSeparatedAccount;                          //@synthesize hasDataSeparatedAccount=_hasDataSeparatedAccount - In the implementation block
@property (assign,nonatomic) char hasMatchingPersona;                               //@synthesize hasMatchingPersona=_hasMatchingPersona - In the implementation block
@property (assign,nonatomic) unsigned long long roles;                              //@synthesize roles=_roles - In the implementation block
@property (nonatomic,retain) NSDictionary * locationIDsByAXMRoleType;               //@synthesize locationIDsByAXMRoleType=_locationIDsByAXMRoleType - In the implementation block
@property (assign,nonatomic) char hasEDUAccount;                                    //@synthesize hasEDUAccount=_hasEDUAccount - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                             //@synthesize organizationName=_organizationName - In the implementation block
@property (assign,nonatomic) char organizationProgressTrackingAllowed;              //@synthesize organizationProgressTrackingAllowed=_organizationProgressTrackingAllowed - In the implementation block
@property (assign,nonatomic) long long catalogEnvironment;                          //@synthesize catalogEnvironment=_catalogEnvironment - In the implementation block
@property (assign,nonatomic) int rosterServiceAuthenticationState;                  //@synthesize rosterServiceAuthenticationState=_rosterServiceAuthenticationState - In the implementation block
@property (assign,nonatomic) int handoutServiceAuthenticationState;                 //@synthesize handoutServiceAuthenticationState=_handoutServiceAuthenticationState - In the implementation block
@property (assign,nonatomic) char hasUbiquityEnabled;                               //@synthesize hasUbiquityEnabled=_hasUbiquityEnabled - In the implementation block
@property (nonatomic,readonly) char isAdministrator; 
@property (nonatomic,readonly) char isInstructor; 
@property (nonatomic,readonly) char isStudent; 
+(char)supportsSecureCoding;
+(unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)arg1 ;
+(id)magicValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(CLSPerson *)person;
-(void)setPerson:(CLSPerson *)arg1 ;
-(NSString *)organizationName;
-(void)setOrganizationName:(NSString *)arg1 ;
-(unsigned long long)roles;
-(void)setRoles:(unsigned long long)arg1 ;
-(unsigned long long)_useRoles;
-(char)_hasRole:(unsigned long long)arg1 ;
-(NSString *)personaUniqueString;
-(void)setPersonaUniqueString:(NSString *)arg1 ;
-(NSString *)clientPersonaUniqueString;
-(void)setClientPersonaUniqueString:(NSString *)arg1 ;
-(char)hasMatchingPersona;
-(void)setHasMatchingPersona:(char)arg1 ;
-(char)hasDataSeparatedAccount;
-(void)setHasDataSeparatedAccount:(char)arg1 ;
-(char)hasEDUAccount;
-(void)setHasEDUAccount:(char)arg1 ;
-(char)hasUbiquityEnabled;
-(void)setHasUbiquityEnabled:(char)arg1 ;
-(char)organizationProgressTrackingAllowed;
-(void)setOrganizationProgressTrackingAllowed:(char)arg1 ;
-(long long)catalogEnvironment;
-(void)setCatalogEnvironment:(long long)arg1 ;
-(int)rosterServiceAuthenticationState;
-(void)setRosterServiceAuthenticationState:(int)arg1 ;
-(int)handoutServiceAuthenticationState;
-(void)setHandoutServiceAuthenticationState:(int)arg1 ;
-(char)isAdministrator;
-(char)isInstructor;
-(char)isStudent;
-(char)hasRole:(unsigned long long)arg1 ;
-(int)devMode;
-(void)setDevMode:(int)arg1 ;
-(NSDictionary *)locationIDsByAXMRoleType;
-(void)setLocationIDsByAXMRoleType:(NSDictionary *)arg1 ;
@end

