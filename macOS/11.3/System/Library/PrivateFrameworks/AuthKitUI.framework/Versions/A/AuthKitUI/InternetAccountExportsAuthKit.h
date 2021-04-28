/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, JSValue;


@protocol InternetAccountExportsAuthKit <JSExport>
@property (nonatomic,readonly) unsigned long long protocolVersion; 
@property (nonatomic,readonly) NSDictionary * environment; 
@property (nonatomic,readonly) NSDictionary * workflow; 
@property (setter=icaSetButtonBar:,getter=icaButtonBar,nonatomic,retain) JSValue * buttonBar; 
@optional
-(void)log:(id)arg1 message:(id)arg2 __JS_EXPORT_AS__log:(id)arg3;
-(void)showAlert:(id)arg1 callback:(id)arg2 __JS_EXPORT_AS__showAlert:(id)arg3;
-(void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(id)arg3 __JS_EXPORT_AS__resize:(id)arg4;
-(void)refreshView:(id)arg1 section:(id)arg2 __JS_EXPORT_AS__refreshView:(id)arg3;
-(void)beginSheetWithURL:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5 __JS_EXPORT_AS__beginSheetWithURL:(id)arg6;
-(void)beginSheetWithContent:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5 __JS_EXPORT_AS__beginSheetWithContent:(id)arg6;
-(void)endSheet:(id)arg1 __JS_EXPORT_AS__endSheet:(id)arg2;
-(void)exitWebView:(id)arg1 __JS_EXPORT_AS__exit:(id)arg2;
-(void)openExternalURL:(id)arg1 __JS_EXPORT_AS__openExternalURL:(id)arg2;
-(void)openHelp:(id)arg1 __JS_EXPORT_AS__openHelp:(id)arg2;
-(void)setNavTitle:(id)arg1 __JS_EXPORT_AS__setNavTitle:(id)arg2;
-(void)setPageSubTitle:(id)arg1 __JS_EXPORT_AS__setPageSubTitle:(id)arg2;
-(void)setPageImageHidden:(id)arg1 __JS_EXPORT_AS__setPageImageHidden:(id)arg2;
-(void)setPageHeaderSymbol:(id)arg1 __JS_EXPORT_AS__setPageHeaderSymbol:(id)arg2;
-(void)setLeftNavButton:(id)arg1 callback:(id)arg2 __JS_EXPORT_AS__setLeftNavButton:(id)arg3;
-(void)setRightNavButton:(id)arg1 callback:(id)arg2 __JS_EXPORT_AS__setRightNavButton:(id)arg3;
-(void)setAlternateButton:(id)arg1 callback:(id)arg2 __JS_EXPORT_AS__setAlternateButton:(id)arg3;
-(void)saveTOS:(id)arg1 content:(id)arg2 __JS_EXPORT_AS__saveTOS:(id)arg3;
-(void)saveTOS:(id)arg1 localizedName:(id)arg2 content:(id)arg3 __JS_EXPORT_AS__saveTOSWithName:(id)arg4;
-(void)resetCompleted:(id)arg1 password:(id)arg2 __JS_EXPORT_AS__resetCompleted:(id)arg3;
-(void)showTermsAndConditions:(id)arg1 callback:(id)arg2 __JS_EXPORT_AS__showTermsAndConditions:(id)arg3;
-(void)dismiss:(id)arg1 __JS_EXPORT_AS__dismiss:(id)arg2;
-(void)setAuthKitDataValue:(id)arg1 forKey:(id)arg2 __JS_EXPORT_AS__setAuthKitDataValue:(id)arg3;
-(void)openApplicationWithBundleID:(id)arg1 __JS_EXPORT_AS__openApplicationWithBundleID:(id)arg2;
-(void)obtainAuthRight:(id)arg1 __JS_EXPORT_AS__obtainAuthRight:(id)arg2;
-(void)runAppleIDOptOut:(id)arg1 __JS_EXPORT_AS__runAppleIDOptOut:(id)arg2;
-(void)triggerAKAction:(id)arg1 __JS_EXPORT_AS__triggerAKAction:(id)arg2;
-(void)validateLocalPassword:(id)arg1 __JS_EXPORT_AS__validateLocalPassword:(id)arg2;
-(void)authenticateUserWithAttributes:(id)arg1 callback:(id)arg2 __JS_EXPORT_AS__authenticateUserWithAttributes:(id)arg3;
-(void)getIcon:(id)arg1 bundleIconName:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 callback:(id)arg5 __JS_EXPORT_AS__getIcon:(id)arg6;

@required
-(void)openApplicationWithBundleID:(id)arg1;
-(NSDictionary *)environment;
-(void)endSheet:(id)arg1;
-(unsigned long long)protocolVersion;
-(NSDictionary *)workflow;
-(void)skipAndContinueSignIn;
-(void)icaSetButtonBar:(id)arg1;
-(void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(id)arg3;
-(void)beginSheetWithURL:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
-(void)beginSheetWithContent:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
-(void)exitWebView:(id)arg1;
-(void)setNavTitle:(id)arg1;
-(void)setPageSubTitle:(id)arg1;
-(void)setLeftNavButton:(id)arg1 callback:(id)arg2;
-(void)setRightNavButton:(id)arg1 callback:(id)arg2;
-(void)saveTOS:(id)arg1 content:(id)arg2;
-(void)saveTOS:(id)arg1 localizedName:(id)arg2 content:(id)arg3;
-(void)resetCompleted:(id)arg1 password:(id)arg2;
-(void)showTermsAndConditions:(id)arg1 callback:(id)arg2;
-(void)dismiss:(id)arg1;
-(void)skipSignIn;
-(void)triggerAKAction:(id)arg1;
-(void)obtainAuthRight:(id)arg1;
-(void)runAppleIDOptOut:(id)arg1;
-(void)validateLocalPassword:(id)arg1;
-(void)log:(id)arg1 message:(id)arg2;
-(void)webClientIsReady;
-(void)showAlert:(id)arg1 callback:(id)arg2;
-(void)refreshView:(id)arg1 section:(id)arg2;
-(void)openExternalURL:(id)arg1;
-(void)openHelp:(id)arg1;
-(void)webClientHasLoaded;
-(void)setPageImageHidden:(id)arg1;
-(void)setPageHeaderSymbol:(id)arg1;
-(void)setAlternateButton:(id)arg1 callback:(id)arg2;
-(void)setAuthKitDataValue:(id)arg1 forKey:(id)arg2;
-(void)authenticateUserWithAttributes:(id)arg1 callback:(id)arg2;
-(void)getIcon:(id)arg1 bundleIconName:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 callback:(id)arg5;
-(id)icaButtonBar;

@end
