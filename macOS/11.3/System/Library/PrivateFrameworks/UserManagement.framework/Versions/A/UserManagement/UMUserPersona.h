/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/Versions/A/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface UMUserPersona : NSObject <NSCopying, NSMutableCopying> {

	NSString* personaName;
	char shouldFetchAttributes;
	char _isSystemPersona;
	char _isDefaultPersona;
	char _isGuestPersona;
	char _isDataSeparatedPersona;
	char _isEnterprisePersona;
	char _isPersonalPersona;
	char _isDisabled;
	unsigned _uid;
	unsigned _gid;
	NSString* _userPersonaUniqueString;
	NSString* _userPersonaNickName;
	unsigned long long _userPersonaType;

}

@property (assign,nonatomic) unsigned uid;                                    //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) unsigned gid;                                    //@synthesize gid=_gid - In the implementation block
@property (assign,nonatomic) char isEnterprisePersona;                        //@synthesize isEnterprisePersona=_isEnterprisePersona - In the implementation block
@property (assign,nonatomic) char isPersonalPersona;                          //@synthesize isPersonalPersona=_isPersonalPersona - In the implementation block
@property (assign,nonatomic) char isSystemPersona;                            //@synthesize isSystemPersona=_isSystemPersona - In the implementation block
@property (assign,nonatomic) char isDefaultPersona;                           //@synthesize isDefaultPersona=_isDefaultPersona - In the implementation block
@property (assign,nonatomic) char isGuestPersona;                             //@synthesize isGuestPersona=_isGuestPersona - In the implementation block
@property (assign,nonatomic) char isDataSeparatedPersona;                     //@synthesize isDataSeparatedPersona=_isDataSeparatedPersona - In the implementation block
@property (assign,nonatomic) char isDisabled;                                 //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,copy) NSString * userPersonaUniqueString;                //@synthesize userPersonaUniqueString=_userPersonaUniqueString - In the implementation block
@property (nonatomic,copy) NSString * userPersonaNickName;                    //@synthesize userPersonaNickName=_userPersonaNickName - In the implementation block
@property (assign,nonatomic) unsigned long long userPersonaType;              //@synthesize userPersonaType=_userPersonaType - In the implementation block
+(id)currentPersona;
+(char)currentPersonaMatchesPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)userPersonaUniqueString;
-(char)isSystemPersona;
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
-(void)setGid:(unsigned)arg1 ;
-(void)setIsDisabled:(char)arg1 ;
-(char)commitChanges;
-(unsigned long long)userPersonaType;
-(void)setUserPersonaUniqueString:(NSString *)arg1 ;
-(void)setUserPersonaType:(unsigned long long)arg1 ;
-(void)setIsPersonalPersona:(char)arg1 ;
-(void)setIsEnterprisePersona:(char)arg1 ;
-(void)setIsSystemPersona:(char)arg1 ;
-(void)setIsDefaultPersona:(char)arg1 ;
-(void)setIsGuestPersona:(char)arg1 ;
-(void)setIsDataSeparatedPersona:(char)arg1 ;
-(char)isEnterprisePersona;
-(char)isPersonalPersona;
-(char)isDefaultPersona;
-(char)isGuestPersona;
-(char)isDataSeparatedPersona;
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(char)isDisabled;
-(void)fetchAttributesIfNeeded;
-(unsigned)gid;
-(char)commitChangesWithError:(id*)arg1 ;
-(id)generateAndRestorePersonaContextWithPersonaUniqueString:(id)arg1 ;
-(id)createPersonaContextForBackgroundProcessingWithPersonaUniqueString:(id)arg1 ;
-(NSString *)userPersonaNickName;
-(void)setUserPersonaNickName:(NSString *)arg1 ;
-(id)copyCurrentPersonaContextWithError:(id*)arg1 ;
-(id)restorePersonaWithSavedPersonaContext:(id)arg1 ;
-(id)generateAndRestorePersonaContextWithIdentityString:(id)arg1 ;
-(id)createPersonaContextForBackgroundProcessingWithIdentityString:(id)arg1 ;
-(char)isEqualToPersona:(id)arg1 ;
@end

