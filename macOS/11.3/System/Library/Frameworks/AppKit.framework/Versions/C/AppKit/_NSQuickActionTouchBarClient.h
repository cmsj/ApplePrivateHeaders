/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NSQuickActionProviderObserver.h>
#import <libobjc.A.dylib/_NSQuickActionValidatorObserver.h>
#import <libobjc.A.dylib/_NSQuickActionTouchBarClientProtocol.h>

@class _NSQuickActionProvider, _NSQuickActionValidator, _NSQuickActionTouchBarClientItemSourceMonitor, NSDictionary, NSSet, NSXPCConnection, NSRunningApplication, NSString;

@interface _NSQuickActionTouchBarClient : NSObject <_NSQuickActionProviderObserver, _NSQuickActionValidatorObserver, _NSQuickActionTouchBarClientProtocol> {

	_NSQuickActionProvider* _provider;
	_NSQuickActionValidator* _validator;
	_NSQuickActionTouchBarClientItemSourceMonitor* _itemSourceMonitor;
	NSDictionary* _quickActionsByIdentifier;
	NSSet* _enabledQuickActionIdentifiers;
	NSXPCConnection* _connectionToService;
	NSRunningApplication* _currentApplication;
	int _touchBarRegistrationToken;
	char _needsRegistration;
	char _isRegistrationOpen;
	char _scheduledUpdate;
	char _isUpdating;
	char _isActive;
	char _isObservingItemSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)activate;
-(void)deactivate;
-(void)quickActionsDidChange;
-(void)validQuickActionsDidChange;
-(void)quickActionTouchBarWillShow;
-(void)quickActionTouchBarDidHide;
-(void)invokeQuickActionWithIdentifier:(id)arg1 ;
@end
