/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityInterface/SecurityInterface-Structs.h>
@class NSMatrix, SFPasswordAsstModel, SFEntropyBarView, NSTextField, SFPasswordErrorSource, NSView, NSButton, NSProgressIndicator, NSSlider, NSPopUpButton, NSComboBox, NSTableView, NSBox;

@interface SFPasswordAsstController : NSObject {

	NSMatrix* _errorTable;
	SFPasswordAsstModel* _model;
	SFEntropyBarView* _entropyBar;
	NSTextField* _newPassword;
	NSTextField* _verifyPassword;
	NSTextField* _originalPassword;
	NSTextField* _hint;
	SFPasswordErrorSource* _errorSource;
	NSView* _view;
	NSButton* suggestButton;
	NSProgressIndicator* progressIndicator;
	NSSlider* lengthSlider;
	NSPopUpButton* algorithmPopup;
	NSTextField* lengthDisplayField;
	NSComboBox* choicesCombo;
	NSButton* suggestDiscloseButton;
	NSTableView* _tableView;
	int desiredLength;
	int previousDesiredLength;
	int previousAlgorithmIndex;
	CGRect originalWindowFrame;
	char _closingAssistant;
	NSBox* _box;

}
-(void)ourViewWasDisclosed:(id)arg1 ;
-(void)removeObserverTextField:(id)arg1 ;
-(void)addObserverTextField:(id)arg1 ;
-(void)setPassphraseInfoStrings:(int)arg1 :(int)arg2 :(double)arg3 ;
-(int)desiredAlgorithm;
-(void)updatePasswordField:(id)arg1 ;
-(void)setPasswordFields:(id)arg1 verify:(id)arg2 original:(id)arg3 ;
-(id)newPasswordField;
-(id)entryBar;
-(void)clearVerifyField;
-(void)clearProgressBarToolTip;
-(void)suggestClicked:(id)arg1 ;
-(void)suggestDiscloseTextClicked:(id)arg1 ;
-(void)algorithmPopupChanged:(id)arg1 ;
-(void)choicesComboChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)view;
-(void)clear;
-(void)awakeFromNib;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)closing;
-(id)model;
-(id)passphrase;
-(void)setNewPasswordField:(id)arg1 ;
-(void)setVerifyPasswordField:(id)arg1 ;
-(void)setOriginalPasswordField:(id)arg1 ;
-(double)refresh:(id)arg1 ;
-(double)entropy;
-(void)refreshSuggestions;
-(void)updateProgressBar:(double)arg1 ;
-(void)sliderChanged:(id)arg1 ;
-(id)initWithNib:(id)arg1 ;
@end
