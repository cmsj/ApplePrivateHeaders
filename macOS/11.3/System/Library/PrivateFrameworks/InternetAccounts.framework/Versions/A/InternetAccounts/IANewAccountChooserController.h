/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IANewAccountChooserControllerDelegateProtocol;
@class NSMutableArray, NSMutableDictionary, NSArray, NSString, IANewAccountChooserRadioCollection, NSView, NSTableView, NSTableRowView;

@interface IANewAccountChooserController : NSObject {

	NSMutableArray* _items;
	NSMutableDictionary* _visiblePlugins;
	NSArray* _services;
	char _showOther;
	char _variableHeight;
	NSString* _otherRowLabel;
	unsigned long long _style;
	IANewAccountChooserRadioCollection* _radioCollection;
	NSArray* _topLevelObjects;
	NSView* _tableStyleView;
	NSTableView* _table;
	NSTableRowView* _otherTableRowView;
	char _showHelp;
	id<IANewAccountChooserControllerDelegateProtocol> _delegate;

}

@property (retain) NSString * otherRowLabel;                                                //@synthesize otherRowLabel=_otherRowLabel - In the implementation block
@property (readonly) NSView * view; 
@property (readonly) NSTableView * table;                                                   //@synthesize table=_table - In the implementation block
@property (readonly) IANewAccountChooserRadioCollection * radioCollection;                  //@synthesize radioCollection=_radioCollection - In the implementation block
@property (__weak) id<IANewAccountChooserControllerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char showHelp;                                                           //@synthesize showHelp=_showHelp - In the implementation block
@property (assign) char showOther;                                                          //@synthesize showOther=_showOther - In the implementation block
@property (assign) char variableHeight;                                                     //@synthesize variableHeight=_variableHeight - In the implementation block
@property (assign) unsigned long long style;                                                //@synthesize style=_style - In the implementation block
-(id<IANewAccountChooserControllerDelegateProtocol>)delegate;
-(void)setDelegate:(id<IANewAccountChooserControllerDelegateProtocol>)arg1 ;
-(unsigned long long)style;
-(NSView *)view;
-(void)setStyle:(unsigned long long)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(NSTableView *)table;
-(char)showHelp;
-(void)deselectAll;
-(id)initWithServices:(id)arg1 ;
-(void)setShowHelp:(char)arg1 ;
-(void)setShowOther:(char)arg1 ;
-(NSString *)otherRowLabel;
-(void)setOtherRowLabel:(NSString *)arg1 ;
-(void)setVariableHeight:(char)arg1 ;
-(id)selectedPluginID;
-(char)_shouldShowPlugin:(id)arg1 ;
-(id)_rowItemWithPlugin:(id)arg1 ;
-(char)showOther;
-(char)variableHeight;
-(void)_prepItems;
-(id)_buttonForCellView:(id)arg1 ;
-(void)buttonPress:(id)arg1 ;
-(IANewAccountChooserRadioCollection *)radioCollection;
@end
