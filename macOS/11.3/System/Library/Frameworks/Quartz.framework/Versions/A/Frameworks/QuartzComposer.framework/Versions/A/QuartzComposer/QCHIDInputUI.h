/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCInspector.h>

@class NSPopUpButton, NSTableView, GFList, NSMutableArray;

@interface QCHIDInputUI : QCInspector {

	NSPopUpButton* deviceMenu;
	NSTableView* elementsTableView;
	GFList* _allElements;
	NSMutableArray* _elements;
	unsigned _addNotification;
	unsigned _removeNotification;
	IONotificationPortRef _notificationPort;
	CFRunLoopSourceRef _runLoopSource;

}
+(id)viewNibName;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)_setupUI;
-(void)setupViewForPatch:(id)arg1 ;
-(void)resetView;
-(void)_updateUI;
-(void)updateDevice:(id)arg1 ;
@end

