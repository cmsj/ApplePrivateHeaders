/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NSQuickActionTouchBarPickerDelegate.h>
#import <libobjc.A.dylib/_NSQuickActionProviderObserver.h>

@protocol _NSQuickActionTouchBarControllerDelegate;
@class NSWorkflowsBar, _NSQuickActionTouchBarPicker, _NSQuickActionProvider, NSDictionary, NSSet, NSOperationQueue, NSString;

@interface _NSQuickActionTouchBarController : NSObject <_NSQuickActionTouchBarPickerDelegate, _NSQuickActionProviderObserver> {

	id<_NSQuickActionTouchBarControllerDelegate> _delegate;
	NSWorkflowsBar* _workflowsBar;
	_NSQuickActionTouchBarPicker* _mainPicker;
	_NSQuickActionTouchBarPicker* _popoverPicker;
	_NSQuickActionProvider* _provider;
	NSDictionary* _dataSourcesByQuickActionIdentifier;
	NSSet* _enabledQuickActionIdentifiers;
	NSOperationQueue* _backgroundLoadingQueue;
	void* _observationInfo;
	char _isObservingWorkflowsBar;

}

@property (readonly) char touchBarIsShowing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)accessInstanceVariablesDirectly;
+(char)automaticallyNotifiesObserversOfTouchBarIsShowing;
+(char)automaticallyNotifiesObserversOf_popoverPicker;
+(char)automaticallyNotifiesObserversOf_workflowsBar;
+(id)keyPathsForValuesAffectingTouchBarIsShowing;
-(void)dealloc;
-(id)init;
-(void)setObservationInfo:(void*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void*)observationInfo;
-(id)initWithDelegate:(id)arg1 ;
-(void)quickActionsDidChange;
-(void)enableQuickActionsWithIdentifiers:(id)arg1 ;
-(void)quickActionTouchBarPicker:(id)arg1 invokeQuickActionForItemDataSource:(id)arg2 ;
-(void)cancelQuickActionTouchBarPicker:(id)arg1 ;
-(id)_popoverPicker;
-(id)_workflowsBar;
-(char)touchBarIsShowing;
-(void)showPopover;
-(void)dismissPopover;
@end

