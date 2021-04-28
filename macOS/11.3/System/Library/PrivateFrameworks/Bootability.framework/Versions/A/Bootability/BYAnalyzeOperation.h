/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Bootability.framework/Versions/A/Bootability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bootability/BYOperation.h>

@class NSNumber;

@interface BYAnalyzeOperation : BYOperation {

	NSNumber* _localPolicyExistsOverride;
	NSNumber* _currentSecurityModeOverride;
	NSNumber* _verifyInstalledBootObjectsOverride;
	NSNumber* _verifyManifestOverride;
	NSNumber* _isAppleInternalOverride;

}

@property (retain) NSNumber * localPolicyExistsOverride;                       //@synthesize localPolicyExistsOverride=_localPolicyExistsOverride - In the implementation block
@property (retain) NSNumber * currentSecurityModeOverride;                     //@synthesize currentSecurityModeOverride=_currentSecurityModeOverride - In the implementation block
@property (retain) NSNumber * verifyInstalledBootObjectsOverride;              //@synthesize verifyInstalledBootObjectsOverride=_verifyInstalledBootObjectsOverride - In the implementation block
@property (retain) NSNumber * verifyManifestOverride;                          //@synthesize verifyManifestOverride=_verifyManifestOverride - In the implementation block
@property (retain) NSNumber * isAppleInternalOverride;                         //@synthesize isAppleInternalOverride=_isAppleInternalOverride - In the implementation block
-(id)description;
-(void)main;
-(char)_isAppleInternal;
-(char)_localPolicyExists;
-(unsigned)_currentSecurityMode;
-(void)_applyForceEnableOptions;
-(char)_verifyInstalledBootObjects;
-(char)_verifyManifest:(id)arg1 type:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_applyForceDisableOptions;
-(NSNumber *)localPolicyExistsOverride;
-(NSNumber *)currentSecurityModeOverride;
-(NSNumber *)verifyManifestOverride;
-(NSNumber *)verifyInstalledBootObjectsOverride;
-(NSNumber *)isAppleInternalOverride;
-(void)setLocalPolicyExistsOverride:(NSNumber *)arg1 ;
-(void)setCurrentSecurityModeOverride:(NSNumber *)arg1 ;
-(void)setVerifyInstalledBootObjectsOverride:(NSNumber *)arg1 ;
-(void)setVerifyManifestOverride:(NSNumber *)arg1 ;
-(void)setIsAppleInternalOverride:(NSNumber *)arg1 ;
@end
