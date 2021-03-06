/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABCardCollectionRowView.h>

@class NSPopUpButton, NSTextField;

@interface ABCardCollectionMessagingRowView : ABCardCollectionRowView {

	NSPopUpButton* _messagingServiceChooserPopup;
	NSTextField* _messagingServiceLabel;

}

@property (retain) NSTextField * messagingServiceLabel;                       //@synthesize messagingServiceLabel=_messagingServiceLabel - In the implementation block
@property (retain) NSPopUpButton * messagingServiceChooserPopup;              //@synthesize messagingServiceChooserPopup=_messagingServiceChooserPopup - In the implementation block
-(void)setService:(id)arg1 ;
-(NSPopUpButton *)messagingServiceChooserPopup;
-(NSTextField *)messagingServiceLabel;
-(void)updateTextColors;
-(void)updateValueFontWithFont:(id)arg1 ;
-(void)setServiceMenu:(id)arg1 ;
-(void)setServicePopUpEnabled:(char)arg1 ;
-(void)setMessagingServiceLabel:(NSTextField *)arg1 ;
-(void)setMessagingServiceChooserPopup:(NSPopUpButton *)arg1 ;
@end

