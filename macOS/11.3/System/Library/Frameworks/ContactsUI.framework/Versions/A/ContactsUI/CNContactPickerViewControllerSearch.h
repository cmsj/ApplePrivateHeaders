/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CNContactListController, ABPersonListSearchController;


@protocol CNContactPickerViewControllerSearch <NSObject>
@property (readonly) CNContactListController * contactListController; 
@property (readonly) ABPersonListSearchController * searchController; 
@property (getter=isSearchFieldVisible) char searchFieldVisible; 
@required
-(ABPersonListSearchController *)searchController;
-(void)setAccounts:(id)arg1;
-(void)setSearchFieldVisible:(char)arg1;
-(void)performInitialSelection;
-(CNContactListController *)contactListController;
-(char)isSearchFieldVisible;
-(void)setPickerScope:(id)arg1;

@end

