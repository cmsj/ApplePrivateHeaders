/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RBSProcessIdentity, NSUUID;

@interface RBLaunchdProperties : NSObject {

	long long _type;
	NSString* _path;
	int _hostPid;
	char _multiInstance;
	char _systemShell;
	char _variableEUID;
	unsigned char _overrideManageFlags;
	NSString* _bundleID;
	NSString* _jobLabel;
	NSString* _executablePath;
	int _requestedJetsamPriority;
	char _doesOverrideManagement;
	NSString* _underlyingAssertion;
	RBSProcessIdentity* _specifiedIdentity;
	NSString* _beforeTranslocationBundlePath;
	NSString* _homeDirectory;
	NSString* _tmpDirectory;
	NSUUID* _uuid;

}

@property (getter=isXPCService,nonatomic,readonly) char XPCService; 
@property (getter=isDaemon,nonatomic,readonly) char daemon; 
@property (getter=isMultiInstance,nonatomic,readonly) char multiInstance;                //@synthesize multiInstance=_multiInstance - In the implementation block
@property (getter=isSystemShell,nonatomic,readonly) char systemShell;                    //@synthesize systemShell=_systemShell - In the implementation block
@property (getter=hasVariableEUID,nonatomic,readonly) char variableEUID;                 //@synthesize variableEUID=_variableEUID - In the implementation block
@property (nonatomic,readonly) char doesOverrideManagement;                              //@synthesize doesOverrideManagement=_doesOverrideManagement - In the implementation block
@property (nonatomic,readonly) unsigned char overrideManageFlags;                        //@synthesize overrideManageFlags=_overrideManageFlags - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * jobLabel;                                      //@synthesize jobLabel=_jobLabel - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                                //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * path;                                          //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int hostPid;                                              //@synthesize hostPid=_hostPid - In the implementation block
@property (nonatomic,readonly) int requestedJetsamPriority;                              //@synthesize requestedJetsamPriority=_requestedJetsamPriority - In the implementation block
@property (nonatomic,readonly) NSString * underlyingAssertion;                           //@synthesize underlyingAssertion=_underlyingAssertion - In the implementation block
@property (nonatomic,readonly) NSString * beforeTranslocationBundlePath;                 //@synthesize beforeTranslocationBundlePath=_beforeTranslocationBundlePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeDirectory;                            //@synthesize homeDirectory=_homeDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSString * tmpDirectory;                             //@synthesize tmpDirectory=_tmpDirectory - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * specifiedIdentity;              //@synthesize specifiedIdentity=_specifiedIdentity - In the implementation block
+(id)propertiesForPid:(int)arg1 ;
-(char)isSystemShell;
-(char)doesOverrideManagement;
-(unsigned char)overrideManageFlags;
-(int)requestedJetsamPriority;
-(id)_initXPCServiceWithProperties:(id)arg1 path:(id)arg2 HostPid:(int)arg3 ;
-(id)_initDaemonWithProperties:(id)arg1 path:(id)arg2 ;
-(id)_initAppWithProperties:(id)arg1 ;
-(void)_parseLASSProperties:(id)arg1 ;
-(void)_parseAdditionalProperties:(id)arg1 ;
-(void)_parseDaemonProperties;
-(char)_parseDaemonPlist:(id)arg1 ;
-(char)hasVariableEUID;
-(RBSProcessIdentity *)specifiedIdentity;
-(NSUUID *)uuid;
-(NSString *)path;
-(NSString *)bundleID;
-(NSString *)executablePath;
-(NSString *)jobLabel;
-(char)isXPCService;
-(char)isDaemon;
-(char)isMultiInstance;
-(int)hostPid;
-(NSString *)beforeTranslocationBundlePath;
-(NSString *)homeDirectory;
-(NSString *)tmpDirectory;
-(NSString *)underlyingAssertion;
@end

