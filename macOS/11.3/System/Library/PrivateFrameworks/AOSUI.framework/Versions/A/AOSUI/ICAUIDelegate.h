/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICAUIDelegate <NSObject>
@optional
-(void)skipAndContinueSignIn;
-(id)webViewWindow;
-(void)icaWebKitViewHasLoaded;
-(void)runAppleIDOptOut:(id)arg1;
-(void)showNativeAddFamilyMember;
-(void)showSpinnerWithLabelOnNativeScreen:(id)arg1;
-(void)refreshPage;
-(void)openSharingWithContext:(id)arg1 callback:(id)arg2;
-(void)createChildAccount:(id)arg1;

@required
-(void)endSheet:(id)arg1;
-(void)icaSetButtonBar:(id)arg1;
-(void)icaWebKitViewIsAvailable;
-(void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(id)arg3;
-(void)beginSheetWithURL:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
-(void)beginSheetWithContent:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
-(void)exitWebView:(id)arg1;
-(void)icaWebKitViewSwitchToLocation:(id)arg1 toSection:(id)arg2;

@end

