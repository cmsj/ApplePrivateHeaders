/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSColorPickerMatrixViewDelegate.h>

@class NSColorPickerMatrixView, NSButton, NSPopover, NSString;

@interface NSColorPopoverController : NSViewController <NSColorPickerMatrixViewDelegate> {

	NSColorPickerMatrixView* _topBarMatrixView;
	NSColorPickerMatrixView* _colorMatrixView;
	NSButton* _colorPanelButton;
	NSPopover* _popover;
	id _delegate;

}

@property (assign) NSColorPickerMatrixView * topBarMatrixView;              //@synthesize topBarMatrixView=_topBarMatrixView - In the implementation block
@property (assign) NSColorPickerMatrixView * colorMatrixView; 
@property (assign) NSButton * colorPanelButton; 
@property (assign) NSPopover * popover;                                     //@synthesize popover=_popover - In the implementation block
@property (assign) id delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultTopBarColorList;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)loadView;
-(void)_showColorPanel:(id)arg1 ;
-(void)_loadViewIfNecessary;
-(void)matrixColorPicker:(id)arg1 selectedColor:(id)arg2 ;
-(id)matrixColorPicker:(id)arg1 highlightColorForColor:(id)arg2 ;
-(NSColorPickerMatrixView *)topBarMatrixView;
-(void)setTopBarMatrixView:(NSColorPickerMatrixView *)arg1 ;
-(NSColorPickerMatrixView *)colorMatrixView;
-(void)setColorMatrixView:(NSColorPickerMatrixView *)arg1 ;
-(NSButton *)colorPanelButton;
-(void)setColorPanelButton:(NSButton *)arg1 ;
-(NSPopover *)popover;
-(void)setPopover:(NSPopover *)arg1 ;
@end
