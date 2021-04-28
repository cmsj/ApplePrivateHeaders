/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSTouchBarFinderObserver.h>

@class NSFunctionRow, NSMutableArray, NSTouchBarViewController, NSTouchBarEscapeKeyViewController, NSTouchBarCustomizationController, NSApplicationFunctionRowContainer, NSTouchBarFinder, _NSQuickActionTouchBarClient, NSString;

@interface NSApplicationFunctionRowController : NSObject <NSTouchBarFinderObserver> {

	NSFunctionRow* _applicationFunctionRowElement;
	NSFunctionRow* _escapeKeyFunctionRowElement;
	NSMutableArray* _currentBars;
	NSTouchBarViewController* _applicationTouchBarViewController;
	NSTouchBarEscapeKeyViewController* _escapeKeyTouchBarViewController;
	NSTouchBarCustomizationController* _customizationController;
	NSApplicationFunctionRowContainer* _rootContainer;
	NSTouchBarFinder* _finder;
	_NSQuickActionTouchBarClient* _quickActionClient;
	unsigned _observingPopoversForCustomization : 1;

}

@property (readonly) NSFunctionRow * applicationFunctionRow;                                    //@synthesize applicationFunctionRowElement=_applicationFunctionRowElement - In the implementation block
@property (readonly) NSTouchBarCustomizationController * _customizationController; 
@property (readonly) char alwaysWantsEscKeyReplacements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)sharedApplicationFunctionRowController;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_sync;
-(char)alwaysWantsEscKeyReplacements;
-(void)_updateEscapeKeyItemSize;
-(void)_noteBarsChanged;
-(void)_setup;
-(void)_teardown;
-(void)_refreshTouchBarView:(id)arg1 ;
-(void)_updateEscapeKeyItem;
-(void)touchBarFinder:(id)arg1 updatedTouchBars:(id)arg2 ;
-(NSTouchBarCustomizationController *)_customizationController;
-(NSFunctionRow *)applicationFunctionRow;
@end
