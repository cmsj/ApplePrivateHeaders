/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>
#import <libobjc.A.dylib/TUSecureCoding.h>

@class NSURL, NSData, TUCTCapabilityInfo, NSString;

@interface TUCTCapabilitiesState : NSObject <NSCopying, TUPubliclyAccessibleCopying, TUSecureCoding> {

	char _provisioningURLInvalid;
	char _supported;
	char _enabled;
	char _currentlyAvailable;
	char _roamingSupported;
	char _roamingEnabled;
	char _emergencySupported;
	char _emergencyCurrentlyAvailable;
	int _provisioningStatus;
	NSURL* _provisioningURL;
	NSData* _provisioningPostData;

}

@property (nonatomic,copy,readonly) TUCTCapabilityInfo * ctCapabilityInfo; 
@property (assign,nonatomic) int provisioningStatus;                                                             //@synthesize provisioningStatus=_provisioningStatus - In the implementation block
@property (nonatomic,copy) NSURL * provisioningURL;                                                              //@synthesize provisioningURL=_provisioningURL - In the implementation block
@property (assign,getter=isProvisioningURLInvalid,nonatomic) char provisioningURLInvalid;                        //@synthesize provisioningURLInvalid=_provisioningURLInvalid - In the implementation block
@property (nonatomic,copy) NSData * provisioningPostData;                                                        //@synthesize provisioningPostData=_provisioningPostData - In the implementation block
@property (assign,getter=isSupported,nonatomic) char supported;                                                  //@synthesize supported=_supported - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isCurrentlyAvailable,nonatomic) char currentlyAvailable;                                //@synthesize currentlyAvailable=_currentlyAvailable - In the implementation block
@property (assign,getter=isRoamingSupported,nonatomic) char roamingSupported;                                    //@synthesize roamingSupported=_roamingSupported - In the implementation block
@property (assign,getter=isRoamingEnabled,nonatomic) char roamingEnabled;                                        //@synthesize roamingEnabled=_roamingEnabled - In the implementation block
@property (assign,getter=isEmergencySupported,nonatomic) char emergencySupported;                                //@synthesize emergencySupported=_emergencySupported - In the implementation block
@property (assign,getter=isEmergencyCurrentlyAvailable,nonatomic) char emergencyCurrentlyAvailable;              //@synthesize emergencyCurrentlyAvailable=_emergencyCurrentlyAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setSupported:(char)arg1 ;
-(char)isSupported;
-(char)isCurrentlyAvailable;
-(TUCTCapabilityInfo *)ctCapabilityInfo;
-(char)isRoamingSupported;
-(char)isRoamingEnabled;
-(char)isEmergencySupported;
-(char)isEmergencyCurrentlyAvailable;
-(int)provisioningStatus;
-(NSURL *)provisioningURL;
-(char)isProvisioningURLInvalid;
-(NSData *)provisioningPostData;
-(void)setProvisioningStatus:(int)arg1 ;
-(void)setProvisioningURL:(NSURL *)arg1 ;
-(void)setProvisioningPostData:(NSData *)arg1 ;
-(void)setRoamingEnabled:(char)arg1 ;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(char)isEqualToCapabilitiesState:(id)arg1 ;
-(void)setCurrentlyAvailable:(char)arg1 ;
-(void)setRoamingSupported:(char)arg1 ;
-(void)setEmergencySupported:(char)arg1 ;
-(void)setEmergencyCurrentlyAvailable:(char)arg1 ;
-(id)publiclyAccessibleCopy;
-(id)archivedDataWithError:(id*)arg1 ;
-(id)initWithCapabilityInfo:(id)arg1 ;
-(void)invalidateProvisioningURL;
-(void)setProvisioningURLInvalid:(char)arg1 ;
@end

