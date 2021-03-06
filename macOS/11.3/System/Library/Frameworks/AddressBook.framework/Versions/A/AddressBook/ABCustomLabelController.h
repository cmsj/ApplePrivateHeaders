/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABCardCollectionRowView;
@class NSPanel, NSTextField, NSButton, NSView;

@interface ABCustomLabelController : NSObject {

	NSPanel* mEditPanel;
	NSTextField* mLabelField;
	NSButton* mOkayButton;
	NSView*<ABCardCollectionRowView> mDatumView;

}
+(void)addCustomLabelToDatumView:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)commit:(id)arg1 ;
-(void)help:(id)arg1 ;
-(id)initWithDatumView:(id)arg1 ;
-(void)runLabelSheet;
@end

