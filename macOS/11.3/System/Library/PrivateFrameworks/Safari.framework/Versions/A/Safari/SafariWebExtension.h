/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSWebExtensionData.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>

@class NSImage, PerSitePreferenceUserInterfaceInformation, NSString;

@interface SafariWebExtension : WBSWebExtensionData <WKNavigationDelegate, WKUIDelegate>

@property (nonatomic,readonly) NSImage * iconBadgedWithSafariIcon; 
@property (nonatomic,readonly) PerSitePreferenceUserInterfaceInformation * perSitePreferenceUserInterfaceInformation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_applicationIsActive;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)userGesturePerformedInTab:(id)arg1 ;
-(NSImage *)iconBadgedWithSafariIcon;
-(void)_validateToolbarItemInAllWindows;
-(id)_defaultWebsiteDataStore;
-(void)checkPermissionAndPromptIfNecessaryToAccessURLs:(id)arg1 inTab:(id)arg2 options:(unsigned long long)arg3 callingAPIName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_backgroundWebViewConfiguration;
-(void)_loadToolbarItem;
-(void)_unloadToolbarItem;
-(PerSitePreferenceUserInterfaceInformation *)perSitePreferenceUserInterfaceInformation;
@end

