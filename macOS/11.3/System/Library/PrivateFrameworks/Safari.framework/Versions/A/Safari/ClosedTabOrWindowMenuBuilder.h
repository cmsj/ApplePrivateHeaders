/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMenu, NSArray, NSMutableSet;

@interface ClosedTabOrWindowMenuBuilder : NSObject {

	NSMenu* _menu;
	NSArray* _closedTabOrWindowStates;
	NSMutableSet* _addedURLStringsToTopLevelMenu;
	id _menuActionTarget;
	long long _limit;
	long long _menuItemForTabPolicy;
	long long _menuItemForWindowPolicy;
	long long _menuItemForTabGroupPolicy;
	long long _tabRestoreDestination;
	unsigned long long _menuItemDeduplicationPolicy;

}

@property (assign,nonatomic) long long limit;                                             //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) long long menuItemForTabPolicy;                              //@synthesize menuItemForTabPolicy=_menuItemForTabPolicy - In the implementation block
@property (assign,nonatomic) long long menuItemForWindowPolicy;                           //@synthesize menuItemForWindowPolicy=_menuItemForWindowPolicy - In the implementation block
@property (assign,nonatomic) long long menuItemForTabGroupPolicy;                         //@synthesize menuItemForTabGroupPolicy=_menuItemForTabGroupPolicy - In the implementation block
@property (assign,nonatomic) long long tabRestoreDestination;                             //@synthesize tabRestoreDestination=_tabRestoreDestination - In the implementation block
@property (assign,nonatomic) unsigned long long menuItemDeduplicationPolicy;              //@synthesize menuItemDeduplicationPolicy=_menuItemDeduplicationPolicy - In the implementation block
+(unsigned long long)numberOfMenuItemsForStates:(id)arg1 withWindowItemPolicy:(long long)arg2 ;
-(id)init;
-(long long)limit;
-(void)setLimit:(long long)arg1 ;
-(id)initWithItems:(id)arg1 menuActionTarget:(id)arg2 ;
-(void)setMenuItemForTabPolicy:(long long)arg1 ;
-(void)setTabRestoreDestination:(long long)arg1 ;
-(void)setMenuItemForWindowPolicy:(long long)arg1 ;
-(void)setMenuItemForTabGroupPolicy:(long long)arg1 ;
-(void)setMenuItemDeduplicationPolicy:(unsigned long long)arg1 ;
-(id)buildClosedTabOrWindowMenu;
-(void)_resetMenu;
-(SEL)_selectorForTabReopenDestination;
-(char)_tabStateIsShowingNativeContent:(id)arg1 ;
-(id)_menuItemForTabItemPolicyShowNativeTabs:(id)arg1 ;
-(id)_menuItemForWindowItemPolicyCollapseWindowsIntoSubmenuWithSingleNonDisposableTab:(id)arg1 ;
-(id)_menuItemForWindowItemPolicyCollapseWindowsIntoSubmenuWithMultipleNonDisposableTabs:(id)arg1 ;
-(id)_firstNonDisposableTabStateInWindowState:(id)arg1 ;
-(id)_menuItemForReopenWindowState:(id)arg1 ;
-(id)_menuItemForTabItemPolicyHideNativeTabs:(id)arg1 ;
-(id)_menuItemForWindowItemPolicyExpandWindowsIntoIndentedTabsWithSingleNonDisposableTab:(id)arg1 ;
-(id)_menuItemsForWindowItemPolicyExpandWindowsIntoIndentedTabsWithMultipleNonDispoasbleTabs:(id)arg1 ;
-(id)_menuItemForTabGroupItemPolicyCollapseTabGroupsIntoSubmenuWithSingleNonDisposableTab:(id)arg1 ;
-(id)_menuItemForTabGroupItemPolicyCollapseTabGroupsIntoSubmenuWithMultipleNonDisposableTabs:(id)arg1 ;
-(id)_menuItemForReopenTabGroupState:(id)arg1 ;
-(id)_menuItemForTabGroupItemPolicyExpandTabGroupsIntoIndentedTabsWithSingleNonDisposableTab:(id)arg1 ;
-(id)_menuItemsForTabGroupItemPolicyExpandTabGroupsIntoIndentedTabsWithMultipleNonDisposableTabs:(id)arg1 ;
-(char)_shouldDeduplicateMenuItemForTopLevelMenuByURLString:(id)arg1 ;
-(id)_urlStringForMenuItem:(id)arg1 ;
-(void)_appendToMenuUsingTabPolicy:(id)arg1 ;
-(long long)_numberOfTopLevelMenuItemsToBeAddedForWindowState:(id)arg1 ;
-(void)_appendToMenuUsingWindowPolicy:(id)arg1 ;
-(long long)_numberOfTopLevelMenuItemsToBeAddedForTabGroupState:(id)arg1 ;
-(void)_appendToMenuUsingTabGroupPolicy:(id)arg1 ;
-(void)_addMenuItemToTopLevelMenu:(id)arg1 ;
-(id)_menuItemForWindowItemPolicyCollapseWindowsIntoSubmenu:(id)arg1 ;
-(id)_menuItemsForWindowItemPolicyExpandWindowsIntoTabs:(id)arg1 ;
-(id)_menuItemsForWindowItemPolicyExpandWindowsIntoIndentedTabs:(id)arg1 ;
-(id)_menuItemForTabGroupItemPolicyCollapseTabGroupsIntoSubmenu:(id)arg1 ;
-(id)_menuItemsForTabGroupItemPolicyExpandTabGroupsIntoTabs:(id)arg1 ;
-(id)_menuItemsForTabGroupItemPolicyExpandTabGroupsIntoIndentedTabs:(id)arg1 ;
-(char)_shouldDeduplicateMenuItemForTopLevelMenu:(id)arg1 ;
-(id)urlStringsInTopLevelMenu;
-(long long)menuItemForTabPolicy;
-(long long)menuItemForWindowPolicy;
-(long long)menuItemForTabGroupPolicy;
-(long long)tabRestoreDestination;
-(unsigned long long)menuItemDeduplicationPolicy;
@end

