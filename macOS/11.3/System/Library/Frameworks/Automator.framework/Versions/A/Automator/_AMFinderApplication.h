/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/SBApplication.h>

@class _AMFinderFile, SBObject, NSString, _AMFinderDisk, _AMFinderDesktopObject, _AMFinderTrashObject, _AMFinderFolder, _AMFinderComputerObject, _AMFinderPreferences;

@interface _AMFinderApplication : SBApplication

@property (copy) _AMFinderFile * desktopPicture; 
@property (copy,readonly) SBObject * clipboard; 
@property (copy,readonly) NSString * name; 
@property (assign) char visible; 
@property (assign) char frontmost; 
@property (copy) SBObject * selection; 
@property (copy,readonly) SBObject * insertionLocation; 
@property (copy,readonly) NSString * productVersion; 
@property (copy,readonly) NSString * version; 
@property (copy,readonly) _AMFinderDisk * startupDisk; 
@property (copy,readonly) _AMFinderDesktopObject * desktop; 
@property (copy,readonly) _AMFinderTrashObject * trash; 
@property (copy,readonly) _AMFinderFolder * home; 
@property (copy,readonly) _AMFinderComputerObject * computerContainer; 
@property (copy,readonly) _AMFinderPreferences * FinderPreferences; 
+(id)application;
-(NSString *)name;
-(NSString *)version;
-(id)containers;
-(void)activate;
-(id)windows;
-(void)setVisible:(char)arg1 ;
-(id)items;
-(char)visible;
-(SBObject *)selection;
-(void)quit;
-(NSString *)productVersion;
-(_AMFinderFolder *)home;
-(id)packages;
-(void)restart;
-(id)files;
-(void)setSelection:(SBObject *)arg1 ;
-(void)eject;
-(id)folders;
-(void)shutDown;
-(_AMFinderTrashObject *)trash;
-(void)sleep;
-(char)frontmost;
-(void)setFrontmost:(char)arg1 ;
-(id)classNamesForCodes;
-(id)codesForPropertyNames;
-(void)setDesktopPicture:(_AMFinderFile *)arg1 ;
-(id)disks;
-(_AMFinderDisk *)startupDisk;
-(id)aliasFiles;
-(id)applicationFiles;
-(id)documentFiles;
-(id)internetLocationFiles;
-(id)clippings;
-(id)FinderWindows;
-(id)clippingWindows;
-(SBObject *)clipboard;
-(SBObject *)insertionLocation;
-(_AMFinderDesktopObject *)desktop;
-(_AMFinderComputerObject *)computerContainer;
-(_AMFinderPreferences *)FinderPreferences;
-(void)emptySecurity:(char)arg1 ;
-(_AMFinderFile *)desktopPicture;
@end

