/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentAuthorizationChildViewController.h>
#import <libobjc.A.dylib/PKAutocompleteTextFieldDelegate.h>
#import <libobjc.A.dylib/PKContactLabelMenuControllerDelegate.h>

@protocol PKPostalAddressEditorViewControllerDelegate, Errorable;
@class CNContact, NSString, NSArray, NSSet, NSImageView, NSTextField, NSStackView, PKContactTextField, NSPopUpButton, NSComboBox, PKContactPopUpButton, NSControl, NSButton, PKContactLabelMenuController, PKContactFormatValidator, NSDictionary, CNPostalAddressFormattingSpecification;

@interface PKPostalAddressEditorViewController : PKPaymentAuthorizationChildViewController <PKAutocompleteTextFieldDelegate, PKContactLabelMenuControllerDelegate> {

	CNContact* _contact;
	long long _type;
	unsigned long long _shippingType;
	NSString* _region;
	NSArray* _errors;
	id<PKPostalAddressEditorViewControllerDelegate> _delegate;
	NSSet* _requiredFields;
	NSImageView* _paymentLogoImageView;
	NSTextField* _typeTextField;
	NSTextField* _promptTextField;
	NSStackView* _controlsAndNamesStackView;
	NSStackView* _namesStackView;
	NSStackView* _phoneticNamesStackView;
	PKContactTextField* _givenNameTextField;
	PKContactTextField* _familyNameTextField;
	PKContactTextField* _phoneticGivenNameTextField;
	PKContactTextField* _phoneticFamilyNameTextField;
	NSPopUpButton* _labelPopUpButton;
	NSComboBox* _labelComboBox;
	NSStackView* _postalAddressFieldsStackView;
	NSStackView* _streetsStackView;
	PKContactTextField* _street1TextField;
	PKContactTextField* _street2TextField;
	PKContactPopUpButton* _countryPopUpButton;
	NSControl*<Errorable> _cityField;
	NSControl*<Errorable> _districtField;
	NSControl*<Errorable> _stateField;
	NSControl*<Errorable> _postalCodeField;
	NSArray* _allInputFields;
	NSButton* _cancelButton;
	NSButton* _saveButton;
	PKContactLabelMenuController* _labelMenuController;
	PKContactFormatValidator* _contactFormatValidator;
	NSDictionary* _fieldViewDictionary;
	CNPostalAddressFormattingSpecification* _formattingSpecification;

}

@property (nonatomic,retain) NSImageView * paymentLogoImageView;                                            //@synthesize paymentLogoImageView=_paymentLogoImageView - In the implementation block
@property (nonatomic,retain) NSTextField * typeTextField;                                                   //@synthesize typeTextField=_typeTextField - In the implementation block
@property (nonatomic,retain) NSTextField * promptTextField;                                                 //@synthesize promptTextField=_promptTextField - In the implementation block
@property (nonatomic,retain) NSStackView * controlsAndNamesStackView;                                       //@synthesize controlsAndNamesStackView=_controlsAndNamesStackView - In the implementation block
@property (nonatomic,retain) NSStackView * namesStackView;                                                  //@synthesize namesStackView=_namesStackView - In the implementation block
@property (nonatomic,retain) NSStackView * phoneticNamesStackView;                                          //@synthesize phoneticNamesStackView=_phoneticNamesStackView - In the implementation block
@property (nonatomic,retain) PKContactTextField * givenNameTextField;                                       //@synthesize givenNameTextField=_givenNameTextField - In the implementation block
@property (nonatomic,retain) PKContactTextField * familyNameTextField;                                      //@synthesize familyNameTextField=_familyNameTextField - In the implementation block
@property (nonatomic,retain) PKContactTextField * phoneticGivenNameTextField;                               //@synthesize phoneticGivenNameTextField=_phoneticGivenNameTextField - In the implementation block
@property (nonatomic,retain) PKContactTextField * phoneticFamilyNameTextField;                              //@synthesize phoneticFamilyNameTextField=_phoneticFamilyNameTextField - In the implementation block
@property (nonatomic,retain) NSPopUpButton * labelPopUpButton;                                              //@synthesize labelPopUpButton=_labelPopUpButton - In the implementation block
@property (nonatomic,retain) NSComboBox * labelComboBox;                                                    //@synthesize labelComboBox=_labelComboBox - In the implementation block
@property (nonatomic,retain) NSStackView * postalAddressFieldsStackView;                                    //@synthesize postalAddressFieldsStackView=_postalAddressFieldsStackView - In the implementation block
@property (nonatomic,retain) NSStackView * streetsStackView;                                                //@synthesize streetsStackView=_streetsStackView - In the implementation block
@property (nonatomic,retain) PKContactTextField * street1TextField;                                         //@synthesize street1TextField=_street1TextField - In the implementation block
@property (nonatomic,retain) PKContactTextField * street2TextField;                                         //@synthesize street2TextField=_street2TextField - In the implementation block
@property (nonatomic,retain) PKContactPopUpButton * countryPopUpButton;                                     //@synthesize countryPopUpButton=_countryPopUpButton - In the implementation block
@property (nonatomic,retain) NSControl*<Errorable> cityField;                                               //@synthesize cityField=_cityField - In the implementation block
@property (nonatomic,retain) NSControl*<Errorable> districtField;                                           //@synthesize districtField=_districtField - In the implementation block
@property (nonatomic,retain) NSControl*<Errorable> stateField;                                              //@synthesize stateField=_stateField - In the implementation block
@property (nonatomic,retain) NSControl*<Errorable> postalCodeField;                                         //@synthesize postalCodeField=_postalCodeField - In the implementation block
@property (nonatomic,retain) NSArray * allInputFields;                                                      //@synthesize allInputFields=_allInputFields - In the implementation block
@property (nonatomic,retain) NSButton * cancelButton;                                                       //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSButton * saveButton;                                                         //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) PKContactLabelMenuController * labelMenuController;                            //@synthesize labelMenuController=_labelMenuController - In the implementation block
@property (nonatomic,retain) PKContactFormatValidator * contactFormatValidator;                             //@synthesize contactFormatValidator=_contactFormatValidator - In the implementation block
@property (nonatomic,readonly) CNContact * editedContact; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,retain) NSDictionary * fieldViewDictionary;                                            //@synthesize fieldViewDictionary=_fieldViewDictionary - In the implementation block
@property (nonatomic,retain) CNPostalAddressFormattingSpecification * formattingSpecification;              //@synthesize formattingSpecification=_formattingSpecification - In the implementation block
@property (assign,nonatomic) long long type;                                                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long shippingType;                                               //@synthesize shippingType=_shippingType - In the implementation block
@property (nonatomic,copy) NSString * region;                                                               //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) CNContact * contact;                                                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSArray * errors;                                                                //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic,__weak) id<PKPostalAddressEditorViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * requiredFields;                                                        //@synthesize requiredFields=_requiredFields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setType:(long long)arg1 ;
-(char)isValid;
-(id<PKPostalAddressEditorViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPostalAddressEditorViewControllerDelegate>)arg1 ;
-(long long)type;
-(void)reset;
-(void)awakeFromNib;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(NSButton *)cancelButton;
-(void)setCancelButton:(NSButton *)arg1 ;
-(void)setRegion:(NSString *)arg1 ;
-(NSArray *)errors;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)region;
-(void)resetErrors;
-(void)setErrors:(NSArray *)arg1 ;
-(unsigned long long)shippingType;
-(void)setShippingType:(unsigned long long)arg1 ;
-(PKContactFormatValidator *)contactFormatValidator;
-(void)setContactFormatValidator:(PKContactFormatValidator *)arg1 ;
-(NSSet *)requiredFields;
-(void)setRequiredFields:(NSSet *)arg1 ;
-(CNContact *)editedContact;
-(id)_countryMenuItems;
-(void)cancelButtonClicked:(id)arg1 ;
-(NSTextField *)promptTextField;
-(void)setPromptTextField:(NSTextField *)arg1 ;
-(void)_updateLabels;
-(void)_updateFields;
-(NSButton *)saveButton;
-(void)setSaveButton:(NSButton *)arg1 ;
-(id)initWithContactFormatValidator:(id)arg1 ;
-(PKContactTextField *)givenNameTextField;
-(PKContactTextField *)familyNameTextField;
-(PKContactTextField *)phoneticGivenNameTextField;
-(PKContactTextField *)phoneticFamilyNameTextField;
-(PKContactLabelMenuController *)labelMenuController;
-(NSPopUpButton *)labelPopUpButton;
-(NSComboBox *)labelComboBox;
-(NSStackView *)namesStackView;
-(NSStackView *)phoneticNamesStackView;
-(void)_applyErrors:(id)arg1 ;
-(NSImageView *)paymentLogoImageView;
-(char)_shouldShowPhoneticName;
-(void)resetSubviewsOfView:(id)arg1 ;
-(void)_validateContactFormatAndSetErrorForField:(id)arg1 ;
-(void)contactLabelMenuController:(id)arg1 didHideControl:(id)arg2 ;
-(void)contactLabelMenuController:(id)arg1 didShowControl:(id)arg2 ;
-(void)saveButtonClicked:(id)arg1 ;
-(void)setPaymentLogoImageView:(NSImageView *)arg1 ;
-(void)setNamesStackView:(NSStackView *)arg1 ;
-(void)setGivenNameTextField:(PKContactTextField *)arg1 ;
-(void)setFamilyNameTextField:(PKContactTextField *)arg1 ;
-(void)setPhoneticNamesStackView:(NSStackView *)arg1 ;
-(void)setPhoneticGivenNameTextField:(PKContactTextField *)arg1 ;
-(void)setPhoneticFamilyNameTextField:(PKContactTextField *)arg1 ;
-(void)setLabelPopUpButton:(NSPopUpButton *)arg1 ;
-(void)setLabelComboBox:(NSComboBox *)arg1 ;
-(void)setLabelMenuController:(PKContactLabelMenuController *)arg1 ;
-(PKContactTextField *)street1TextField;
-(PKContactTextField *)street2TextField;
-(void)_createDynamicEntryFieldsAndFieldCollectionsForRegionChange:(char)arg1 ;
-(PKContactPopUpButton *)countryPopUpButton;
-(void)_applyContact:(id)arg1 addressOnly:(char)arg2 ;
-(NSArray *)allInputFields;
-(id)_contactIncludingCountryInfo:(char)arg1 ;
-(void)_validateContactFormatAndSetErrors;
-(NSStackView *)controlsAndNamesStackView;
-(id)_createContactEntryFieldForPostalKey:(id)arg1 ;
-(void)setCityField:(NSControl*<Errorable>)arg1 ;
-(void)setDistrictField:(NSControl*<Errorable>)arg1 ;
-(void)setStateField:(NSControl*<Errorable>)arg1 ;
-(void)setPostalCodeField:(NSControl*<Errorable>)arg1 ;
-(NSControl*<Errorable>)cityField;
-(NSControl*<Errorable>)districtField;
-(NSControl*<Errorable>)stateField;
-(NSControl*<Errorable>)postalCodeField;
-(void)setAllInputFields:(NSArray *)arg1 ;
-(NSStackView *)streetsStackView;
-(void)setFieldViewDictionary:(NSDictionary *)arg1 ;
-(void)_applyPostalAddressToDynamicFields:(id)arg1 ;
-(NSDictionary *)fieldViewDictionary;
-(id)_viewsForPostalAddressKey:(id)arg1 ;
-(char)_wantsFieldKey:(id)arg1 ;
-(id)_valueFromField:(id)arg1 ;
-(void)_applyValue:(id)arg1 toField:(id)arg2 ;
-(void)_applyValue:(id)arg1 toPickerField:(id)arg2 ;
-(id)_viewsForError:(id)arg1 ;
-(id)_postalAddressTypeStringForType:(long long)arg1 ;
-(NSTextField *)typeTextField;
-(id)_postalAddressPromptStringForType:(long long)arg1 ;
-(NSStackView *)postalAddressFieldsStackView;
-(CNPostalAddressFormattingSpecification *)formattingSpecification;
-(void)_applyPlaceholderForFieldKey:(id)arg1 toView:(id)arg2 ;
-(void)_itemSelected:(id)arg1 ;
-(id)autocompleteTextFieldWillBeginSearch:(id)arg1 ;
-(void)autocompleteTextField:(id)arg1 didSelectContact:(id)arg2 source:(long long)arg3 ;
-(void)countrySelected:(id)arg1 ;
-(void)setTypeTextField:(NSTextField *)arg1 ;
-(void)setControlsAndNamesStackView:(NSStackView *)arg1 ;
-(void)setPostalAddressFieldsStackView:(NSStackView *)arg1 ;
-(void)setStreetsStackView:(NSStackView *)arg1 ;
-(void)setStreet1TextField:(PKContactTextField *)arg1 ;
-(void)setStreet2TextField:(PKContactTextField *)arg1 ;
-(void)setCountryPopUpButton:(PKContactPopUpButton *)arg1 ;
-(void)setFormattingSpecification:(CNPostalAddressFormattingSpecification *)arg1 ;
@end

