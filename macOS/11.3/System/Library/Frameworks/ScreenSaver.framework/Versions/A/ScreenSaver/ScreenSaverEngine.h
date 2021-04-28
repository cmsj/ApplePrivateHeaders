/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSaver/ScreenSaver-Structs.h>
#import <AppKit/NSResponder.h>
#import <libobjc.A.dylib/NSWindowDelegate.h>
#import <libobjc.A.dylib/NSFileManagerDelegate.h>
#import <libobjc.A.dylib/NSApplicationDelegate.h>

@class ScreenSaverModule, NSMutableArray, NSString;

@interface ScreenSaverEngine : NSResponder <NSWindowDelegate, NSFileManagerDelegate, NSApplicationDelegate> {

	ScreenSaverModule* _module;
	NSMutableArray* _windows;
	NSMutableArray* _savers;
	NSString* _commandLineModuleName;
	char _mainOnly;
	char _isRunning;
	char _runFromPref;
	char _blackSaver;
	char _faded;
	char _atLoginWindow;
	char _windowMode;
	char _noEarlyMouseCheck;
	int _numWindows;
	int _retCode;
	CGRect _mouseAllowedRect;
	CGPoint _startingMousePoint;
	char _keyEventTerminated;
	unsigned _fadeToken;
	CGPoint _endingMousePoint;
	char _performGammaFade;
	SCD_Struct_Sc3* _cornerList;
	long long _cornerListCnt;
	id _delegate;
	unsigned long long _ssSpaceID;
	NSMutableArray* _ssSpaceArray;
	NSString* _uuidString;

}

@property (readonly) int retCode; 
@property (getter=isRunning,readonly) char running; 
@property (assign) char runFromPref; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(void)dealloc;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(char)isRunning;
-(void)tabletPoint:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationDidResignActive:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)_cancelKey:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)setRunFromPref:(char)arg1 ;
-(void)_setupCornerShapes;
-(int)_stateForMousePosition:(CGPoint)arg1 mask:(unsigned)arg2 ;
-(void)startScreenSaver:(char)arg1 ;
-(void)reallyStopScreenSaver:(id)arg1 ;
-(void)_stopSaver:(char)arg1 ;
-(void)_addMyselfToPermittedFrontASNList;
-(id)_defaultModuleForLoginWindow;
-(id)_incompatibleArchitectureModuleForModuleName:(id)arg1 ;
-(void)stopScreenSaver:(char)arg1 ;
-(id)_initAndGetModule;
-(void)_timedHideCursor;
-(void)_performFadeWithMode:(int)arg1 time:(float)arg2 ;
-(id)_windowForSaver:(id)arg1 frame:(CGRect)arg2 backingStoreType:(unsigned long long)arg3 ;
-(id)_saverFromModule:(id)arg1 withFrame:(CGRect)arg2 ;
-(void)_resetTrackingRects;
-(void)screenSaverEngineDaemonStarted:(id)arg1 ;
-(void)mouseEventToInteractiveSavers:(id)arg1 ;
-(char)_mouseInteractivityEnabled;
-(void)clearMouseMovedOrigin;
-(void)pauseScreenSaver;
-(void)unpauseScreenSaver;
-(void)readjustDisplays;
-(int)retCode;
-(char)runFromPref;
-(void)hidEventReceived;
@end
