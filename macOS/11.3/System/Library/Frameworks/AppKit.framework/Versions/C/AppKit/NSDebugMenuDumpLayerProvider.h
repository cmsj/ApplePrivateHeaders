/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSMenuDelegate.h>
#import <libobjc.A.dylib/NSDebugMenuItemProvider.h>

@class NSMenu, NSString, NSMenuItem;

@interface NSDebugMenuDumpLayerProvider : NSObject <NSMenuDelegate, NSDebugMenuItemProvider> {

	NSMenu* _windowsMenu;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSMenuItem * menuItem; 
-(void)dealloc;
-(char)worksWhenModal;
-(void)menuNeedsUpdate:(id)arg1 ;
-(char)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id*)arg3 action:(SEL*)arg4 ;
-(NSMenuItem *)menuItem;
-(id)windowsMenuCreateIfNecessary;
-(void)_dumpLayerForFunctionRow:(id)arg1 ;
-(void)_dumpLayerForWindow:(id)arg1 ;
-(void)_dumpLayerForView:(id)arg1 ;
@end

