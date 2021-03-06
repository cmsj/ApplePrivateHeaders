/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABGroupSelectHelper.h>

@class ABGroupSearchingContext, ABPersonListSearchController, CNContactPickerView, NSString;

@interface CNGroupListSearchingSelectHelper : NSObject <ABGroupSelectHelper> {

	ABGroupSearchingContext* _searchingContext;
	ABPersonListSearchController* _searchController;
	CNContactPickerView* _pickerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performSelect;
-(id)initWithSearchingContext:(id)arg1 searchController:(id)arg2 pickerView:(id)arg3 ;
@end

