/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMUser_Daemon.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, NSURL, NSNumber, NSLock, SMSystem_Daemon, SMDBEntry, NSMutableDictionary, NSObject;

@interface SMMacUser_Daemon : SMUser_Daemon {

	NSMutableArray* _allOtherFilesInDirectory;
	NSMutableSet* _userExcludedPathList;
	NSURL* _cachedAbsHomeDir;
	NSURL* _picturePath;
	NSNumber* _cachedHomeDirSize;
	NSLock* _cachedHomeDirSizeLock;
	char _calculatingHome;
	char _homeDirSearchComplete;
	char _homeDirToBeCopiedByMigration;
	char _needsAttention;
	char isAdminUser;
	char _secureTokenAuth;
	char _isAutoLoginUser;
	char _shouldUseAlternateFileVaultHomeDirPath;
	SMSystem_Daemon* sourceSystem;
	SMDBEntry* _backing;
	NSMutableDictionary* _supportedPathListSizes;
	NSObject*<OS_dispatch_queue> _sizingQueue;
	NSObject*<OS_dispatch_queue> _excludablePathQueue;

}

@property (retain) SMSystem_Daemon * sourceSystem; 
@property (retain) NSMutableArray * allOtherFilesInDirectory;                     //@synthesize allOtherFilesInDirectory=_allOtherFilesInDirectory - In the implementation block
@property (retain) SMDBEntry * backing;                                           //@synthesize backing=_backing - In the implementation block
@property (assign) char isAdminUser; 
@property (retain) NSObject*<OS_dispatch_queue> sizingQueue;                      //@synthesize sizingQueue=_sizingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> excludablePathQueue;              //@synthesize excludablePathQueue=_excludablePathQueue - In the implementation block
@property (retain) NSMutableDictionary * supportedPathListSizes;                  //@synthesize supportedPathListSizes=_supportedPathListSizes - In the implementation block
@property (getter=isDisabled,readonly) char disabled; 
@property (getter=isSecureTokenAuth,readonly) char secureTokenAuth;               //@synthesize secureTokenAuth=_secureTokenAuth - In the implementation block
@property (assign) char isAutoLoginUser;                                          //@synthesize isAutoLoginUser=_isAutoLoginUser - In the implementation block
@property (assign) char shouldUseAlternateFileVaultHomeDirPath;                   //@synthesize shouldUseAlternateFileVaultHomeDirPath=_shouldUseAlternateFileVaultHomeDirPath - In the implementation block
+(id)pathsToNeverCopy;
+(id)filevaultAlternateHomeDirPath:(id)arg1 ;
+(id)pathsToPreflight;
-(id)description;
-(id)name;
-(id)password;
-(Class)clientClass;
-(id)UUID;
-(unsigned)uid;
-(id)fullName;
-(char)isDisabled;
-(unsigned)gid;
-(id)fullDescription;
-(id)authenticationType;
-(SMDBEntry *)backing;
-(char)isAdminUser;
-(id)entriesForKey:(id)arg1 ;
-(id)picturePath;
-(SMSystem_Daemon *)sourceSystem;
-(id)relativeHomeDir;
-(char)filevault;
-(char)homeDirToBeCopiedByMigration;
-(char)portableHomeUser;
-(id)iCloudNames;
-(id)currentAbsolutePathToHomeDir;
-(id)pathsExcludedByTheUser;
-(NSMutableArray *)allOtherFilesInDirectory;
-(NSObject*<OS_dispatch_queue>)excludablePathQueue;
-(void)addUserExcludedPath:(id)arg1 ;
-(id)_getEntry:(id)arg1 atIndex:(int)arg2 ;
-(id)modernICloudNames;
-(id)oldICloudNames;
-(id)_fileVaultImagePath;
-(id)picturePathFromDB;
-(id)embeddedDSPicture;
-(void)setShouldUseAlternateFileVaultHomeDirPath:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)sizingQueue;
-(id)pathsExcludableByTheUserWithPather:(id)arg1 ;
-(id)sizeOfDataToCopySizingQueueWithPather:(id)arg1 ;
-(void)setHomeDirSize:(id)arg1 ;
-(NSMutableDictionary *)supportedPathListSizes;
-(id)totalHomeDirectorySizeWithPather:(id)arg1 ;
-(id)sizeForSubPath:(id)arg1 withPather:(id)arg2 ;
-(char)homeDirIsRedirected;
-(void)setBacking:(SMDBEntry *)arg1 ;
-(void)setSourceSystem:(SMSystem_Daemon *)arg1 ;
-(void)setIsAdminUser:(char)arg1 ;
-(void)setSupportedPathListSizes:(NSMutableDictionary *)arg1 ;
-(void)setSizingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setExcludablePathQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)__homeDirToBeCopiedByMigration;
-(void)setIsAutoLoginUser:(char)arg1 ;
-(id)pathsExcluded;
-(void)addUserExcludedPaths:(id)arg1 ;
-(void)removeUserExcludedPath:(id)arg1 ;
-(char)hasUserExcludedPath:(id)arg1 ;
-(id)extraString:(id)arg1 withColor:(id)arg2 ;
-(char)dontNeedToCopyUserHome;
-(id)iCloudIdentifiers;
-(id)iCloudName;
-(char)isRoleUser;
-(id)accountPicture;
-(id)homeDirOnNetworkSystem;
-(id)filevaultAlternateHomeDirPath;
-(id)passwordFilePath;
-(id)homeDirSize;
-(void)calculateHomeDirSizeWithPather:(id)arg1 callbackBlock:(/*^block*/id)arg2 ;
-(id)sizeOfDataToCopyWithPather:(id)arg1 ;
-(id)_initWithEntry:(id)arg1 fromSystem:(id)arg2 ;
-(char)isSecureTokenAuth;
-(char)isAutoLoginUser;
-(char)shouldUseAlternateFileVaultHomeDirPath;
-(void)setAllOtherFilesInDirectory:(NSMutableArray *)arg1 ;
@end
