/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSWebExtensionAPIObject.h>

@class WBSWebExtensionAPIWindowsEventObjC;

@interface WBSWebExtensionAPIWindowsObjC : WBSWebExtensionAPIObject {

	WBSWebExtensionAPIWindowsEventObjC* _onCreated;
	WBSWebExtensionAPIWindowsEventObjC* _onRemoved;
	WBSWebExtensionAPIWindowsEventObjC* _onFocusChanged;

}

@property (nonatomic,readonly) WBSWebExtensionAPIWindows* cpp; 
@property (nonatomic,readonly) WBSWebExtensionAPIWindowsEventObjC * onCreated; 
@property (nonatomic,readonly) WBSWebExtensionAPIWindowsEventObjC * onRemoved; 
@property (nonatomic,readonly) WBSWebExtensionAPIWindowsEventObjC * onFocusChanged; 
@property (nonatomic,readonly) double windowIdentifierNone; 
@property (nonatomic,readonly) double windowIdentifierCurrent; 
+(id)windowsWithExtensionIdentifier:(id)arg1 runtime:(id)arg2 ;
-(WBSWebExtensionAPIWindows*)cpp;
-(char)isPropertyAllowed:(id)arg1 ;
-(WBSWebExtensionAPIWindowsEventObjC *)onRemoved;
-(void)getWindowWithID:(double)arg1 info:(id)arg2 browserContextController:(id)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)getCurrentWindowWithInfo:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)getLastFocusedWindowWithInfo:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)getAllWindowsWithInfo:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)createWindowWithData:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(void)updateWindowWithID:(double)arg1 info:(id)arg2 browserContextController:(id)arg3 completionHandler:(id)arg4 outExceptionString:(id*)arg5 ;
-(void)closeWindowWithID:(double)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 outExceptionString:(id*)arg4 ;
-(double)windowIdentifierNone;
-(double)windowIdentifierCurrent;
-(WBSWebExtensionAPIWindowsEventObjC *)onCreated;
-(WBSWebExtensionAPIWindowsEventObjC *)onFocusChanged;
-(char)_isResizeWindowInfoDictionaryValid:(id)arg1 forMethod:(id)arg2 outExceptionString:(id*)arg3 ;
-(char)_isGetInfoDictionaryValidForCaller:(id)arg1 getInfo:(id)arg2 outExceptionString:(id*)arg3 ;
-(id)_supportedPropertiesFromCreateDataDictionary:(id)arg1 outExceptionString:(id*)arg2 ;
@end

