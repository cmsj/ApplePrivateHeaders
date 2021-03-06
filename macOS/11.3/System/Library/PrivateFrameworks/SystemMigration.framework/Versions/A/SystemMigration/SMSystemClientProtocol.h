/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, NSURL, NSNumber, NSImage, SMViewController;


@protocol SMSystemClientProtocol
@property (readonly) char availableInSystemLists; 
@property (assign) char selected; 
@property (retain) NSArray * childSystems; 
@property (assign) unsigned long long state; 
@property (retain) NSString * stateErrorReasonKey; 
@property (assign) char selectableSystem; 
@property (assign) char enabled; 
@property (assign) char availableAction; 
@property (assign) char ineligible; 
@property (retain) NSString * ineligibleReasonKey; 
@property (retain) NSString * systemName; 
@property (retain) NSString * volumeName; 
@property (retain) NSString * modelID; 
@property (retain) NSURL * path; 
@property (assign) unsigned long long systemType; 
@property (retain) NSString * productVersion; 
@property (retain) NSString * systemVersion; 
@property (retain) NSURL * remoteDiskID; 
@property (retain) NSString * accessibilityDescription; 
@property (assign) char isNetworkSystem; 
@property (assign) char isRemoteSystem; 
@property (assign) unsigned long long freeSpace; 
@property (readonly) NSNumber * passcode; 
@property (retain) id longTermIdentifier; 
@property (retain) NSArray * availableBackups; 
@property (readonly) unsigned long long migratableItemsSupported; 
@property (readonly) NSString * displayName; 
@property (readonly) NSString * availableActionLabel; 
@property (retain) NSImage * displayIcon; 
@property (retain) NSImage * warningBadge; 
@property (retain) NSImage * idBadge; 
@property (retain) NSString * displayState; 
@property (assign) char sortsToTop; 
@property (assign) unsigned long long uiRank; 
@property (retain) NSString * volumeIconAccesibilityLabel; 
@property (__weak,readonly) NSArray * allUsers; 
@property (__weak,readonly) NSArray * allGroups; 
@property (readonly) unsigned long long migrationServerType; 
@property (__weak,readonly) NSString * migrationServerVersion; 
@property (assign) char valid; 
@property (readonly) SMViewController * accessoryMountingView; 
@required
+(id)guiMonitorKeys;
+(id)guiInterestedKeys;
+(id)guiInterestedOneTimeKeys;
-(char)valid;
-(unsigned long long)state;
-(char)enabled;
-(void)setEnabled:(char)arg1;
-(NSURL *)path;
-(NSString *)displayName;
-(void)setPath:(id)arg1;
-(void)setState:(unsigned long long)arg1;
-(NSString *)systemVersion;
-(NSString *)accessibilityDescription;
-(void)setAccessibilityDescription:(id)arg1;
-(char)selected;
-(void)setSelected:(char)arg1;
-(NSString *)productVersion;
-(NSArray *)allUsers;
-(void)setProductVersion:(id)arg1;
-(void)setValid:(char)arg1;
-(NSString *)systemName;
-(unsigned long long)systemType;
-(void)setSystemName:(id)arg1;
-(NSArray *)allGroups;
-(NSString *)modelID;
-(NSString *)volumeName;
-(unsigned long long)freeSpace;
-(void)setModelID:(id)arg1;
-(NSNumber *)passcode;
-(NSImage *)displayIcon;
-(void)setDisplayIcon:(id)arg1;
-(NSString *)displayState;
-(void)setDisplayState:(id)arg1;
-(void)setSystemVersion:(id)arg1;
-(NSArray *)childSystems;
-(char)isNetworkSystem;
-(NSString *)volumeIconAccesibilityLabel;
-(NSString *)availableActionLabel;
-(void)pressedActionButton:(id)arg1;
-(char)isRemoteSystem;
-(char)ineligible;
-(char)availableAction;
-(SMViewController *)accessoryMountingView;
-(void)setIneligible:(char)arg1;
-(NSString *)migrationServerVersion;
-(unsigned long long)migrationServerType;
-(char)selectableSystem;
-(unsigned long long)migratableItemsSupported;
-(NSImage *)warningBadge;
-(id)longTermIdentifier;
-(NSURL *)remoteDiskID;
-(void)setRemoteDiskID:(id)arg1;
-(NSString *)ineligibleReasonKey;
-(void)setIneligibleReasonKey:(id)arg1;
-(void)setVolumeName:(id)arg1;
-(char)availableInSystemLists;
-(NSArray *)availableBackups;
-(void)setAvailableBackups:(id)arg1;
-(void)setChildSystems:(id)arg1;
-(void)setUiRank:(unsigned long long)arg1;
-(unsigned long long)uiRank;
-(NSString *)stateErrorReasonKey;
-(void)setStateErrorReasonKey:(id)arg1;
-(void)setSelectableSystem:(char)arg1;
-(void)setAvailableAction:(char)arg1;
-(void)setSystemType:(unsigned long long)arg1;
-(void)setIsNetworkSystem:(char)arg1;
-(void)setIsRemoteSystem:(char)arg1;
-(void)setFreeSpace:(unsigned long long)arg1;
-(void)setLongTermIdentifier:(id)arg1;
-(void)setWarningBadge:(id)arg1;
-(NSImage *)idBadge;
-(void)setIdBadge:(id)arg1;
-(char)sortsToTop;
-(void)setSortsToTop:(char)arg1;
-(void)setVolumeIconAccesibilityLabel:(id)arg1;

@end

