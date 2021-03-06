/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <libobjc.A.dylib/NSOutlineViewDataSource.h>
#import <libobjc.A.dylib/NSWindowDelegate.h>

@class NSWindowController, NSScrollView, AMSNetworkDeviceOutlineView, AMSNetworkInfoView, NSTextField, NSView, NSSearchField, NSPopUpButton, NSMutableSet, NSArray, NSString, NSMutableArray, NSTimer;

@interface CANetworkBrowserImpl : NSObject <NSOutlineViewDataSource, NSWindowDelegate> {

	NSWindowController* controller;
	NSScrollView* outlineScrollView;
	AMSNetworkDeviceOutlineView* outlineView;
	AMSNetworkInfoView* infoView;
	NSTextField* noDevicesLabel;
	NSView* noAVBView;
	NSSearchField* searchField;
	NSPopUpButton* sortPopup;
	NSMutableSet* _boxAudioIDSet;
	NSMutableSet* _boxObjects;
	NSArray* _dataSource;
	NSArray* _filteredDataSource;
	NSString* sortKey;
	NSMutableArray* expandedItems;
	char _avbEnabled;
	NSTimer* avbEnabledTimer;
	char cleanedUp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cleanup;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)windowDidLoad;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(int)systemObjectPropertyChanged:(unsigned)arg1 property:(unsigned)arg2 ;
-(void)updateViewEnabledState;
-(char)isAVBEnabled;
-(id)getBoxList;
-(char)shouldShowBox:(id)arg1 ;
-(void)addObserverForBox:(id)arg1 ;
-(id)getSortedItemList;
-(void)createFilteredItemList;
-(void)itemCollapseStateChanged:(id)arg1 ;
-(void)ownedWindowClosing:(id)arg1 ;
-(void)refreshAVBEnabledState:(id)arg1 ;
-(void)sizeTableToFit:(id)arg1 ;
-(void)removeObserverForBox:(id)arg1 ;
-(void)updateExpansionState;
-(void)identifyTimerComplete:(id)arg1 ;
-(void)acquireDevice:(id)arg1 ;
-(void)identifyDevice:(id)arg1 ;
-(void)editDeviceName:(id)arg1 ;
-(void)openNetworkControlPanel:(id)arg1 ;
-(void)simulateRemoteIdentify:(id)arg1 ;
-(void)changeSortItem:(id)arg1 ;
-(void)updateFilter:(id)arg1 ;
-(void)getHelpAction:(id)arg1 ;
@end

