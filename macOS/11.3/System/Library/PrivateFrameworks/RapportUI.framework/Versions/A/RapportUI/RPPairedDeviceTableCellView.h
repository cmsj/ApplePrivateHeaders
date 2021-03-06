/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/Versions/A/RapportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class NSImageView, NSTextField, NSButton;

@interface RPPairedDeviceTableCellView : NSTableCellView {

	NSImageView* _deviceImageView;
	NSTextField* _deviceNameTextField;
	NSTextField* _deviceStateTextField;
	NSButton* _doneButton;
	NSButton* _pairButton;
	NSButton* _removeButton;

}

@property (nonatomic,retain) NSImageView * deviceImageView;                   //@synthesize deviceImageView=_deviceImageView - In the implementation block
@property (nonatomic,retain) NSTextField * deviceNameTextField;               //@synthesize deviceNameTextField=_deviceNameTextField - In the implementation block
@property (nonatomic,retain) NSTextField * deviceStateTextField;              //@synthesize deviceStateTextField=_deviceStateTextField - In the implementation block
@property (nonatomic,retain) NSButton * doneButton;                           //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) NSButton * pairButton;                           //@synthesize pairButton=_pairButton - In the implementation block
@property (nonatomic,retain) NSButton * removeButton;                         //@synthesize removeButton=_removeButton - In the implementation block
-(NSButton *)doneButton;
-(void)setDoneButton:(NSButton *)arg1 ;
-(void)setPairButton:(NSButton *)arg1 ;
-(NSButton *)pairButton;
-(NSButton *)removeButton;
-(void)setRemoveButton:(NSButton *)arg1 ;
-(NSImageView *)deviceImageView;
-(void)setDeviceImageView:(NSImageView *)arg1 ;
-(NSTextField *)deviceNameTextField;
-(void)setDeviceNameTextField:(NSTextField *)arg1 ;
-(NSTextField *)deviceStateTextField;
-(void)setDeviceStateTextField:(NSTextField *)arg1 ;
@end

