/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>
#import <libobjc.A.dylib/NSTokenFieldDelegate.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@protocol OS_dispatch_queue, CNKeyDescriptor;
@class SSContactsTokenField, IDSBatchIDQueryController, NSArray, NSMutableDictionary, SSContact, NSString, NSWindow, NSTableView, NSScrollView, NSSet, NSObject, CNContactStore;

@interface SSContactsTokenFieldDelegate : NSObject <NSTextFieldDelegate, NSTokenFieldDelegate, NSTableViewDelegate, NSTableViewDataSource, IDSBatchIDQueryControllerDelegate> {

	int _selectedIDSIndex;
	SSContactsTokenField* _tokenField;
	IDSBatchIDQueryController* _idQueryController;
	NSArray* _matchingContacts;
	NSMutableDictionary* _availabilityByID;
	SSContact* _selectedContact;
	NSString* _previousPartialString;
	NSWindow* _completionWindow;
	NSTableView* _completionTableView;
	NSScrollView* _completionTableScrollView;
	NSSet* _recentItems;
	NSObject*<OS_dispatch_queue> _completionQueue;
	CNContactStore* _cnStore;
	id<CNKeyDescriptor> _listOfKeysNeededToGetFullName;

}

@property (retain) CNContactStore * cnStore;                                       //@synthesize cnStore=_cnStore - In the implementation block
@property (retain) id<CNKeyDescriptor> listOfKeysNeededToGetFullName;              //@synthesize listOfKeysNeededToGetFullName=_listOfKeysNeededToGetFullName - In the implementation block
@property (assign) SSContactsTokenField * tokenField;                              //@synthesize tokenField=_tokenField - In the implementation block
@property (retain) IDSBatchIDQueryController * idQueryController;                  //@synthesize idQueryController=_idQueryController - In the implementation block
@property (copy) NSArray * matchingContacts;                                       //@synthesize matchingContacts=_matchingContacts - In the implementation block
@property (retain) NSMutableDictionary * availabilityByID;                         //@synthesize availabilityByID=_availabilityByID - In the implementation block
@property (retain) SSContact * selectedContact;                                    //@synthesize selectedContact=_selectedContact - In the implementation block
@property (assign) int selectedIDSIndex;                                           //@synthesize selectedIDSIndex=_selectedIDSIndex - In the implementation block
@property (copy) NSString * previousPartialString;                                 //@synthesize previousPartialString=_previousPartialString - In the implementation block
@property (retain) NSWindow * completionWindow;                                    //@synthesize completionWindow=_completionWindow - In the implementation block
@property (retain) NSTableView * completionTableView;                              //@synthesize completionTableView=_completionTableView - In the implementation block
@property (retain) NSScrollView * completionTableScrollView;                       //@synthesize completionTableScrollView=_completionTableScrollView - In the implementation block
@property (copy) NSSet * recentItems;                                              //@synthesize recentItems=_recentItems - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> completionQueue;                   //@synthesize completionQueue=_completionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validIDSIDColor;
-(void)dealloc;
-(id)init;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)controlTextDidBeginEditing:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(NSWindow *)completionWindow;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(void)idStatusUpdatedForDestinations:(id)arg1 ;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(NSTableView *)completionTableView;
-(void)_closeCompletionWindow;
-(NSArray *)matchingContacts;
-(SSContactsTokenField *)tokenField;
-(void)setTokenField:(SSContactsTokenField *)arg1 ;
-(NSSet *)recentItems;
-(CNContactStore *)cnStore;
-(void)setCnStore:(CNContactStore *)arg1 ;
-(void)setAvailabilityByID:(NSMutableDictionary *)arg1 ;
-(void)setIdQueryController:(IDSBatchIDQueryController *)arg1 ;
-(NSMutableDictionary *)availabilityByID;
-(IDSBatchIDQueryController *)idQueryController;
-(void)dismissCompletionWindow:(id)arg1 ;
-(void)setListOfKeysNeededToGetFullName:(id<CNKeyDescriptor>)arg1 ;
-(void)setMatchingContacts:(NSArray *)arg1 ;
-(void)setSelectedContact:(SSContact *)arg1 ;
-(void)setPreviousPartialString:(NSString *)arg1 ;
-(void)setCompletionWindow:(NSWindow *)arg1 ;
-(void)setCompletionTableView:(NSTableView *)arg1 ;
-(void)setCompletionTableScrollView:(NSScrollView *)arg1 ;
-(void)setRecentItems:(NSSet *)arg1 ;
-(id)recentItemWithPortForURL:(id)arg1 ;
-(NSString *)previousPartialString;
-(void)controlTextCompletionEditingString:(id)arg1 ;
-(id)nameAndEmailPredicatesForSubstring:(id)arg1 ;
-(id<CNKeyDescriptor>)listOfKeysNeededToGetFullName;
-(void)_presentCompletionWindow;
-(id)_completionTableView;
-(void)_selectTableViewRow:(unsigned long long)arg1 ;
-(char)_textViewContainsToken:(id)arg1 ;
-(void)_tokenizeAndSelect;
-(SSContact *)selectedContact;
-(id)_displayStringForContact:(id)arg1 ;
-(id)_bestMatchingIdentifierForContact:(id)arg1 ;
-(long long)_string:(id)arg1 indexAfterPrefixIgnoringCase:(id)arg2 ;
-(int)selectedIDSIndex;
-(void)setSelectedIDSIndex:(int)arg1 ;
-(NSScrollView *)completionTableScrollView;
@end

