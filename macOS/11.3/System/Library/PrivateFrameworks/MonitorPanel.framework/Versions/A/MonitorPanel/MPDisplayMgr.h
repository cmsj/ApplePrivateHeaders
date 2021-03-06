/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MonitorPanel.framework/Versions/A/MonitorPanel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MonitorPanel/MonitorPanel-Structs.h>
@class NSMutableArray, MPDisplay, NSArray;

@interface MPDisplayMgr : NSObject {

	NSMutableArray* _displays;
	MPDisplay* _mainDisplay;
	os_unfair_lock_s _hwChangeLock;
	os_unfair_lock_s _dataLock;
	os_unfair_lock_s _accessLock;
	char _hasBuiltinRetina;
	char _hasSmallBuiltinRetina;
	char _hwChanged;
	char _safeMode;

}

@property (readonly) NSArray * displays; 
@property (readonly) MPDisplay * mainDisplay;                        //@synthesize mainDisplay=_mainDisplay - In the implementation block
@property (readonly) char hasBuiltinRetina;                          //@synthesize hasBuiltinRetina=_hasBuiltinRetina - In the implementation block
@property (readonly) char hasSmallBuiltinRetina;                     //@synthesize hasSmallBuiltinRetina=_hasSmallBuiltinRetina - In the implementation block
@property (readonly) char runningInSafeMode;                         //@synthesize safeMode=_safeMode - In the implementation block
@property (readonly) char hasNightShiftCabableDisplays; 
+(id)sharedMgr;
-(void)dealloc;
-(id)init;
-(void)postNotification:(id)arg1 ;
-(NSArray *)displays;
-(MPDisplay *)mainDisplay;
-(void)_removeNotifications;
-(id)displayWithID:(int)arg1 ;
-(char)runningInSafeMode;
-(void)_updateDisplaysList;
-(void)serviceReconfigure:(id)arg1 ;
-(void)_nameDisplays:(id)arg1 ;
-(void)notifyReconfigure;
-(void)_refreshDisplays;
-(id)mirrorSetForDisplay:(id)arg1 ;
-(void)_mirrorAllDisplaysTo:(id)arg1 useBestMode:(char)arg2 ;
-(void)notifyHardwareChange;
-(void)notifyWillReconfigure;
-(void)lockAccess;
-(void)unlockAccess;
-(char)tryLockAccess;
-(void)createMirrorSet:(id)arg1 ;
-(char)isAnyDisplayMirrored;
-(id)mirrorMasterForDisplay:(id)arg1 ;
-(void)setMirrorMaster:(id)arg1 useBestMode:(char)arg2 ;
-(void)setMirrorMasterMode:(id)arg1 ;
-(void)setMirrorState:(char)arg1 useBestMode:(char)arg2 ;
-(void)stopAllMirroring;
-(void)stopMirroringForDisplay:(id)arg1 ;
-(char)hasNightShiftCabableDisplays;
-(char)hasBuiltinRetina;
-(char)hasSmallBuiltinRetina;
@end

