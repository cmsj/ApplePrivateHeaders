/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSWebExtensionAPIObject.h>

@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPITabsObjC : WBSWebExtensionAPIObject {

	WBSWebExtensionAPIEventObjC* _onActivated;
	WBSWebExtensionAPIEventObjC* _onAttached;
	WBSWebExtensionAPIEventObjC* _onCreated;
	WBSWebExtensionAPIEventObjC* _onDetached;
	WBSWebExtensionAPIEventObjC* _onHighlighted;
	WBSWebExtensionAPIEventObjC* _onMoved;
	WBSWebExtensionAPIEventObjC* _onRemoved;
	WBSWebExtensionAPIEventObjC* _onReplaced;
	WBSWebExtensionAPIEventObjC* _onUpdated;

}

@property (nonatomic,readonly) WBSWebExtensionAPITabs* cpp; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onActivated; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onAttached; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onCreated; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onDetached; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onHighlighted; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onMoved; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onRemoved; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onReplaced; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onUpdated; 
@property (nonatomic,readonly) double tabIdentifierNone; 
+(id)tabsWithExtensionIdentifier:(id)arg1 runtime:(id)arg2 ;
-(WBSWebExtensionAPITabs*)cpp;
-(char)isPropertyAllowed:(id)arg1 ;
-(WBSWebExtensionAPIEventObjC *)onRemoved;
-(WBSWebExtensionAPIEventObjC *)onCreated;
-(void)createTabWithProperties:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)getTabWithID:(double)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)getCurrentTabWithBrowserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)getSelectedTabInWindow:(double)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)duplicateTab:(double)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)goBackInTab:(double)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)goForwardInTab:(double)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)queryTabs:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)reloadTab:(double)arg1 reloadProperties:(id)arg2 browserContextController:(id)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)closeTabsWithIDs:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)updateTab:(double)arg1 updateProperties:(id)arg2 browserContextController:(id)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)captureVisibleTabInWindow:(double)arg1 options:(id)arg2 browserContextController:(id)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)detectLanguageInTab:(double)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)executeScriptInTab:(double)arg1 details:(id)arg2 browserContextController:(id)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)insertCSSInTab:(double)arg1 details:(id)arg2 browserContextController:(id)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)removeCSSInTab:(double)arg1 details:(id)arg2 browserContextController:(id)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)getZoomForTab:(double)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)setZoomForTab:(double)arg1 zoomFactor:(double)arg2 browserContextController:(id)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)sendMessageToTab:(double)arg1 message:(id)arg2 options:(id)arg3 browserContextController:(id)arg4 frame:(id)arg5 completionHandler:(id)arg6 outExceptionString:(id*)arg7 ;
-(Ref<SafariShared::WBSWebExtensionAPIPort, WTF::RawPtrTraits<SafariShared::WBSWebExtensionAPIPort>>*)connectToTab:(double)arg1 connectInfo:(id)arg2 frame:(id)arg3 ;
-(void)discardTab:(double)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 ;
-(void)highlightTabs:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 ;
-(double)tabIdentifierNone;
-(WBSWebExtensionAPIEventObjC *)onActivated;
-(WBSWebExtensionAPIEventObjC *)onAttached;
-(WBSWebExtensionAPIEventObjC *)onDetached;
-(WBSWebExtensionAPIEventObjC *)onHighlighted;
-(WBSWebExtensionAPIEventObjC *)onMoved;
-(WBSWebExtensionAPIEventObjC *)onReplaced;
-(WBSWebExtensionAPIEventObjC *)onUpdated;
-(char)_isProgrammaticInjectionDetailsDictionaryValid:(id)arg1 callerName:(id)arg2 outExceptionString:(id*)arg3 ;
-(id)_validatedQueryInfoDictionary:(id)arg1 outExceptionString:(id*)arg2 ;
-(char)_getBypassCacheFromReloadPropertiesDictionary:(id)arg1 outExceptionString:(id*)arg2 ;
@end

