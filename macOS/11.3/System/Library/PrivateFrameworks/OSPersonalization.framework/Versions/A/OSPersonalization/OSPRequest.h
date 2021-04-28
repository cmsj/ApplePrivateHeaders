/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSPersonalization.framework/Versions/A/OSPersonalization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray, NSString, NSData, NSDictionary, NSSet, OSPDevice, OSPSecureBootBundle, OSPVolume, NSUUID;

@interface OSPRequest : NSObject {

	char _userAuth;
	char _showUI;
	char _globalSignature;
	char _useTDMDeviceIdentity;
	char _useRunningDeviceIdentity;
	char _mergeToOutputDirectory;
	char _preferBuildManifest;
	char _flattenManifestRoot;
	char _shouldPersonalize;
	char _forcePersonalization;
	char _authenticatedRootVolume;
	char _installSingleManifest;
	char _skipPersonalizationForTesting;
	char _useDummyDeviceIdentity;
	char _noERB;
	char _showUsageForPersonalization;
	NSURL* _volumeURL;
	NSURL* _bundleURL;
	NSArray* _packageSpecifiers;
	NSURL* _outputURL;
	NSURL* _signingServerURL;
	NSString* _variant;
	NSData* _appleConnectData;
	NSDictionary* _apRequestEntries;
	NSURL* _kernelCacheOverride;
	NSDictionary* _bundleOverrides;
	NSSet* _deviceClasses;
	NSData* _softwareNonceForUpdateFreshness;
	OSPDevice* _device;
	OSPSecureBootBundle* _bundle;
	NSURL* _personalizedOutputURL;
	NSURL* _testPersonalizedOutputURL;
	OSPVolume* _targetVolume;
	long long _fakePersonalizationErrorCode;
	NSURL* _signedPRDocumentPublicKeyURL;
	NSString* _kernelCacheOverrideTag;
	NSUUID* _uuid;

}

@property (retain) OSPDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (retain) OSPSecureBootBundle * bundle;                           //@synthesize bundle=_bundle - In the implementation block
@property (retain) NSURL * personalizedOutputURL;                          //@synthesize personalizedOutputURL=_personalizedOutputURL - In the implementation block
@property (retain) NSURL * testPersonalizedOutputURL;                      //@synthesize testPersonalizedOutputURL=_testPersonalizedOutputURL - In the implementation block
@property (assign) char shouldPersonalize;                                 //@synthesize shouldPersonalize=_shouldPersonalize - In the implementation block
@property (assign) char forcePersonalization;                              //@synthesize forcePersonalization=_forcePersonalization - In the implementation block
@property (assign) char authenticatedRootVolume;                           //@synthesize authenticatedRootVolume=_authenticatedRootVolume - In the implementation block
@property (assign) char installSingleManifest;                             //@synthesize installSingleManifest=_installSingleManifest - In the implementation block
@property (retain) OSPVolume * targetVolume;                               //@synthesize targetVolume=_targetVolume - In the implementation block
@property (assign) char skipPersonalizationForTesting;                     //@synthesize skipPersonalizationForTesting=_skipPersonalizationForTesting - In the implementation block
@property (assign) long long fakePersonalizationErrorCode;                 //@synthesize fakePersonalizationErrorCode=_fakePersonalizationErrorCode - In the implementation block
@property (assign) char useDummyDeviceIdentity;                            //@synthesize useDummyDeviceIdentity=_useDummyDeviceIdentity - In the implementation block
@property (retain) NSURL * signedPRDocumentPublicKeyURL;                   //@synthesize signedPRDocumentPublicKeyURL=_signedPRDocumentPublicKeyURL - In the implementation block
@property (retain) NSString * kernelCacheOverrideTag;                      //@synthesize kernelCacheOverrideTag=_kernelCacheOverrideTag - In the implementation block
@property (retain) NSUUID * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (assign) char noERB;                                             //@synthesize noERB=_noERB - In the implementation block
@property (assign) char showUsageForPersonalization;                       //@synthesize showUsageForPersonalization=_showUsageForPersonalization - In the implementation block
@property (retain) NSURL * volumeURL;                                      //@synthesize volumeURL=_volumeURL - In the implementation block
@property (retain) NSURL * bundleURL;                                      //@synthesize bundleURL=_bundleURL - In the implementation block
@property (retain) NSArray * packageSpecifiers;                            //@synthesize packageSpecifiers=_packageSpecifiers - In the implementation block
@property (retain) NSURL * outputURL;                                      //@synthesize outputURL=_outputURL - In the implementation block
@property (retain) NSURL * signingServerURL;                               //@synthesize signingServerURL=_signingServerURL - In the implementation block
@property (retain) NSString * variant;                                     //@synthesize variant=_variant - In the implementation block
@property (assign) char userAuth;                                          //@synthesize userAuth=_userAuth - In the implementation block
@property (retain) NSData * appleConnectData;                              //@synthesize appleConnectData=_appleConnectData - In the implementation block
@property (assign) char showUI;                                            //@synthesize showUI=_showUI - In the implementation block
@property (assign) char globalSignature;                                   //@synthesize globalSignature=_globalSignature - In the implementation block
@property (assign) char useTDMDeviceIdentity;                              //@synthesize useTDMDeviceIdentity=_useTDMDeviceIdentity - In the implementation block
@property (assign) char useRunningDeviceIdentity;                          //@synthesize useRunningDeviceIdentity=_useRunningDeviceIdentity - In the implementation block
@property (retain) NSDictionary * apRequestEntries;                        //@synthesize apRequestEntries=_apRequestEntries - In the implementation block
@property (assign) char mergeToOutputDirectory;                            //@synthesize mergeToOutputDirectory=_mergeToOutputDirectory - In the implementation block
@property (assign) char preferBuildManifest;                               //@synthesize preferBuildManifest=_preferBuildManifest - In the implementation block
@property (assign) char flattenManifestRoot;                               //@synthesize flattenManifestRoot=_flattenManifestRoot - In the implementation block
@property (retain) NSURL * kernelCacheOverride;                            //@synthesize kernelCacheOverride=_kernelCacheOverride - In the implementation block
@property (retain) NSDictionary * bundleOverrides;                         //@synthesize bundleOverrides=_bundleOverrides - In the implementation block
@property (retain) NSSet * deviceClasses;                                  //@synthesize deviceClasses=_deviceClasses - In the implementation block
@property (retain) NSData * softwareNonceForUpdateFreshness;               //@synthesize softwareNonceForUpdateFreshness=_softwareNonceForUpdateFreshness - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
-(char)skipPersonalizationForTesting;
-(char)shouldPersonalize;
-(void)setPreferBuildManifest:(char)arg1 ;
-(void)setForcePersonalization:(char)arg1 ;
-(void)setShowUsageForPersonalization:(char)arg1 ;
-(void)setGlobalSignature:(char)arg1 ;
-(char)globalSignature;
-(char)useTDMDeviceIdentity;
-(char)useRunningDeviceIdentity;
-(NSDictionary *)apRequestEntries;
-(char)mergeToOutputDirectory;
-(char)preferBuildManifest;
-(char)_parsePRDocument:(id)arg1 enforceSignature:(char)arg2 ;
-(void)setUseTDMDeviceIdentity:(char)arg1 ;
-(void)setUseRunningDeviceIdentity:(char)arg1 ;
-(void)setAuthenticatedRootVolume:(char)arg1 ;
-(void)setNoERB:(char)arg1 ;
-(void)setDeviceClasses:(NSSet *)arg1 ;
-(NSSet *)deviceClasses;
-(void)setBundleOverrides:(NSDictionary *)arg1 ;
-(NSURL *)signedPRDocumentPublicKeyURL;
-(void)setSkipPersonalizationForTesting:(char)arg1 ;
-(void)setTestPersonalizedOutputURL:(NSURL *)arg1 ;
-(void)setUseDummyDeviceIdentity:(char)arg1 ;
-(void)setApRequestEntries:(NSDictionary *)arg1 ;
-(void)setSoftwareNonceForUpdateFreshness:(NSData *)arg1 ;
-(char)showUsageForPersonalization;
-(id)initForGlobalSigningWithArgs:(const char**)arg1 length:(int)arg2 ;
-(void)setMergeToOutputDirectory:(char)arg1 ;
-(char)flattenManifestRoot;
-(void)setFlattenManifestRoot:(char)arg1 ;
-(NSDictionary *)bundleOverrides;
-(NSData *)softwareNonceForUpdateFreshness;
-(NSURL *)personalizedOutputURL;
-(void)setPersonalizedOutputURL:(NSURL *)arg1 ;
-(NSURL *)testPersonalizedOutputURL;
-(void)setShouldPersonalize:(char)arg1 ;
-(char)authenticatedRootVolume;
-(char)installSingleManifest;
-(void)setInstallSingleManifest:(char)arg1 ;
-(long long)fakePersonalizationErrorCode;
-(void)setFakePersonalizationErrorCode:(long long)arg1 ;
-(char)useDummyDeviceIdentity;
-(void)setSignedPRDocumentPublicKeyURL:(NSURL *)arg1 ;
-(NSString *)kernelCacheOverrideTag;
-(void)setKernelCacheOverrideTag:(NSString *)arg1 ;
-(char)noERB;
-(char)_parseArugments:(const char**)arg1 length:(int)arg2 ;
-(char)_setPropertiesFromOptions:(id)arg1 ;
-(void)setShowUI:(char)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSURL *)bundleURL;
-(id)initWithOptions:(id)arg1 ;
-(OSPDevice *)device;
-(NSString *)variant;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBundle:(OSPSecureBootBundle *)arg1 ;
-(OSPSecureBootBundle *)bundle;
-(char)showUI;
-(void)setOutputURL:(NSURL *)arg1 ;
-(void)setDevice:(OSPDevice *)arg1 ;
-(NSURL *)outputURL;
-(void)setVariant:(NSString *)arg1 ;
-(OSPVolume *)targetVolume;
-(NSData *)appleConnectData;
-(NSURL *)kernelCacheOverride;
-(void)_printUsageForExecutableNamed:(id)arg1 ;
-(void)setTargetVolume:(OSPVolume *)arg1 ;
-(void)setAppleConnectData:(NSData *)arg1 ;
-(void)setKernelCacheOverride:(NSURL *)arg1 ;
-(void)setUserAuth:(char)arg1 ;
-(char)userAuth;
-(char)forcePersonalization;
-(NSArray *)packageSpecifiers;
-(NSURL *)signingServerURL;
-(void)setSigningServerURL:(NSURL *)arg1 ;
-(void)setPackageSpecifiers:(NSArray *)arg1 ;
-(NSURL *)volumeURL;
-(void)setVolumeURL:(NSURL *)arg1 ;
-(id)initWithArgs:(const char**)arg1 length:(int)arg2 ;
@end
