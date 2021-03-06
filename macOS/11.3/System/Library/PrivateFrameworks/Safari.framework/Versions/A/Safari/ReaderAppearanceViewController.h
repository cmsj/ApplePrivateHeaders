/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/ReaderFontTableCellViewDelegate.h>

@protocol ReaderAppearanceViewControllerDelegate;
@class WBSReaderFont, ReaderThemeButton, WBSReaderFontDownloadManager, NSButton, NSStackView, NSView, NSScrollView, NSTableView, NSLayoutConstraint, NSString;

@interface ReaderAppearanceViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, ReaderFontTableCellViewDelegate> {

	WBSReaderFont* _selectedFont;
	ReaderThemeButton* _whiteButton;
	ReaderThemeButton* _sepiaButton;
	ReaderThemeButton* _grayButton;
	ReaderThemeButton* _nightButton;
	char _popoverVisible;
	id<ReaderAppearanceViewControllerDelegate> _delegate;
	WBSReaderFontDownloadManager* _fontDownloadManager;
	NSButton* _decreaseTextSizeButton;
	NSButton* _increaseTextSizeButton;
	NSStackView* _themeButtonsStackView;
	NSView* _fontTableSeparator;
	NSScrollView* _fontTableScrollView;
	NSTableView* _fontTableView;
	NSLayoutConstraint* _tableViewWidthConstraint;
	NSLayoutConstraint* _tableViewHeightConstraint;
	NSLayoutConstraint* _tableViewTopConstraint;
	NSLayoutConstraint* _tableViewBottomConstraint;

}

@property (__weak) NSButton * decreaseTextSizeButton;                                                 //@synthesize decreaseTextSizeButton=_decreaseTextSizeButton - In the implementation block
@property (__weak) NSButton * increaseTextSizeButton;                                                 //@synthesize increaseTextSizeButton=_increaseTextSizeButton - In the implementation block
@property (__weak) NSStackView * themeButtonsStackView;                                               //@synthesize themeButtonsStackView=_themeButtonsStackView - In the implementation block
@property (__weak) NSView * fontTableSeparator;                                                       //@synthesize fontTableSeparator=_fontTableSeparator - In the implementation block
@property (__weak) NSScrollView * fontTableScrollView;                                                //@synthesize fontTableScrollView=_fontTableScrollView - In the implementation block
@property (__weak) NSTableView * fontTableView;                                                       //@synthesize fontTableView=_fontTableView - In the implementation block
@property (__weak) NSLayoutConstraint * tableViewWidthConstraint;                                     //@synthesize tableViewWidthConstraint=_tableViewWidthConstraint - In the implementation block
@property (__weak) NSLayoutConstraint * tableViewHeightConstraint;                                    //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (__weak) NSLayoutConstraint * tableViewTopConstraint;                                       //@synthesize tableViewTopConstraint=_tableViewTopConstraint - In the implementation block
@property (__weak) NSLayoutConstraint * tableViewBottomConstraint;                                    //@synthesize tableViewBottomConstraint=_tableViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<ReaderAppearanceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPopoverVisible,nonatomic,readonly) char popoverVisible;                           //@synthesize popoverVisible=_popoverVisible - In the implementation block
@property (nonatomic,retain) WBSReaderFontDownloadManager * fontDownloadManager;                      //@synthesize fontDownloadManager=_fontDownloadManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<ReaderAppearanceViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ReaderAppearanceViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)viewDidLoad;
-(char)isPopoverVisible;
-(id)_fonts;
-(void)_fontDownloadDidFinish:(id)arg1 ;
-(void)_fontDownloadDidBegin:(id)arg1 ;
-(void)_fontDownloadDidFail:(id)arg1 ;
-(void)_fontDownloadProgressDidChange:(id)arg1 ;
-(void)updateTextSizeButtons;
-(void)_setUpThemeButtons;
-(char)_shouldShowFontTable;
-(void)_resizeFontsTable;
-(void)_removeFontTableAndRelatedViews;
-(void)_updateWidthConstraintToFitFontDisplayNames;
-(void)_switchToFont:(id)arg1 shouldInformDelegate:(char)arg2 ;
-(void)clickedOnThemeButton:(id)arg1 ;
-(id)_themeButtonForTheme:(long long)arg1 ;
-(long long)_themeForButton:(id)arg1 ;
-(void)_clickedOnThemeButtonWithTheme:(long long)arg1 ;
-(unsigned long long)_previousSelectableRowIndex;
-(unsigned long long)_nextSelectableRowIndex;
-(unsigned long long)_checkedRowIndex;
-(char)_canSelectFont:(id)arg1 ;
-(id)_displayFontForFont:(id)arg1 ;
-(id)_fontTableCheckImage;
-(id)_fontForFontDownloadNotification:(id)arg1 ;
-(id)_tableCellViewForFont:(id)arg1 ;
-(void)didPressDownloadButtonForReaderFontTableCellView:(id)arg1 ;
-(void)decreaseTextSize:(id)arg1 ;
-(void)increaseTextSize:(id)arg1 ;
-(WBSReaderFontDownloadManager *)fontDownloadManager;
-(void)setFontDownloadManager:(WBSReaderFontDownloadManager *)arg1 ;
-(NSButton *)decreaseTextSizeButton;
-(void)setDecreaseTextSizeButton:(NSButton *)arg1 ;
-(NSButton *)increaseTextSizeButton;
-(void)setIncreaseTextSizeButton:(NSButton *)arg1 ;
-(NSStackView *)themeButtonsStackView;
-(void)setThemeButtonsStackView:(NSStackView *)arg1 ;
-(NSView *)fontTableSeparator;
-(void)setFontTableSeparator:(NSView *)arg1 ;
-(NSScrollView *)fontTableScrollView;
-(void)setFontTableScrollView:(NSScrollView *)arg1 ;
-(NSTableView *)fontTableView;
-(void)setFontTableView:(NSTableView *)arg1 ;
-(NSLayoutConstraint *)tableViewWidthConstraint;
-(void)setTableViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)tableViewTopConstraint;
-(void)setTableViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)tableViewBottomConstraint;
-(void)setTableViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

