/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface FBSApplicationProvisioningProfile : NSObject {

	NSString* _allowedApplicationIdentifierEntitlement;
	char _appleInternalProfile;
	char _beta;
	char _freeDeveloperProfile;
	char _provisionsAllDevices;
	char _provisionsThisDevice;
	NSString* _signerIdentity;
	NSDate* _expirationDate;
	NSString* _UUID;

}

@property (nonatomic,copy,readonly) NSString * signerIdentity;                                       //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isAppleInternalProfile,nonatomic,readonly) char appleInternalProfile;              //@synthesize appleInternalProfile=_appleInternalProfile - In the implementation block
@property (getter=isBeta,nonatomic,readonly) char beta;                                              //@synthesize beta=_beta - In the implementation block
@property (getter=isFreeDeveloperProfile,nonatomic,readonly) char freeDeveloperProfile;              //@synthesize freeDeveloperProfile=_freeDeveloperProfile - In the implementation block
@property (nonatomic,readonly) char provisionsAllDevices;                                            //@synthesize provisionsAllDevices=_provisionsAllDevices - In the implementation block
@property (nonatomic,readonly) char provisionsThisDevice;                                            //@synthesize provisionsThisDevice=_provisionsThisDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUID;                                                 //@synthesize UUID=_UUID - In the implementation block
-(id)description;
-(NSString *)UUID;
-(char)isBeta;
-(NSString *)signerIdentity;
-(NSDate *)expirationDate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(char)isAppleInternalProfile;
-(id)initWithSignerIdentity:(id)arg1 profile:(id)arg2 ;
-(char)allowsApplicationIdentifierEntitlement:(id)arg1 ;
-(char)isFreeDeveloperProfile;
-(char)provisionsAllDevices;
-(char)provisionsThisDevice;
@end

