/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityFoundation/AccessibilityFoundation-Structs.h>
#import <libobjc.A.dylib/_AXFLaunchServicesProviderDelegate.h>
#import <libobjc.A.dylib/_AXFEventProviderDelegate.h>

@protocol AXFApplicationManagerDelegate;
@class AXFUIElement, _AXFLaunchServicesProvider, _AXFEventProvider, NSMutableArray, AXFDispatchQueue, NSOperationQueue, NSArray, NSString;

@interface AXFApplicationManager : NSObject <_AXFLaunchServicesProviderDelegate, _AXFEventProviderDelegate> {

	int __updateGen;
	AXFUIElement* __focusedApplication;
	id<AXFApplicationManagerDelegate> _delegate;
	_AXFLaunchServicesProvider* __launchServicesProvider;
	/*^block*/id __launchServicesProviderProvider;
	_AXFEventProvider* __eventProvider;
	/*^block*/id __eventProviderProvider;
	AXFUIElement* __frontmostApplication;
	NSMutableArray* __runningApplications;
	AXFDispatchQueue* __applicationManagerQueue;
	AXFDispatchQueue* __delegateQueue;
	NSOperationQueue* __updateQueue;

}

@property (setter=_setLaunchServicesProvider:,nonatomic,retain) _AXFLaunchServicesProvider * _launchServicesProvider;              //@synthesize _launchServicesProvider=__launchServicesProvider - In the implementation block
@property (setter=_setLaunchServicesProviderProvider:,nonatomic,copy) id _launchServicesProviderProvider;                          //@synthesize _launchServicesProviderProvider=__launchServicesProviderProvider - In the implementation block
@property (setter=_setEventProvider:,nonatomic,retain) _AXFEventProvider * _eventProvider;                                         //@synthesize _eventProvider=__eventProvider - In the implementation block
@property (setter=_setEventProviderProvider:,nonatomic,copy) id _eventProviderProvider;                                            //@synthesize _eventProviderProvider=__eventProviderProvider - In the implementation block
@property (setter=_setFrontmostApplication:,nonatomic,retain) AXFUIElement * _frontmostApplication;                                //@synthesize _frontmostApplication=__frontmostApplication - In the implementation block
@property (setter=_setFocusedApplication:,nonatomic,retain) AXFUIElement * _focusedApplication;                                    //@synthesize _focusedApplication=__focusedApplication - In the implementation block
@property (setter=_setRunningApplications:,nonatomic,retain) NSMutableArray * _runningApplications;                                //@synthesize _runningApplications=__runningApplications - In the implementation block
@property (nonatomic,readonly) AXFDispatchQueue * _applicationManagerQueue;                                                        //@synthesize _applicationManagerQueue=__applicationManagerQueue - In the implementation block
@property (nonatomic,readonly) AXFDispatchQueue * _delegateQueue;                                                                  //@synthesize _delegateQueue=__delegateQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * _updateQueue;                                                                    //@synthesize _updateQueue=__updateQueue - In the implementation block
@property (assign,nonatomic) int _updateGen;                                                                                       //@synthesize _updateGen=__updateGen - In the implementation block
@property (__weak) id<AXFApplicationManagerDelegate> delegate;                                                                     //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSArray * runningApplications; 
@property (readonly) AXFUIElement * frontmostApplication; 
@property (readonly) AXFUIElement * focusedApplication; 
@property (readonly) AXFUIElement * applicationWithMenubar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)automaticallyNotifiesObserversOfRunningApplications;
+(char)automaticallyNotifiesObserversOfFrontmostApplication;
+(char)automaticallyNotifiesObserversOfApplicationWithMenubar;
+(id)sharedManager;
+(id)shared;
-(void)eventProviderKeyFocusChanged:(id)arg1 ;
-(void)eventProviderNewFront:(id)arg1 ;
-(void)_createApplicationWithPSNIfNeeded:(ProcessSerialNumber)arg1 ;
-(void)_updateFrontmostAndFocusedApplications;
-(void)_performBlockOnApplicationManagerQueue:(/*^block*/id)arg1 ;
-(void)_removeApplicationWithPSN:(ProcessSerialNumber)arg1 ;
-(AXFDispatchQueue *)_applicationManagerQueue;
-(void)_assertApplicationManagerQueue;
-(id)_knownApplicationWithPSN:(ProcessSerialNumber)arg1 ;
-(_AXFLaunchServicesProvider *)_launchServicesProvider;
-(void)_appendApplication:(id)arg1 ;
-(void)_notifyRunningApplicationsDidChangeHandler;
-(void)_startObservingApplications;
-(id)_launchServicesProviderProvider;
-(id)_eventProviderProvider;
-(id)_newLaunchServicesProvider;
-(void)_setLaunchServicesProvider:(id)arg1 ;
-(_AXFEventProvider *)_eventProvider;
-(id)_newEventProvider;
-(void)_setEventProvider:(id)arg1 ;
-(void)_registerCurrentlyRunningApplications;
-(void)_stopObservingApplications;
-(void)_setFrontmostApplication:(id)arg1 ;
-(void)_setFocusedApplication:(id)arg1 ;
-(int)_updateGen;
-(void)set_updateGen:(int)arg1 ;
-(id)_knownApplicationWithElement:(id)arg1 ;
-(void)_assertNotApplicationManagerQueue;
-(void)_performBlockOnApplicationManagerQueueAndWait:(/*^block*/id)arg1 ;
-(void)_setFrontmostApplication:(id)arg1 preflight:(char)arg2 ;
-(void)_notifyFrontmostApplicationDidChangeHandler;
-(void)_notifyFocusedApplicationDidChangeHandler;
-(void)_setRunningApplications:(id)arg1 ;
-(id)_applicationWithProcessSerialNumber:(ProcessSerialNumber)arg1 applicationIdentifier:(id)arg2 ;
-(id)_applicationWithProcessIdentifier:(int)arg1 applicationIdentifier:(id)arg2 ;
-(void)launchServicesProvider:(id)arg1 applicationWithProcessSerialNumberReady:(ProcessSerialNumber)arg2 ;
-(void)launchServicesProvider:(id)arg1 applicationWithProcessSerialNumberDied:(ProcessSerialNumber)arg2 ;
-(void)launchServicesProvider:(id)arg1 applicationWithProcessSerialNumberBecameFrontMost:(ProcessSerialNumber)arg2 ;
-(id)initWithLaunchServicesProvider:(/*^block*/id)arg1 eventProvider:(/*^block*/id)arg2 ;
-(void)_setLaunchServicesProviderProvider:(/*^block*/id)arg1 ;
-(void)_setEventProviderProvider:(/*^block*/id)arg1 ;
-(id)init;
-(id<AXFApplicationManagerDelegate>)delegate;
-(void)setDelegate:(id<AXFApplicationManagerDelegate>)arg1 ;
-(AXFUIElement *)frontmostApplication;
-(NSArray *)runningApplications;
-(AXFUIElement *)_frontmostApplication;
-(AXFDispatchQueue *)_delegateQueue;
-(NSOperationQueue *)_updateQueue;
-(NSMutableArray *)_runningApplications;
-(void)startObservingApplications;
-(void)stopObservingApplications;
-(id)applicationWithProcessIdentifier:(int)arg1 applicationIdentifier:(id)arg2 ;
-(id)applicationWithProcessSerialNumber:(ProcessSerialNumber)arg1 applicationIdentifier:(id)arg2 ;
-(AXFUIElement *)focusedApplication;
-(AXFUIElement *)_focusedApplication;
-(AXFUIElement *)applicationWithMenubar;
@end

