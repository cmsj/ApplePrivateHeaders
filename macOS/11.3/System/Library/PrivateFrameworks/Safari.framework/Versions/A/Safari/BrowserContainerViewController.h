/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/DimmingViewDelegate.h>
#import <libobjc.A.dylib/TabDialogInstallationTarget.h>

@class NSView, WBSPair, TabDialogInstaller, BrowserViewController, NSString;

@interface BrowserContainerViewController : NSViewController <DimmingViewDelegate, TabDialogInstallationTarget> {

	NSView* _firstResponderViewBeforeDimmingViewPresentation;
	WBSPair* _currentURLToUsageState;
	TabDialogInstaller* _tabDialogInstaller;

}

@property (nonatomic,readonly) BrowserViewController * browserViewController; 
@property (nonatomic,readonly) TabDialogInstaller * tabDialogInstaller;                    //@synthesize tabDialogInstaller=_tabDialogInstaller - In the implementation block
@property (nonatomic,readonly) NSView * tabDialogHostingView; 
@property (nonatomic,readonly) char isShowingTabDialog; 
@property (nonatomic,readonly) char didFireCloseEvent; 
@property (nonatomic,readonly) char isWindowClosing; 
@property (nonatomic,readonly) char isBrowserViewVisible; 
@property (nonatomic,readonly) char isWindowMainWindow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BrowserViewController *)browserViewController;
-(void)updateUsageTrackingInformationAfterShowingDigitalHealthOverlay;
-(void)updateUsageTrackingInformation;
-(char)isShowingTabDialog;
-(void)prepareForModalDialogPresentation;
-(void)dimContentViewForModalDialogPresentation;
-(void)uninstallModalDialogDimmingViewAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)didFireCloseEvent;
-(NSView *)tabDialogHostingView;
-(void)willShowDialog;
-(void)didFinishShowingDialog;
-(char)isBrowserViewVisible;
-(char)isWindowMainWindow;
-(char)isWindowClosing;
-(char)_isShowingPagePreview;
-(TabDialogInstaller *)tabDialogInstaller;
-(void)uninstallTabDialogViewAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)installTabDialogView:(id)arg1 andDimmingView:(id)arg2 placement:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)transplantTabDialogView:(id)arg1 andDimmingView:(id)arg2 placement:(long long)arg3 ;
-(void)resetTabDialogInstaller;
@end

