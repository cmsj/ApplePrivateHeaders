/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SystemMigration-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SMSystem_Daemon, NSDictionary, NSMutableArray, SMUIDGIDTranslator, NSArray, NSMutableSet, NSMutableDictionary, NSNumber;

@interface SMMigrationRequest : NSObject <NSCoding, NSSecureCoding> {

	char _disableSaving;
	char _rebootOccurred;
	char _systemDefenseTriggered;
	char _activateFilevault;
	char _shouldEnableFastUserSwitching;
	char _copiesNetworkSettings;
	char _copiesTimeZoneSettings;
	char _copiesMachineSettings;
	char _copiesPrinterSettings;
	char _copiesHomeDirectories;
	char _copiesUsers;
	char _predeterminedUIDs;
	char _shouldMigrateGuest;
	char _guestWasOn;
	char _hasFatalError;
	unsigned long long _state;
	unsigned long long _type;
	unsigned long long _originatingApplication;
	NSString* _uuid;
	SMSystem_Daemon* _sourceSystem;
	SMSystem_Daemon* _targetSystem;
	NSDictionary* _sourceSystemLongTermIdentifier;
	NSDictionary* _targetSystemLongTermIdentifier;
	NSMutableArray* _messages;
	SMUIDGIDTranslator* _uidgidTranslator;
	NSString* _secureTokenUser;
	NSString* _secureTokenPassword;
	NSDictionary* _iCloudBag;
	NSMutableArray* _usersToTransfer;
	NSMutableArray* _fileGroupingPaths;
	NSArray* _incompatibleApps;
	NSString* _autoLoginUser;
	NSMutableSet* _faultFiles;
	NSDictionary* _failureRequests;
	NSMutableSet* _completedPaths;
	NSMutableDictionary* _stepProgress;
	timeval _bootTime;

}

@property (retain) NSString * autoLoginUser;                                   //@synthesize autoLoginUser=_autoLoginUser - In the implementation block
@property (retain) SMUIDGIDTranslator * uidgidTranslator;                      //@synthesize uidgidTranslator=_uidgidTranslator - In the implementation block
@property (retain) NSMutableSet * completedPaths;                              //@synthesize completedPaths=_completedPaths - In the implementation block
@property (assign) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (assign) timeval bootTime;                                           //@synthesize bootTime=_bootTime - In the implementation block
@property (assign) char hasFatalError;                                         //@synthesize hasFatalError=_hasFatalError - In the implementation block
@property (retain) NSMutableArray * messages;                                  //@synthesize messages=_messages - In the implementation block
@property (retain) NSMutableDictionary * stepProgress;                         //@synthesize stepProgress=_stepProgress - In the implementation block
@property (readonly) char shouldSave; 
@property (assign) unsigned long long type;                                    //@synthesize type=_type - In the implementation block
@property (assign) unsigned long long originatingApplication;                  //@synthesize originatingApplication=_originatingApplication - In the implementation block
@property (readonly) NSNumber * bootTimeDisplay; 
@property (retain) NSString * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (retain) SMSystem_Daemon * sourceSystem;                             //@synthesize sourceSystem=_sourceSystem - In the implementation block
@property (retain) SMSystem_Daemon * targetSystem;                             //@synthesize targetSystem=_targetSystem - In the implementation block
@property (retain) NSDictionary * sourceSystemLongTermIdentifier;              //@synthesize sourceSystemLongTermIdentifier=_sourceSystemLongTermIdentifier - In the implementation block
@property (retain) NSDictionary * targetSystemLongTermIdentifier;              //@synthesize targetSystemLongTermIdentifier=_targetSystemLongTermIdentifier - In the implementation block
@property (assign) char osInstall; 
@property (assign) char disableSaving;                                         //@synthesize disableSaving=_disableSaving - In the implementation block
@property (assign) char rebootOccurred;                                        //@synthesize rebootOccurred=_rebootOccurred - In the implementation block
@property (readonly) char requiresReboot; 
@property (assign) char systemDefenseTriggered;                                //@synthesize systemDefenseTriggered=_systemDefenseTriggered - In the implementation block
@property (retain) NSString * secureTokenUser;                                 //@synthesize secureTokenUser=_secureTokenUser - In the implementation block
@property (retain) NSString * secureTokenPassword;                             //@synthesize secureTokenPassword=_secureTokenPassword - In the implementation block
@property (assign) char activateFilevault;                                     //@synthesize activateFilevault=_activateFilevault - In the implementation block
@property (retain) NSDictionary * iCloudBag;                                   //@synthesize iCloudBag=_iCloudBag - In the implementation block
@property (retain) NSMutableArray * usersToTransfer;                           //@synthesize usersToTransfer=_usersToTransfer - In the implementation block
@property (assign) char shouldEnableFastUserSwitching;                         //@synthesize shouldEnableFastUserSwitching=_shouldEnableFastUserSwitching - In the implementation block
@property (retain) NSMutableArray * fileGroupingPaths;                         //@synthesize fileGroupingPaths=_fileGroupingPaths - In the implementation block
@property (assign) char copiesNetworkSettings;                                 //@synthesize copiesNetworkSettings=_copiesNetworkSettings - In the implementation block
@property (assign) char copiesTimeZoneSettings;                                //@synthesize copiesTimeZoneSettings=_copiesTimeZoneSettings - In the implementation block
@property (assign) char copiesMachineSettings;                                 //@synthesize copiesMachineSettings=_copiesMachineSettings - In the implementation block
@property (assign) char copiesPrinterSettings;                                 //@synthesize copiesPrinterSettings=_copiesPrinterSettings - In the implementation block
@property (readonly) char copiesApplicationSettings; 
@property (assign) char copiesHomeDirectories;                                 //@synthesize copiesHomeDirectories=_copiesHomeDirectories - In the implementation block
@property (retain) NSArray * incompatibleApps;                                 //@synthesize incompatibleApps=_incompatibleApps - In the implementation block
@property (assign) char copiesUsers;                                           //@synthesize copiesUsers=_copiesUsers - In the implementation block
@property (assign) char predeterminedUIDs;                                     //@synthesize predeterminedUIDs=_predeterminedUIDs - In the implementation block
@property (assign) char shouldMigrateGuest;                                    //@synthesize shouldMigrateGuest=_shouldMigrateGuest - In the implementation block
@property (assign) char guestWasOn;                                            //@synthesize guestWasOn=_guestWasOn - In the implementation block
@property (retain) NSMutableSet * faultFiles;                                  //@synthesize faultFiles=_faultFiles - In the implementation block
@property (readonly) char didReboot; 
@property (readonly) char hasResumableSystems; 
@property (readonly) char resumable; 
@property (readonly) char canRunInBackground; 
@property (readonly) char currentlyBackgrounded; 
@property (readonly) char shouldPersistNetworkKeys; 
@property (retain) NSDictionary * failureRequests;                             //@synthesize failureRequests=_failureRequests - In the implementation block
+(char)supportsSecureCoding;
+(void)performSecurityOperation:(/*^block*/id)arg1 ;
+(void)saveSecurityState:(id)arg1 ;
+(void)restoreSecurityState:(id)arg1 ;
+(id)propertiesToMonitorForSave;
+(id)keyPathsForValuesAffectingOsInstall;
+(id)keyPathsForValuesAffectingBootTimeDisplay;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(unsigned long long)state;
-(unsigned long long)type;
-(void)setUuid:(NSString *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithXPCDict:(id)arg1 ;
-(void)addMessage:(id)arg1 ;
-(NSMutableArray *)messages;
-(void)setMessages:(NSMutableArray *)arg1 ;
-(char)resumable;
-(void)addMessages:(id)arg1 ;
-(char)shouldSave;
-(void)setRebootOccurred:(char)arg1 ;
-(char)rebootOccurred;
-(SMSystem_Daemon *)targetSystem;
-(SMSystem_Daemon *)sourceSystem;
-(NSMutableArray *)usersToTransfer;
-(char)copiesUsers;
-(NSArray *)incompatibleApps;
-(char)osInstall;
-(char)hasResumableSystems;
-(void)setDisableSaving:(char)arg1 ;
-(void)setSystemDefenseTriggered:(char)arg1 ;
-(void)setSourceSystem:(SMSystem_Daemon *)arg1 ;
-(id)usersToReplaceOnDestinationSystem:(id)arg1 ;
-(SMUIDGIDTranslator *)uidgidTranslator;
-(char)copiesHomeDirectories;
-(char)currentlyBackgrounded;
-(char)copyWasCompletedForPath:(id)arg1 ;
-(char)copiesMachineSettings;
-(char)copiesNetworkSettings;
-(char)copiesApplicationSettings;
-(char)copiesTimeZoneSettings;
-(char)shouldEnableFastUserSwitching;
-(id)progressForStep:(id)arg1 ;
-(void)setProgress:(id)arg1 forStep:(id)arg2 ;
-(NSDictionary *)targetSystemLongTermIdentifier;
-(void)setTargetSystem:(SMSystem_Daemon *)arg1 ;
-(NSDictionary *)sourceSystemLongTermIdentifier;
-(void)setIncompatibleApps:(NSArray *)arg1 ;
-(void)advanceToNextState;
-(char)didReboot;
-(char)shouldMigrateGuest;
-(void)addUserToTransfer:(id)arg1 excludedPaths:(id)arg2 overwriteTargetName:(id)arg3 additionalKeyValues:(id)arg4 ;
-(NSMutableArray *)fileGroupingPaths;
-(char)predeterminedUIDs;
-(void)setPredeterminedUIDs:(char)arg1 ;
-(char)shouldPersistNetworkKeys;
-(char)requiresReboot;
-(char)hasFatalError;
-(void)copyCompletedForPath:(id)arg1 ;
-(void)copyCompletedForPaths:(id)arg1 ;
-(NSMutableSet *)faultFiles;
-(void)setFaultFiles:(NSMutableSet *)arg1 ;
-(void)setOriginatingApplication:(unsigned long long)arg1 ;
-(unsigned long long)originatingApplication;
-(NSString *)secureTokenUser;
-(void)setSecureTokenPassword:(NSString *)arg1 ;
-(void)setSecureTokenUser:(NSString *)arg1 ;
-(NSString *)secureTokenPassword;
-(void)setICloudBag:(NSDictionary *)arg1 ;
-(void)setActivateFilevault:(char)arg1 ;
-(NSDictionary *)iCloudBag;
-(void)setUsersToTransfer:(NSMutableArray *)arg1 ;
-(void)setFileGroupingPaths:(NSMutableArray *)arg1 ;
-(void)setCompletedPaths:(NSMutableSet *)arg1 ;
-(void)setStepProgress:(NSMutableDictionary *)arg1 ;
-(void)_initCollections;
-(void)attachSaveMonitors;
-(void)setUidgidTranslator:(SMUIDGIDTranslator *)arg1 ;
-(void)setCopiesMachineSettings:(char)arg1 ;
-(void)setCopiesPrinterSettings:(char)arg1 ;
-(void)setCopiesNetworkSettings:(char)arg1 ;
-(void)setCopiesTimeZoneSettings:(char)arg1 ;
-(void)setCopiesUsers:(char)arg1 ;
-(void)setCopiesHomeDirectories:(char)arg1 ;
-(void)setSourceSystemLongTermIdentifier:(NSDictionary *)arg1 ;
-(void)setTargetSystemLongTermIdentifier:(NSDictionary *)arg1 ;
-(void)updateAutoLoginUser;
-(void)setFailureRequests:(NSDictionary *)arg1 ;
-(char)copiesPrinterSettings;
-(id)sanitizedUsers;
-(NSMutableSet *)completedPaths;
-(NSMutableDictionary *)stepProgress;
-(char)activateFilevault;
-(NSDictionary *)failureRequests;
-(id)sanitizedUsersForKeys:(id)arg1 ;
-(id)securitySanitizedUsers;
-(timeval)bootTime;
-(NSString *)autoLoginUser;
-(char)guestWasOn;
-(char)systemDefenseTriggered;
-(void)setAutoLoginUser:(NSString *)arg1 ;
-(void)setBootTime:(timeval)arg1 ;
-(void)setHasFatalError:(char)arg1 ;
-(void)setShouldMigrateGuest:(char)arg1 ;
-(void)setGuestWasOn:(char)arg1 ;
-(void)setShouldEnableFastUserSwitching:(char)arg1 ;
-(void)detachSaveMonitors;
-(void)removeUserToTransferWithOldShortName:(id)arg1 ;
-(void)getBootTime:(timeval*)arg1 ;
-(void)updateBootTime;
-(void)sanitizeRequest;
-(char)disableSaving;
-(char)canRunInBackground;
-(id)exportXPCDict;
-(id)dictionaryDescription;
-(void)addFileGroupingPath:(unsigned long long)arg1 ;
-(void)nudgeBootTime;
-(void)setOsInstall:(char)arg1 ;
-(NSNumber *)bootTimeDisplay;
@end

