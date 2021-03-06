/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDictionary, NSUUID, RBSProcessIdentity, RBProcess, NSNumber;

@interface RBSLaunchContext : NSObject <RBSXPCSecureCoding, NSCopying> {

	BOOL _lsManageRoleOnly;
	char _forceSubmit;
	unsigned char _initialRole;
	unsigned char _spawnType;
	unsigned short _lsUMask;
	unsigned _lsPersona;
	int _hostPid;
	unsigned _auid;
	unsigned long long _lsSpawnFlags;
	NSArray* _lsBinpref;
	NSArray* _lsBinprefSubtype;
	NSString* _bundleIdentifier;
	NSDictionary* _extensionOverlay;
	NSUUID* _oneShotUUID;
	NSString* _standardOutputPath;
	NSString* _standardErrorPath;
	NSString* _standardInPath;
	NSString* _beforeTranslocationBundlePath;
	NSString* _homeDirectory;
	NSString* _tmpDirectory;
	RBSProcessIdentity* _identity;
	NSArray* _arguments;
	unsigned long long _executionOptions;
	NSArray* _attributes;
	NSString* _explanation;
	NSString* _managedPersona;
	RBProcess* _hostProcess;
	NSString* __overrideExecutablePath;
	NSArray* __additionalMachServices;
	NSDictionary* __additionalEnvironment;
	NSUUID* _requiredCacheUUID;
	NSNumber* _requiredSequenceNumber;

}

@property (assign,nonatomic) unsigned auid;                                                                      //@synthesize auid=_auid - In the implementation block
@property (nonatomic,retain) RBProcess * hostProcess;                                                            //@synthesize hostProcess=_hostProcess - In the implementation block
@property (assign,nonatomic) unsigned char initialRole;                                                          //@synthesize initialRole=_initialRole - In the implementation block
@property (nonatomic,copy) NSString * homeDirectory;                                                             //@synthesize homeDirectory=_homeDirectory - In the implementation block
@property (nonatomic,copy) NSString * tmpDirectory;                                                              //@synthesize tmpDirectory=_tmpDirectory - In the implementation block
@property (setter=_setOverrideExecutablePath:,nonatomic,copy) NSString * _overrideExecutablePath;                //@synthesize _overrideExecutablePath=__overrideExecutablePath - In the implementation block
@property (setter=_setAdditionalMachServices:,nonatomic,copy) NSArray * _additionalMachServices;                 //@synthesize _additionalMachServices=__additionalMachServices - In the implementation block
@property (setter=_setAdditionalEnvironment:,nonatomic,copy) NSDictionary * _additionalEnvironment;              //@synthesize _additionalEnvironment=__additionalEnvironment - In the implementation block
@property (nonatomic,copy) NSUUID * requiredCacheUUID;                                                           //@synthesize requiredCacheUUID=_requiredCacheUUID - In the implementation block
@property (nonatomic,copy) NSNumber * requiredSequenceNumber;                                                    //@synthesize requiredSequenceNumber=_requiredSequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL lsManageRoleOnly;                                                              //@synthesize lsManageRoleOnly=_lsManageRoleOnly - In the implementation block
@property (assign,nonatomic) unsigned long long lsSpawnFlags;                                                    //@synthesize lsSpawnFlags=_lsSpawnFlags - In the implementation block
@property (assign,nonatomic) unsigned short lsUMask;                                                             //@synthesize lsUMask=_lsUMask - In the implementation block
@property (assign,nonatomic) unsigned lsInitialRole; 
@property (assign,nonatomic) unsigned lsPersona;                                                                 //@synthesize lsPersona=_lsPersona - In the implementation block
@property (nonatomic,copy) NSString * beforeTranslocationBundlePath;                                             //@synthesize beforeTranslocationBundlePath=_beforeTranslocationBundlePath - In the implementation block
@property (nonatomic,copy) NSArray * lsBinpref;                                                                  //@synthesize lsBinpref=_lsBinpref - In the implementation block
@property (nonatomic,copy) NSArray * lsBinprefSubtype;                                                           //@synthesize lsBinprefSubtype=_lsBinprefSubtype - In the implementation block
@property (assign,nonatomic) int hostPid;                                                                        //@synthesize hostPid=_hostPid - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionOverlay;                                                    //@synthesize extensionOverlay=_extensionOverlay - In the implementation block
@property (nonatomic,retain) NSUUID * oneShotUUID;                                                               //@synthesize oneShotUUID=_oneShotUUID - In the implementation block
@property (assign,nonatomic) char forceSubmit;                                                                   //@synthesize forceSubmit=_forceSubmit - In the implementation block
@property (nonatomic,copy) RBSProcessIdentity * identity;                                                        //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * arguments;                                                                  //@synthesize arguments=_arguments - In the implementation block
@property (assign,nonatomic) unsigned long long executionOptions;                                                //@synthesize executionOptions=_executionOptions - In the implementation block
@property (assign,nonatomic) unsigned char spawnType;                                                            //@synthesize spawnType=_spawnType - In the implementation block
@property (nonatomic,copy) NSString * executablePath; 
@property (nonatomic,copy) NSArray * machServices; 
@property (nonatomic,copy) NSDictionary * environment; 
@property (nonatomic,copy) NSString * standardOutputPath;                                                        //@synthesize standardOutputPath=_standardOutputPath - In the implementation block
@property (nonatomic,copy) NSString * standardErrorPath;                                                         //@synthesize standardErrorPath=_standardErrorPath - In the implementation block
@property (nonatomic,copy) NSString * standardInPath;                                                            //@synthesize standardInPath=_standardInPath - In the implementation block
@property (nonatomic,copy) NSArray * attributes;                                                                 //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * explanation;                                                               //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,copy) NSString * managedPersona;                                                            //@synthesize managedPersona=_managedPersona - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithIdentity:(id)arg1 ;
+(id)context;
+(char)supportsRBSXPCSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setExecutablePath:(NSString *)arg1 ;
-(void)setLsSpawnFlags:(unsigned long long)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)setLsBinpref:(NSArray *)arg1 ;
-(void)setLsBinprefSubtype:(NSArray *)arg1 ;
-(void)setLsInitialRole:(unsigned)arg1 ;
-(void)setLsPersona:(unsigned)arg1 ;
-(void)setBeforeTranslocationBundlePath:(NSString *)arg1 ;
-(void)setStandardInPath:(NSString *)arg1 ;
-(void)setStandardOutputPath:(NSString *)arg1 ;
-(void)setStandardErrorPath:(NSString *)arg1 ;
-(unsigned long long)executionOptions;
-(void)setExecutionOptions:(unsigned long long)arg1 ;
-(NSString *)standardInPath;
-(NSString *)standardOutputPath;
-(NSString *)standardErrorPath;
-(NSArray *)arguments;
-(NSArray *)attributes;
-(NSString *)executablePath;
-(NSDictionary *)environment;
-(void)setAttributes:(NSArray *)arg1 ;
-(RBSProcessIdentity *)identity;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(NSString *)explanation;
-(void)setIdentity:(RBSProcessIdentity *)arg1 ;
-(NSString *)_overrideExecutablePath;
-(NSArray *)_additionalMachServices;
-(NSDictionary *)_additionalEnvironment;
-(NSString *)managedPersona;
-(unsigned char)spawnType;
-(BOOL)lsManageRoleOnly;
-(unsigned long long)lsSpawnFlags;
-(unsigned short)lsUMask;
-(NSArray *)lsBinpref;
-(NSArray *)lsBinprefSubtype;
-(unsigned char)initialRole;
-(unsigned)lsPersona;
-(int)hostPid;
-(NSDictionary *)extensionOverlay;
-(NSUUID *)oneShotUUID;
-(char)forceSubmit;
-(NSString *)beforeTranslocationBundlePath;
-(NSString *)homeDirectory;
-(NSString *)tmpDirectory;
-(void)_setOverrideExecutablePath:(id)arg1 ;
-(void)_setAdditionalMachServices:(id)arg1 ;
-(void)_setAdditionalEnvironment:(id)arg1 ;
-(void)setManagedPersona:(NSString *)arg1 ;
-(void)setSpawnType:(unsigned char)arg1 ;
-(void)setLsManageRoleOnly:(BOOL)arg1 ;
-(void)setLsUMask:(unsigned short)arg1 ;
-(void)setInitialRole:(unsigned char)arg1 ;
-(void)setHostPid:(int)arg1 ;
-(void)setExtensionOverlay:(NSDictionary *)arg1 ;
-(void)setOneShotUUID:(NSUUID *)arg1 ;
-(void)setForceSubmit:(char)arg1 ;
-(void)setHomeDirectory:(NSString *)arg1 ;
-(void)setTmpDirectory:(NSString *)arg1 ;
-(unsigned)lsInitialRole;
-(void)setMachServices:(NSArray *)arg1 ;
-(NSArray *)machServices;
-(unsigned)auid;
-(void)setAuid:(unsigned)arg1 ;
-(RBProcess *)hostProcess;
-(void)setHostProcess:(RBProcess *)arg1 ;
-(NSUUID *)requiredCacheUUID;
-(void)setRequiredCacheUUID:(NSUUID *)arg1 ;
-(NSNumber *)requiredSequenceNumber;
-(void)setRequiredSequenceNumber:(NSNumber *)arg1 ;
@end

