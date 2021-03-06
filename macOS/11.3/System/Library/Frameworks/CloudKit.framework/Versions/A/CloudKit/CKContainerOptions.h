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

@class CKAccountOverrideInfo, NSString, CKUploadRequestConfiguration;

@interface CKContainerOptions : NSObject <NSSecureCoding, NSCopying> {

	char _captureResponseHTTPHeaders;
	char _useZoneWidePCS;
	char _bypassPCSEncryption;
	char _enforceNamedOperationGroups;
	char _forceEnableReadOnlyManatee;
	char _useClearAssetEncryption;
	char _accountInfoCacheIsDisabled;
	char _wantsSiloedContext;
	char _returnPCSMetadata;
	CKAccountOverrideInfo* _accountInfoOverride;
	unsigned long long _mmcsEncryptionSupport;
	NSString* _encryptionServiceName;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSString* _applicationBundleIdentifierOverrideForPushTopicGeneration;
	NSString* _applicationBundleIdentifierOverrideForTCC;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;
	NSString* _personaIdentifier;

}

@property (assign,nonatomic) char wantsSiloedContext;                                                         //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
@property (assign,nonatomic) char returnPCSMetadata;                                                          //@synthesize returnPCSMetadata=_returnPCSMetadata - In the implementation block
@property (nonatomic,retain) CKUploadRequestConfiguration * uploadRequestConfiguration;                       //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,retain) NSString * personaIdentifier;                                                    //@synthesize personaIdentifier=_personaIdentifier - In the implementation block
@property (assign,nonatomic) char captureResponseHTTPHeaders;                                                 //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) char useZoneWidePCS;                                                             //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (nonatomic,copy) CKAccountOverrideInfo * accountInfoOverride;                                       //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;                                        //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,copy) NSString * encryptionServiceName;                                                  //@synthesize encryptionServiceName=_encryptionServiceName - In the implementation block
@property (assign,nonatomic) char bypassPCSEncryption;                                                        //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) char enforceNamedOperationGroups;                                                //@synthesize enforceNamedOperationGroups=_enforceNamedOperationGroups - In the implementation block
@property (assign,nonatomic) char forceEnableReadOnlyManatee;                                                 //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (assign,nonatomic) char useClearAssetEncryption;                                                    //@synthesize useClearAssetEncryption=_useClearAssetEncryption - In the implementation block
@property (assign,nonatomic) char accountInfoCacheIsDisabled;                                                 //@synthesize accountInfoCacheIsDisabled=_accountInfoCacheIsDisabled - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForPushTopicGeneration;              //@synthesize applicationBundleIdentifierOverrideForPushTopicGeneration=_applicationBundleIdentifierOverrideForPushTopicGeneration - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForTCC;                              //@synthesize applicationBundleIdentifierOverrideForTCC=_applicationBundleIdentifierOverrideForTCC - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUseZoneWidePCS:(char)arg1 ;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(char)returnPCSMetadata;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(NSString *)applicationBundleIdentifierOverrideForPushTopicGeneration;
-(NSString *)applicationBundleIdentifierOverrideForTCC;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(char)captureResponseHTTPHeaders;
-(char)wantsSiloedContext;
-(char)useZoneWidePCS;
-(unsigned long long)mmcsEncryptionSupport;
-(char)bypassPCSEncryption;
-(char)forceEnableReadOnlyManatee;
-(NSString *)personaIdentifier;
-(char)useClearAssetEncryption;
-(void)setAccountInfoOverride:(CKAccountOverrideInfo *)arg1 ;
-(void)setCaptureResponseHTTPHeaders:(char)arg1 ;
-(void)setWantsSiloedContext:(char)arg1 ;
-(void)setReturnPCSMetadata:(char)arg1 ;
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(void)setBypassPCSEncryption:(char)arg1 ;
-(void)setForceEnableReadOnlyManatee:(char)arg1 ;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
-(void)setUseClearAssetEncryption:(char)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForPushTopicGeneration:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForTCC:(NSString *)arg1 ;
-(NSString *)encryptionServiceName;
-(void)setEncryptionServiceName:(NSString *)arg1 ;
-(char)accountInfoCacheIsDisabled;
-(void)setUseMMCSEncryptionV2:(char)arg1 ;
-(void)setApplicationBundleIdentifierOverride:(id)arg1 ;
-(char)enforceNamedOperationGroups;
-(void)setEnforceNamedOperationGroups:(char)arg1 ;
-(void)setAccountInfoCacheIsDisabled:(char)arg1 ;
@end

