/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSNumber, NSDictionary, DMFApplicationInstallProgress;

@interface DMFApplication : NSObject <NSCopying, NSSecureCoding> {

	char _isManaged;
	char _isValidated;
	char _isInstalled;
	char _isPlaceholder;
	char _isAppUpdate;
	char _isBetaApp;
	char _isRemoveable;
	char _fileSharingEnabled;
	NSString* _applicationIdentifier;
	NSString* _bundleIdentifier;
	NSString* _name;
	NSData* _iconData;
	NSString* _bundleVersion;
	NSString* _shortVersionString;
	NSString* _applicationType;
	NSNumber* _adamID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _betaExternalVersionIdentifier;
	NSNumber* _staticUsage;
	NSNumber* _dynamicUsage;
	NSNumber* _onDemandResourcesUsage;
	NSString* _unusedRedemptionCode;
	NSDictionary* _attributes;
	NSDictionary* _configuration;
	NSDictionary* _feedback;
	unsigned long long _state;
	unsigned long long _managementFlags;
	DMFApplicationInstallProgress* _progress;

}

@property (nonatomic,copy,readonly) NSString * applicationIdentifier;                      //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSData * iconData;                                     //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleVersion;                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortVersionString;                         //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationType;                            //@synthesize applicationType=_applicationType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * adamID;                                     //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * externalVersionIdentifier;                  //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * betaExternalVersionIdentifier;              //@synthesize betaExternalVersionIdentifier=_betaExternalVersionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * staticUsage;                                //@synthesize staticUsage=_staticUsage - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * dynamicUsage;                               //@synthesize dynamicUsage=_dynamicUsage - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * onDemandResourcesUsage;                     //@synthesize onDemandResourcesUsage=_onDemandResourcesUsage - In the implementation block
@property (nonatomic,copy,readonly) NSString * unusedRedemptionCode;                       //@synthesize unusedRedemptionCode=_unusedRedemptionCode - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * feedback;                               //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long managementFlags;                         //@synthesize managementFlags=_managementFlags - In the implementation block
@property (nonatomic,readonly) char isManaged;                                             //@synthesize isManaged=_isManaged - In the implementation block
@property (nonatomic,readonly) char isValidated;                                           //@synthesize isValidated=_isValidated - In the implementation block
@property (nonatomic,readonly) char isInstalled;                                           //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) char isPlaceholder;                                         //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,readonly) char isAppUpdate;                                           //@synthesize isAppUpdate=_isAppUpdate - In the implementation block
@property (nonatomic,readonly) char isBetaApp;                                             //@synthesize isBetaApp=_isBetaApp - In the implementation block
@property (nonatomic,readonly) char isRemoveable;                                          //@synthesize isRemoveable=_isRemoveable - In the implementation block
@property (nonatomic,readonly) char fileSharingEnabled;                                    //@synthesize fileSharingEnabled=_fileSharingEnabled - In the implementation block
@property (nonatomic,readonly) DMFApplicationInstallProgress * progress;                   //@synthesize progress=_progress - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(NSString *)bundleIdentifier;
-(NSString *)shortVersionString;
-(char)isPlaceholder;
-(char)isInstalled;
-(NSString *)applicationIdentifier;
-(NSString *)applicationType;
-(NSNumber *)externalVersionIdentifier;
-(NSNumber *)betaExternalVersionIdentifier;
-(char)isAppUpdate;
-(char)isBetaApp;
-(char)fileSharingEnabled;
-(NSString *)bundleVersion;
-(NSData *)iconData;
-(NSNumber *)staticUsage;
-(NSNumber *)dynamicUsage;
-(NSNumber *)onDemandResourcesUsage;
-(NSDictionary *)attributes;
-(DMFApplicationInstallProgress *)progress;
-(NSDictionary *)configuration;
-(NSNumber *)adamID;
-(NSDictionary *)feedback;
-(char)isManaged;
-(char)isValidated;
-(NSString *)unusedRedemptionCode;
-(unsigned long long)managementFlags;
-(char)isRemoveable;
-(id)initWithApplicationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 iconData:(id)arg4 bundleVersion:(id)arg5 shortVersionString:(id)arg6 applicationType:(id)arg7 adamID:(id)arg8 externalVersionIdentifier:(id)arg9 betaExternalVersionIdentifier:(id)arg10 staticUsage:(id)arg11 dynamicUsage:(id)arg12 onDemandResourcesUsage:(id)arg13 unusedRedemptionCode:(id)arg14 attributes:(id)arg15 configuration:(id)arg16 feedback:(id)arg17 state:(unsigned long long)arg18 managementFlags:(unsigned long long)arg19 isManaged:(char)arg20 isValidated:(char)arg21 isInstalled:(char)arg22 isPlaceholder:(char)arg23 isAppUpdate:(char)arg24 isBetaApp:(char)arg25 isRemoveable:(char)arg26 fileSharingEnabled:(char)arg27 progress:(id)arg28 ;
-(id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 iconData:(id)arg3 applicationType:(id)arg4 adamID:(id)arg5 externalVersionNumber:(id)arg6 betaExternalVersionIdentifier:(id)arg7 isInstalled:(char)arg8 isPlaceholder:(char)arg9 isAppUpdate:(char)arg10 isBetaApp:(char)arg11 isRemoveable:(char)arg12 fileSharingEnabled:(char)arg13 progress:(id)arg14 ;
@end

