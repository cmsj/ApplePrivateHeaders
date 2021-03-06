/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSMenuDelegate.h>

@class NSMenu, Watchdog, NSMutableDictionary, NSTimer, NSString;

@interface DebugUtilities : NSObject <NSMenuDelegate> {

	NSMenu* debugMenu;
	Watchdog* watchdog;
	NSMutableDictionary* stopwatches;
	int numTestsLeftToComplete;
	char memorySamplerIsRunning;
	NSTimer* memorySamplerFinishedTimer;
	char automatedTestRunning;
	NSMenu* _crashWebExtensionBackgroundPagesMenu;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDebugUtilities;
+(void)startLaunchTimeLoggingIfNeeded;
-(void)dealloc;
-(id)init;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)startWatchdog;
-(void)stopWatchdog;
-(id)watchdog;
-(void)createDebugMenu;
-(char)shouldSuppressAlerts;
-(void)stopStopwatchWithIdentifier:(id)arg1 ;
-(double)stopwatchRunTimeWithIdentifier:(id)arg1 ;
-(void)maybeQuitAfterTestCompleted;
-(void)startStopwatchWithIdentifier:(id)arg1 ;
-(void)startMemorySampler:(double)arg1 ;
-(void)startStressTest;
-(void)replaySession:(id)arg1 ;
-(void)stopMemorySampler;
-(void)stopStressTest;
-(char)_alertsAreAutomaticallySuppressed;
-(void)toggleMemorySamplerTool:(id)arg1 ;
-(void)toggleStressTest:(id)arg1 ;
-(void)toggleWatchdog:(id)arg1 ;
-(void)toggleSuppressAlerts:(id)arg1 ;
-(id)_drawingAndCompositingFlagsSubmenuItem;
-(id)_mediaFlagsSubmenuItem;
-(id)_debugOverlaysFlagsSubmenuItem;
-(id)_layoutFlagsSubmenuItem;
-(id)_miscellaneousFlagsSubmenuItem;
-(id)_internalDebugFeaturesSubmenuItem;
-(id)_tabOrderManagmentSubmenuItem;
-(id)_tabFeaturesSubmenuItem;
-(id)_searchRelevanceSubmenuItem;
-(id)_translationSubmenuItem;
-(void)_populateDebugMenu;
-(void)_updateCrashWebExtensionBackgroundPagesMenu;
-(id)_noWebExtensionBackgroundPagesMenuItem;
-(id)_crashWebExtensionBackgroundPageMenuItemForWebExtension:(id)arg1 title:(id)arg2 ;
-(void)_crashWebExtensionBackgroundPage:(id)arg1 ;
-(char)validate_toggleStressTest:(id)arg1 ;
-(char)validate_toggleSuppressAlerts:(id)arg1 ;
-(char)validate_toggleWatchdog:(id)arg1 ;
-(char)validate_toggleMemorySamplerTool:(id)arg1 ;
-(char)isAutomatedTestRunning;
-(void)setAutomatedTestRunning:(char)arg1 ;
@end

