/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <SafariShared/WBSFormMetadataController.h>

@interface FormMetadataController : WBSFormMetadataController {

	BundleScriptWorld* _scriptWorld;

}
+(id)sharedFormMetadataController;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)clearScriptWorld;
-(void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(char)arg3 ;
-(void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)usernameFieldFocused:(id)arg1 fieldMetadata:(id)arg2 inForm:(id)arg3 inFrame:(id)arg4 ;
-(char)addressBookAutoFillableFieldFocused:(id)arg1 withAddressBookAutoFillableFieldMetadata:(id)arg2 inFrame:(id)arg3 ;
-(void)otherCreditCardFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)oneTimeCodeFieldFocused:(id)arg1 withFieldMetadata:(id)arg2 inFrame:(id)arg3 ;
-(void)unidentifiedTextFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)passwordFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)creditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)usernameFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)addressBookAutoFillableFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)otherCreditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)oneTimeCodeFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5 ;
-(void)unidentifiedTextFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 shouldSubmit:(char)arg3 ;
-(char)shouldIncludeNonEmptyFields;
-(void)textDidChangeDelayCompletedField:(id)arg1 inFrame:(id)arg2 ;
-(char)manualAutoFillButtonWillFitInFieldWithMetadata:(id)arg1 ;
-(BundleScriptWorld*)scriptWorld;
-(char)isAutoFillAllowedInFrame:(const BundleFrame*)arg1 ;
-(char)_isAddressBookAutoFillAllowedInFormWithType:(unsigned long long)arg1 ;
-(char)_fieldContainsStrongPasswordButton:(id)arg1 ;
-(id)_formMetadataObserverForBundlePage:(const BundlePage*)arg1 ;
-(void)_requestToShowCreditCardButtonInFieldIfNecessary:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)_hideAutoFillButtonInField:(id)arg1 ;
-(void)_otherCreditCardFieldOrUnidentifiedFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)_otherCreditCardFieldOrUnidentifiedFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4 ;
-(void)_requestToShowAutoFillButtonForAddressBookFieldWithMetadataIfAvailable:(id)arg1 formMetadata:(id)arg2 inFrame:(id)arg3 textFieldNodeHandle:(const BundleNodeHandle*)arg4 ;
@end

