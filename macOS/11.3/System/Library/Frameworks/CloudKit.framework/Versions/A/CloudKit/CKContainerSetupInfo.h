/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKAccountOverrideInfo, CKContainerID, NSDictionary, NSString, CKFrameworkFingerprint;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding, NSCopying> {

	char _captureResponseHTTPHeaders;
	char _wantsSiloedContext;
	char _useZoneWidePCS;
	char _holdAllOperations;
	char _returnPCSMetadata;
	char _bypassPCSEncryption;
	char _forceEnableReadOnlyManatee;
	char _masqueradeAsThirdPartyApp;
	char _useClearAssetEncryption;
	char _connectToTestingDaemon;
	unsigned _clientSDKVersion;
	CKAccountOverrideInfo* _accountInfoOverride;
	CKContainerID* _containerID;
	NSDictionary* _fakeEntitlements;
	unsigned long long _mmcsEncryptionSupport;
	NSString* _containerEncryptionServiceName;
	CKFrameworkFingerprint* _frameworkFingerprint;
	NSString* _personaIdentifier;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSString* _applicationBundleIdentifierOverrideForPushTopicGeneration;
	NSString* _applicationBundleIdentifierOverrideForTCC;

}

@property (nonatomic,retain) CKContainerID * containerID;                                                       //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) CKAccountOverrideInfo * accountInfoOverride;                                         //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (assign,nonatomic) char captureResponseHTTPHeaders;                                                   //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) char wantsSiloedContext;                                                           //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
@property (assign,nonatomic) char useZoneWidePCS;                                                               //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (nonatomic,retain) NSDictionary * fakeEntitlements;                                                   //@synthesize fakeEntitlements=_fakeEntitlements - In the implementation block
@property (assign,nonatomic) char holdAllOperations;                                                            //@synthesize holdAllOperations=_holdAllOperations - In the implementation block
@property (assign,nonatomic) char returnPCSMetadata;                                                            //@synthesize returnPCSMetadata=_returnPCSMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;                                          //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,retain) NSString * containerEncryptionServiceName;                                         //@synthesize containerEncryptionServiceName=_containerEncryptionServiceName - In the implementation block
@property (assign,nonatomic) char bypassPCSEncryption;                                                          //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) char forceEnableReadOnlyManatee;                                                   //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (assign,nonatomic) unsigned clientSDKVersion;                                                         //@synthesize clientSDKVersion=_clientSDKVersion - In the implementation block
@property (assign,nonatomic) char masqueradeAsThirdPartyApp;                                                    //@synthesize masqueradeAsThirdPartyApp=_masqueradeAsThirdPartyApp - In the implementation block
@property (nonatomic,retain) CKFrameworkFingerprint * frameworkFingerprint;                                     //@synthesize frameworkFingerprint=_frameworkFingerprint - In the implementation block
@property (nonatomic,retain) NSString * personaIdentifier;                                                      //@synthesize personaIdentifier=_personaIdentifier - In the implementation block
@property (assign,nonatomic) char useClearAssetEncryption;                                                      //@synthesize useClearAssetEncryption=_useClearAssetEncryption - In the implementation block
@property (assign,nonatomic) char connectToTestingDaemon;                                                       //@synthesize connectToTestingDaemon=_connectToTestingDaemon - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleIdentifierOverrideForPushTopicGeneration;              //@synthesize applicationBundleIdentifierOverrideForPushTopicGeneration=_applicationBundleIdentifierOverrideForPushTopicGeneration - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleIdentifierOverrideForTCC;                              //@synthesize applicationBundleIdentifierOverrideForTCC=_applicationBundleIdentifierOverrideForTCC - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKContainerID *)containerID;
-(void)setUseZoneWidePCS:(char)arg1 ;
-(char)returnPCSMetadata;
-(char)connectToTestingDaemon;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(NSString *)applicationBundleIdentifierOverrideForPushTopicGeneration;
-(NSString *)applicationBundleIdentifierOverrideForTCC;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(char)captureResponseHTTPHeaders;
-(char)wantsSiloedContext;
-(char)useZoneWidePCS;
-(NSDictionary *)fakeEntitlements;
-(char)holdAllOperations;
-(unsigned long long)mmcsEncryptionSupport;
-(NSString *)containerEncryptionServiceName;
-(char)bypassPCSEncryption;
-(char)forceEnableReadOnlyManatee;
-(unsigned)clientSDKVersion;
-(char)masqueradeAsThirdPartyApp;
-(CKFrameworkFingerprint *)frameworkFingerprint;
-(NSString *)personaIdentifier;
-(char)useClearAssetEncryption;
-(id)hashString;
-(void)setAccountInfoOverride:(CKAccountOverrideInfo *)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setCaptureResponseHTTPHeaders:(char)arg1 ;
-(void)setWantsSiloedContext:(char)arg1 ;
-(void)setFakeEntitlements:(NSDictionary *)arg1 ;
-(void)setHoldAllOperations:(char)arg1 ;
-(void)setReturnPCSMetadata:(char)arg1 ;
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(void)setContainerEncryptionServiceName:(NSString *)arg1 ;
-(void)setBypassPCSEncryption:(char)arg1 ;
-(void)setForceEnableReadOnlyManatee:(char)arg1 ;
-(void)setClientSDKVersion:(unsigned)arg1 ;
-(void)setMasqueradeAsThirdPartyApp:(char)arg1 ;
-(void)setFrameworkFingerprint:(CKFrameworkFingerprint *)arg1 ;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
-(void)setUseClearAssetEncryption:(char)arg1 ;
-(void)setConnectToTestingDaemon:(char)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForPushTopicGeneration:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForTCC:(NSString *)arg1 ;
@end

