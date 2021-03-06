/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_KSTextReplacementSyncProtocol.h>

@protocol OS_dispatch_queue, _KSTextReplacementSyncProtocol, _KSMigrationDelegate;
@class NSObject, _KSTextReplacementCKStore, _KSTextReplacementLegacyStore, NSString;

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol> {

	NSObject*<OS_dispatch_queue> _migrationQueue;
	char _didMigrateForCurrentAccount;
	char _deviceDidMigrateOnCloud;
	char _didCheckMigrationOnCloud;
	_KSTextReplacementCKStore* _ckStore;
	_KSTextReplacementLegacyStore* _legacyStore;
	NSObject*<_KSTextReplacementSyncProtocol> _textReplacementStore;
	NSString* _directoryPath;
	id<_KSMigrationDelegate> _delegate;

}

@property (nonatomic,retain) _KSTextReplacementCKStore * ckStore;                                         //@synthesize ckStore=_ckStore - In the implementation block
@property (nonatomic,retain) _KSTextReplacementLegacyStore * legacyStore;                                 //@synthesize legacyStore=_legacyStore - In the implementation block
@property (nonatomic,retain) NSObject*<_KSTextReplacementSyncProtocol> textReplacementStore;              //@synthesize textReplacementStore=_textReplacementStore - In the implementation block
@property (nonatomic,copy) NSString * directoryPath;                                                      //@synthesize directoryPath=_directoryPath - In the implementation block
@property (assign,nonatomic) char didMigrateForCurrentAccount;                                            //@synthesize didMigrateForCurrentAccount=_didMigrateForCurrentAccount - In the implementation block
@property (assign,nonatomic) char deviceDidMigrateOnCloud;                                                //@synthesize deviceDidMigrateOnCloud=_deviceDidMigrateOnCloud - In the implementation block
@property (assign,nonatomic) char didCheckMigrationOnCloud;                                               //@synthesize didCheckMigrationOnCloud=_didCheckMigrationOnCloud - In the implementation block
@property (assign,nonatomic,__weak) id<_KSMigrationDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textReplacementStoreWithTestDirectory:(id)arg1 withDelegate:(id)arg2 forceMigration:(char)arg3 forceCloudKitSync:(char)arg4 ;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id<_KSMigrationDelegate>)delegate;
-(void)setDelegate:(id<_KSMigrationDelegate>)arg1 ;
-(void)accountDidChange:(id)arg1 ;
-(NSString *)directoryPath;
-(id)initWithDirectoryPath:(id)arg1 ;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(void)setLegacyStore:(_KSTextReplacementLegacyStore *)arg1 ;
-(_KSTextReplacementLegacyStore *)legacyStore;
-(void)setTextReplacementStore:(NSObject*<_KSTextReplacementSyncProtocol>)arg1 ;
-(void)pushAllLocalRecordsOnceIfNeeded;
-(void)checkForMigration;
-(void)notifyTextReplacementDidChange;
-(void)resetMigrationState;
-(void)setDidMigrateForCurrentAccount:(char)arg1 ;
-(void)setDeviceDidMigrateOnCloud:(char)arg1 ;
-(void)setDidCheckMigrationOnCloud:(char)arg1 ;
-(_KSTextReplacementCKStore *)ckStore;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(char)deviceDidMigrate;
-(void)_migrateEntriesSinceDate:(id)arg1 repeatCount:(unsigned long long)arg2 ;
-(void)respondToMigrationCompletion;
-(double)minimumUptimeRemaining;
-(NSObject*<_KSTextReplacementSyncProtocol>)textReplacementStore;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordSyncStatus;
-(void)migrateLegacyStore;
-(void)setCkStore:(_KSTextReplacementCKStore *)arg1 ;
-(char)didMigrateForCurrentAccount;
-(char)deviceDidMigrateOnCloud;
-(char)didCheckMigrationOnCloud;
@end

