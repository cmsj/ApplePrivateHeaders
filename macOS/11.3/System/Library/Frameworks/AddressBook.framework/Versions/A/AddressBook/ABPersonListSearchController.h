/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSTextFieldDelegate.h>
#import <libobjc.A.dylib/NSSearchFieldDelegate.h>

@protocol ABPersonListControllerProtocol, ABPersonListHeadlining, ABPersonSearchControllerDelegate;
@class NSSearchField, NSString, ABPersonSearchConfiguration, ABAddressBook, ABPersonListSearchControllerUsageStatisticsHelper, NSArray;

@interface ABPersonListSearchController : NSObject <NSTextFieldDelegate, NSSearchFieldDelegate> {

	id<ABPersonListControllerProtocol> _personListController;
	NSSearchField* _searchField;
	NSString* _previousSearchString;
	ABPersonSearchConfiguration* _currentConfiguration;
	id<ABPersonListHeadlining> _browsingHeadliner;
	ABAddressBook* _browsingAddressBook;
	id<ABPersonSearchControllerDelegate> _delegate;
	ABPersonListSearchControllerUsageStatisticsHelper* _usageStatisticsHelper;
	unsigned long long _countOfLocalSearchesPerformed;
	unsigned long long _countOfServerSearchesPerformed;
	char _shouldSelectBestEntry;

}

@property (assign) id<ABPersonListControllerProtocol> personListController;                                //@synthesize personListController=_personListController - In the implementation block
@property (assign,nonatomic) NSSearchField * searchField;                                                  //@synthesize searchField=_searchField - In the implementation block
@property (assign) id<ABPersonSearchControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (retain) ABAddressBook * browsingAddressBook;                                                    //@synthesize browsingAddressBook=_browsingAddressBook - In the implementation block
@property (retain) id<ABPersonListHeadlining> browsingHeadliner;                                           //@synthesize browsingHeadliner=_browsingHeadliner - In the implementation block
@property (copy) NSString * searchString; 
@property (copy) NSString * previousSearchString;                                                          //@synthesize previousSearchString=_previousSearchString - In the implementation block
@property (copy,readonly) NSArray * searchTerms; 
@property (assign,nonatomic) char shouldSelectBestEntry;                                                   //@synthesize shouldSelectBestEntry=_shouldSelectBestEntry - In the implementation block
@property (readonly) unsigned long long countOfLocalSearchesPerformed; 
@property (readonly) unsigned long long countOfServerSearchesPerformed; 
@property (retain) ABPersonListSearchControllerUsageStatisticsHelper * usageStatisticsHelper;              //@synthesize usageStatisticsHelper=_usageStatisticsHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<ABPersonSearchControllerDelegate>)delegate;
-(void)setDelegate:(id<ABPersonSearchControllerDelegate>)arg1 ;
-(void)selectNext:(id)arg1 ;
-(void)selectPrevious:(id)arg1 ;
-(void)controlTextDidBeginEditing:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(NSSearchField *)searchField;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(void)_searchFieldAction:(id)arg1 ;
-(NSArray *)searchTerms;
-(void)setSearchConfiguration:(id)arg1 ;
-(void)setShouldSelectBestEntry:(char)arg1 ;
-(unsigned long long)countOfLocalSearchesPerformed;
-(unsigned long long)countOfServerSearchesPerformed;
-(void)resetCountsOfSearchesPerformed;
-(void)searchForString:(id)arg1 ;
-(id<ABPersonListControllerProtocol>)personListController;
-(void)setUsageStatisticsHelper:(ABPersonListSearchControllerUsageStatisticsHelper *)arg1 ;
-(void)setBrowsingAddressBook:(ABAddressBook *)arg1 ;
-(void)setPersonListController:(id<ABPersonListControllerProtocol>)arg1 ;
-(id<ABPersonListHeadlining>)browsingHeadliner;
-(void)setBrowsingHeadliner:(id<ABPersonListHeadlining>)arg1 ;
-(NSString *)previousSearchString;
-(void)setPreviousSearchString:(NSString *)arg1 ;
-(ABAddressBook *)browsingAddressBook;
-(char)shouldSelectBestEntry;
-(void)selectBestRecordMatchingQuery:(id)arg1 ;
-(void)searchConfigurationPerformedLocalSearch;
-(ABPersonListSearchControllerUsageStatisticsHelper *)usageStatisticsHelper;
-(void)_implicitlyAdvanceTheSelection:(id)arg1 ;
-(void)setPlaceholderStringForAllContacts;
-(void)setPlaceholderStringWithGroupName:(id)arg1 ;
-(void)focusSearchField:(id)arg1 ;
-(void)searchConfigurationPerformedServerSearch;
-(void)setSearchGroupName:(id)arg1 isAllContacts:(char)arg2 ;
@end

