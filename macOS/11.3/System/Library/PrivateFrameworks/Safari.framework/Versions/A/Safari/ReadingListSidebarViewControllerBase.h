/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/SidebarContentViewController.h>

@class ReadingListTableViewController, BrowserWindowController, NSString;

@interface ReadingListSidebarViewControllerBase : NSViewController <SidebarContentViewController> {

	ReadingListTableViewController* _tableViewController;
	BrowserWindowController* _windowController;

}

@property (nonatomic,retain) ReadingListTableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
@property (assign,nonatomic,__weak) BrowserWindowController * windowController;                 //@synthesize windowController=_windowController - In the implementation block
@property (nonatomic,readonly) char canSelectAnyReadingListItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BrowserWindowController *)windowController;
-(void)setWindowController:(BrowserWindowController *)arg1 ;
-(void)setTableViewController:(ReadingListTableViewController *)arg1 ;
-(ReadingListTableViewController *)tableViewController;
-(void)wasInstalledBySidebarViewController:(id)arg1 ;
-(void)selectNextReadingListItem;
-(void)selectPreviousReadingListItem;
-(id)_readingListTableView;
-(void)selectCurrentlyLoadedReadingListItem;
-(void)_selectReadingListItemWithRowIndexFromBlock:(/*^block*/id)arg1 ;
-(char)canSelectAnyReadingListItem;
@end
