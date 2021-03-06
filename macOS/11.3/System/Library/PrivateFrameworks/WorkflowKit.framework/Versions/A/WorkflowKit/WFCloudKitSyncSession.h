/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFCloudKitSyncSession : NSObject
+(void)initialize;
+(void)setSyncEnabled:(char)arg1 ;
+(void)setDefaultShortcutsVersion:(long long)arg1 ;
+(long long)currentDefaultShortcutsVersion;
+(long long)defaultShortcutsVersion;
+(void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
+(char)needsDefaultShortcutUpdate;
+(char)ignoresUserDeletedZoneErrors;
+(void)setZoneWasPurged:(char)arg1 ;
+(void)setIgnoresUserDeletedZoneErrors:(char)arg1 ;
+(void)setLastSyncedFlagsHash:(long long)arg1 ;
+(long long)syncedFlagsHash;
+(void)setVoiceShortcutMigrationDidSync:(char)arg1 ;
+(char)voiceShortcutMigrationDidRun;
+(long long)lastSyncedFlagsHash;
+(char)isSyncEnabled;
+(char)zoneWasPurged;
+(void)setVoiceShortcutMigrationDidRun:(char)arg1 ;
+(char)voiceShortcutMigrationDidSync;
-(id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2 ;
@end

