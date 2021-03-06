/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MultipleTabClosingContext.h>

@class NSString, BrowserTabViewItem;

@interface CloseOtherTabsContext : NSObject <MultipleTabClosingContext> {

	BrowserTabViewItem* _tab;

}

@property (nonatomic,readonly) BrowserTabViewItem * tab;                                                          //@synthesize tab=_tab - In the implementation block
@property (nonatomic,copy,readonly) NSString * undoActionName; 
@property (nonatomic,readonly) long long pageUnloadReason; 
@property (nonatomic,copy,readonly) NSString * unsavedEditedTextConfirmationPromptTitle; 
@property (nonatomic,copy,readonly) NSString * unsavedEditedTextConfirmationPromptActionButtonLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)undoActionName;
-(BrowserTabViewItem *)tab;
-(id)initWithTab:(id)arg1 ;
-(id)tabsToCloseInBrowserWindowController:(id)arg1 ;
-(id)tabToSelectAfterClosingTabsInBrowserWindowController:(id)arg1 ;
-(NSString *)unsavedEditedTextConfirmationPromptTitle;
-(id)unsavedEditedTextConfirmationPromptDescriptionWithFirstEditedTabName:(id)arg1 editedTabCount:(unsigned long long)arg2 ;
-(NSString *)unsavedEditedTextConfirmationPromptActionButtonLabel;
-(long long)pageUnloadReason;
@end

