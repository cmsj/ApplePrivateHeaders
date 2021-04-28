/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSView.h>

@class NSBox, NSTextField, NSPopUpButton, NSObjectController, NSTabView, AMTokenField, AMPathPopUpButton, OSAScriptView, NSTextView, NSButton, NSTokenField, AMVariablesEditorDateFormatDelegate, AMVariablesEditorWindowController, NSColor, CIColor, NSArray;

@interface AMVariablesEditorView : NSView {

	NSBox* _nameBox;
	NSBox* _buttonBox;
	NSBox* _customDateFormatBox;
	NSBox* _customTimeFormatBox;
	NSTextField* nameField;
	NSPopUpButton* typePopUp;
	NSObjectController* _variableController;
	NSTabView* _tabView;
	AMTokenField* valueField;
	NSPopUpButton* _dateFormatPopUp;
	NSPopUpButton* _timeFormatPopUp;
	AMPathPopUpButton* _pathPopUp;
	OSAScriptView* _scriptView;
	NSPopUpButton* _shellScriptShell;
	NSTextView* _shellScriptView;
	NSButton* _doneButton;
	NSButton* _cancelButton;
	NSTextField* _dayOfWeekText;
	NSTextField* _dayOfMonthText;
	NSTextField* _monthText;
	NSTextField* _yearText;
	NSTokenField* _customDateFormat;
	NSTokenField* _dayOfWeek;
	NSTokenField* _dayOfMonth;
	NSTokenField* _month;
	NSTokenField* _year;
	NSTokenField* _customTimeFormat;
	NSTokenField* _hour;
	NSTokenField* _minute;
	NSTokenField* _second;
	NSTokenField* _ampm;
	NSTokenField* _timezone;
	NSTokenField* _milliseconds;
	AMVariablesEditorDateFormatDelegate* _dateFormatDelegate;
	AMVariablesEditorWindowController* _windowController;
	char _useCustomDateFormat;
	char _useCustomTimeFormat;
	char _didSwitchToCustomDateFormat;
	char _didSwitchToDefinedDateFormat;
	char _didSwitchToCustomTimeFormat;
	char _didSwitchToDefinedTimeFormat;
	NSColor* titleTextColor;
	NSColor* titlebarTopLineColor;
	NSColor* titlebarBottomLineColor;
	CIColor* titlebarTopGradientColor;
	CIColor* titlebarBottomGradientColor;
	NSColor* viewAreaTopLineColor;
	NSColor* viewAreaBottomLineColor;
	CIColor* viewAreaTopGradientColor;
	CIColor* viewAreaBottomGradientColor;
	CIColor* windowBorderColor;
	CGRect viewFrame;
	CGRect titlebarFrame;
	CGPathRef _windowClipPath;
	CGPathRef _borderClipPath;
	NSTextField* __nameLabelTextField;
	NSTextField* __valueLabelTextField;
	NSTextField* __pathLabelTextField;
	NSTextField* __formatDateLabelTextField;
	NSTextField* __formatTimeLabelTextField;
	NSTextField* __appleScriptLabelTextField;
	NSTextField* __shellScriptLabelTextField;
	NSArray* __crossTabViewConstraints;

}

@property (__weak) NSBox * _nameBox;                                                                           //@synthesize nameBox=_nameBox - In the implementation block
@property (__weak) NSBox * _buttonBox;                                                                         //@synthesize buttonBox=_buttonBox - In the implementation block
@property (__weak) NSBox * _customDateFormatBox;                                                               //@synthesize customDateFormatBox=_customDateFormatBox - In the implementation block
@property (__weak) NSBox * _customTimeFormatBox;                                                               //@synthesize customTimeFormatBox=_customTimeFormatBox - In the implementation block
@property (__weak) NSTextField * nameField; 
@property (__weak) NSPopUpButton * typePopUp; 
@property (__weak) NSObjectController * _variableController;                                                   //@synthesize variableController=_variableController - In the implementation block
@property (__weak) NSTabView * _tabView;                                                                       //@synthesize tabView=_tabView - In the implementation block
@property (__weak) AMTokenField * valueField; 
@property (__weak) NSPopUpButton * _dateFormatPopUp;                                                           //@synthesize dateFormatPopUp=_dateFormatPopUp - In the implementation block
@property (__weak) NSPopUpButton * _timeFormatPopUp;                                                           //@synthesize timeFormatPopUp=_timeFormatPopUp - In the implementation block
@property (__weak) AMPathPopUpButton * _pathPopUp;                                                             //@synthesize pathPopUp=_pathPopUp - In the implementation block
@property (__weak) OSAScriptView * _scriptView;                                                                //@synthesize scriptView=_scriptView - In the implementation block
@property (assign,nonatomic,__weak) NSPopUpButton * _shellScriptShell;                                         //@synthesize shellScriptShell=_shellScriptShell - In the implementation block
@property (__weak) NSTextView * _shellScriptView;                                                              //@synthesize shellScriptView=_shellScriptView - In the implementation block
@property (__weak) NSButton * _doneButton;                                                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (__weak) NSButton * _cancelButton;                                                                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (__weak) NSTextField * _dayOfWeekText;                                                               //@synthesize dayOfWeekText=_dayOfWeekText - In the implementation block
@property (__weak) NSTextField * _dayOfMonthText;                                                              //@synthesize dayOfMonthText=_dayOfMonthText - In the implementation block
@property (__weak) NSTextField * _monthText;                                                                   //@synthesize monthText=_monthText - In the implementation block
@property (__weak) NSTextField * _yearText;                                                                    //@synthesize yearText=_yearText - In the implementation block
@property (assign,nonatomic,__weak) NSTokenField * _customDateFormat;                                          //@synthesize customDateFormat=_customDateFormat - In the implementation block
@property (__weak) NSTokenField * _dayOfWeek;                                                                  //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (__weak) NSTokenField * _dayOfMonth;                                                                 //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (__weak) NSTokenField * _month;                                                                      //@synthesize month=_month - In the implementation block
@property (__weak) NSTokenField * _year;                                                                       //@synthesize year=_year - In the implementation block
@property (assign,nonatomic,__weak) NSTokenField * _customTimeFormat;                                          //@synthesize customTimeFormat=_customTimeFormat - In the implementation block
@property (__weak) NSTokenField * _hour;                                                                       //@synthesize hour=_hour - In the implementation block
@property (__weak) NSTokenField * _minute;                                                                     //@synthesize minute=_minute - In the implementation block
@property (__weak) NSTokenField * _second;                                                                     //@synthesize second=_second - In the implementation block
@property (__weak) NSTokenField * _ampm;                                                                       //@synthesize ampm=_ampm - In the implementation block
@property (__weak) NSTokenField * _timezone;                                                                   //@synthesize timezone=_timezone - In the implementation block
@property (__weak) NSTokenField * _milliseconds;                                                               //@synthesize milliseconds=_milliseconds - In the implementation block
@property (__weak) NSTextField * _nameLabelTextField;                                                          //@synthesize _nameLabelTextField=__nameLabelTextField - In the implementation block
@property (__weak) NSTextField * _valueLabelTextField;                                                         //@synthesize _valueLabelTextField=__valueLabelTextField - In the implementation block
@property (__weak) NSTextField * _pathLabelTextField;                                                          //@synthesize _pathLabelTextField=__pathLabelTextField - In the implementation block
@property (__weak) NSTextField * _formatDateLabelTextField;                                                    //@synthesize _formatDateLabelTextField=__formatDateLabelTextField - In the implementation block
@property (__weak) NSTextField * _formatTimeLabelTextField;                                                    //@synthesize _formatTimeLabelTextField=__formatTimeLabelTextField - In the implementation block
@property (__weak) NSTextField * _appleScriptLabelTextField;                                                   //@synthesize _appleScriptLabelTextField=__appleScriptLabelTextField - In the implementation block
@property (__weak) NSTextField * _shellScriptLabelTextField;                                                   //@synthesize _shellScriptLabelTextField=__shellScriptLabelTextField - In the implementation block
@property (retain) NSArray * _crossTabViewConstraints;                                                         //@synthesize _crossTabViewConstraints=__crossTabViewConstraints - In the implementation block
@property (assign) char didSwitchToCustomDateFormat;                                                           //@synthesize didSwitchToCustomDateFormat=_didSwitchToCustomDateFormat - In the implementation block
@property (assign) char didSwitchToCustomTimeFormat;                                                           //@synthesize didSwitchToCustomTimeFormat=_didSwitchToCustomTimeFormat - In the implementation block
@property (assign) char didSwitchToDefinedTimeFormat;                                                          //@synthesize didSwitchToDefinedTimeFormat=_didSwitchToDefinedTimeFormat - In the implementation block
@property (assign) char didSwitchToDefinedDateFormat;                                                          //@synthesize didSwitchToDefinedDateFormat=_didSwitchToDefinedDateFormat - In the implementation block
@property (assign) char useCustomDateFormat;                                                                   //@synthesize useCustomDateFormat=_useCustomDateFormat - In the implementation block
@property (retain) AMVariablesEditorDateFormatDelegate * dateFormatDelegate;                                   //@synthesize dateFormatDelegate=_dateFormatDelegate - In the implementation block
@property (retain) CGPathRef windowClipPath;                                                                   //@synthesize windowClipPath=_windowClipPath - In the implementation block
@property (retain) CGPathRef borderClipPath;                                                                   //@synthesize borderClipPath=_borderClipPath - In the implementation block
@property (retain) NSColor * titleTextColor; 
@property (retain) NSColor * titlebarTopLineColor; 
@property (retain) NSColor * titlebarBottomLineColor; 
@property (retain) CIColor * titlebarTopGradientColor; 
@property (retain) CIColor * titlebarBottomGradientColor; 
@property (retain) NSColor * viewAreaTopLineColor; 
@property (retain) NSColor * viewAreaBottomLineColor; 
@property (retain) CIColor * viewAreaTopGradientColor; 
@property (retain) CIColor * viewAreaBottomGradientColor; 
@property (retain) CIColor * windowBorderColor; 
@property (nonatomic,__weak,readonly) NSObjectController * variableController; 
@property (nonatomic,readonly) double customDateFormatBoxHeight; 
@property (nonatomic,readonly) double customTimeFormatBoxHeight; 
@property (nonatomic,__weak,readonly) id<AMVariableControllerProtocol> workflowVariableConroller; 
@property (assign,nonatomic,__weak) AMVariablesEditorWindowController * windowController;                      //@synthesize windowController=_windowController - In the implementation block
@property (assign,nonatomic) char useCustomTimeFormat;                                                         //@synthesize useCustomTimeFormat=_useCustomTimeFormat - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setFrame:(CGRect)arg1 ;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(AMVariablesEditorWindowController *)windowController;
-(NSTokenField *)_second;
-(void)drawRect:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)setWindowController:(AMVariablesEditorWindowController *)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)ok:(id)arg1 ;
-(NSButton *)_doneButton;
-(NSButton *)_cancelButton;
-(NSTabView *)_tabView;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(long long)arg3 ;
-(void)updateControls;
-(NSTokenField *)_dayOfWeek;
-(NSTokenField *)_timezone;
-(NSColor *)titleTextColor;
-(void)setTitleTextColor:(NSColor *)arg1 ;
-(NSTokenField *)_dayOfMonth;
-(NSTokenField *)_month;
-(NSTokenField *)_year;
-(NSTokenField *)_hour;
-(NSTokenField *)_minute;
-(AMTokenField *)valueField;
-(NSObjectController *)variableController;
-(NSObjectController *)_variableController;
-(void)set_variableController:(NSObjectController *)arg1 ;
-(void)set_cancelButton:(NSButton *)arg1 ;
-(id<AMVariableControllerProtocol>)workflowVariableConroller;
-(void)setWindowClipPath:(CGPathRef)arg1 ;
-(void)setBorderClipPath:(CGPathRef)arg1 ;
-(void)setCustomDateFormatControlsAreHidden:(char)arg1 ;
-(void)setUseCustomDateFormat:(char)arg1 ;
-(void)setCustomTimeFormatControlsAreHidden:(char)arg1 ;
-(void)setUseCustomTimeFormat:(char)arg1 ;
-(NSBox *)_customDateFormatBox;
-(NSBox *)_customTimeFormatBox;
-(void)setupDateTimeControlTokenField:(id)arg1 ;
-(AMVariablesEditorDateFormatDelegate *)dateFormatDelegate;
-(NSTokenField *)_customDateFormat;
-(void)populateDateFormatPopup;
-(NSPopUpButton *)_dateFormatPopUp;
-(void)useDateFormat:(id)arg1 ;
-(void)useCustomDateFormat:(id)arg1 ;
-(char)useCustomDateFormat;
-(void)setDidSwitchToDefinedDateFormat:(char)arg1 ;
-(void)setDidSwitchToCustomDateFormat:(char)arg1 ;
-(NSTokenField *)_ampm;
-(NSTokenField *)_milliseconds;
-(NSTokenField *)_customTimeFormat;
-(void)populateTimeFormatPopup;
-(NSPopUpButton *)_timeFormatPopUp;
-(void)useTimeFormat:(id)arg1 ;
-(void)useCustomTimeFormat:(id)arg1 ;
-(char)useCustomTimeFormat;
-(void)setDidSwitchToDefinedTimeFormat:(char)arg1 ;
-(void)setDidSwitchToCustomTimeFormat:(char)arg1 ;
-(NSPopUpButton *)_shellScriptShell;
-(void)setupButton:(id)arg1 ;
-(void)setupDateControls;
-(void)setupTimeControls;
-(void)unSetupDateTimeControls;
-(void)setupShellScriptControls;
-(void)_reconfigureCrossTabViewConstraints;
-(void)setDateFormatDelegate:(AMVariablesEditorDateFormatDelegate *)arg1 ;
-(void)updateWindowClipPath;
-(void)setTitlebarTopLineColor:(NSColor *)arg1 ;
-(void)setTitlebarBottomLineColor:(NSColor *)arg1 ;
-(void)setTitlebarTopGradientColor:(CIColor *)arg1 ;
-(void)setTitlebarBottomGradientColor:(CIColor *)arg1 ;
-(void)setViewAreaTopLineColor:(NSColor *)arg1 ;
-(void)setViewAreaBottomLineColor:(NSColor *)arg1 ;
-(void)setViewAreaTopGradientColor:(CIColor *)arg1 ;
-(void)setViewAreaBottomGradientColor:(CIColor *)arg1 ;
-(void)setWindowBorderColor:(CIColor *)arg1 ;
-(NSTextView *)_shellScriptView;
-(NSArray *)_crossTabViewConstraints;
-(NSTextField *)_valueLabelTextField;
-(NSTextField *)_pathLabelTextField;
-(NSTextField *)_formatDateLabelTextField;
-(NSTextField *)_formatTimeLabelTextField;
-(NSTextField *)_appleScriptLabelTextField;
-(NSTextField *)_shellScriptLabelTextField;
-(NSTextField *)_nameLabelTextField;
-(AMPathPopUpButton *)_pathPopUp;
-(OSAScriptView *)_scriptView;
-(NSTextField *)nameField;
-(void)set_crossTabViewConstraints:(NSArray *)arg1 ;
-(CGPathRef)newTodoRoundedWindowPathForRect:(CGRect)arg1 ;
-(CGPathRef)borderClipPath;
-(CIColor *)windowBorderColor;
-(CGPathRef)windowClipPath;
-(NSColor *)viewAreaTopLineColor;
-(NSColor *)viewAreaBottomLineColor;
-(CIColor *)viewAreaTopGradientColor;
-(CIColor *)viewAreaBottomGradientColor;
-(NSColor *)titlebarTopLineColor;
-(NSColor *)titlebarBottomLineColor;
-(CIColor *)titlebarTopGradientColor;
-(CIColor *)titlebarBottomGradientColor;
-(double)customDateFormatBoxHeight;
-(double)customTimeFormatBoxHeight;
-(void)reLayout;
-(char)didSwitchToCustomDateFormat;
-(char)didSwitchToCustomTimeFormat;
-(char)didSwitchToDefinedTimeFormat;
-(char)didSwitchToDefinedDateFormat;
-(NSBox *)_nameBox;
-(void)set_nameBox:(NSBox *)arg1 ;
-(NSBox *)_buttonBox;
-(void)set_buttonBox:(NSBox *)arg1 ;
-(void)set_customDateFormatBox:(NSBox *)arg1 ;
-(void)set_customTimeFormatBox:(NSBox *)arg1 ;
-(void)setNameField:(NSTextField *)arg1 ;
-(NSPopUpButton *)typePopUp;
-(void)setTypePopUp:(NSPopUpButton *)arg1 ;
-(void)set_tabView:(NSTabView *)arg1 ;
-(void)setValueField:(AMTokenField *)arg1 ;
-(void)set_dateFormatPopUp:(NSPopUpButton *)arg1 ;
-(void)set_timeFormatPopUp:(NSPopUpButton *)arg1 ;
-(void)set_pathPopUp:(AMPathPopUpButton *)arg1 ;
-(void)set_scriptView:(OSAScriptView *)arg1 ;
-(void)set_shellScriptShell:(NSPopUpButton *)arg1 ;
-(void)set_shellScriptView:(NSTextView *)arg1 ;
-(void)set_doneButton:(NSButton *)arg1 ;
-(NSTextField *)_dayOfWeekText;
-(void)set_dayOfWeekText:(NSTextField *)arg1 ;
-(NSTextField *)_dayOfMonthText;
-(void)set_dayOfMonthText:(NSTextField *)arg1 ;
-(NSTextField *)_monthText;
-(void)set_monthText:(NSTextField *)arg1 ;
-(NSTextField *)_yearText;
-(void)set_yearText:(NSTextField *)arg1 ;
-(void)set_customDateFormat:(NSTokenField *)arg1 ;
-(void)set_dayOfWeek:(NSTokenField *)arg1 ;
-(void)set_dayOfMonth:(NSTokenField *)arg1 ;
-(void)set_month:(NSTokenField *)arg1 ;
-(void)set_year:(NSTokenField *)arg1 ;
-(void)set_hour:(NSTokenField *)arg1 ;
-(void)set_minute:(NSTokenField *)arg1 ;
-(void)set_second:(NSTokenField *)arg1 ;
-(void)set_ampm:(NSTokenField *)arg1 ;
-(void)set_timezone:(NSTokenField *)arg1 ;
-(void)set_milliseconds:(NSTokenField *)arg1 ;
-(void)set_customTimeFormat:(NSTokenField *)arg1 ;
-(void)set_nameLabelTextField:(NSTextField *)arg1 ;
-(void)set_valueLabelTextField:(NSTextField *)arg1 ;
-(void)set_pathLabelTextField:(NSTextField *)arg1 ;
-(void)set_formatDateLabelTextField:(NSTextField *)arg1 ;
-(void)set_formatTimeLabelTextField:(NSTextField *)arg1 ;
-(void)set_appleScriptLabelTextField:(NSTextField *)arg1 ;
-(void)set_shellScriptLabelTextField:(NSTextField *)arg1 ;
@end
