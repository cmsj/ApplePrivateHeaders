/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSMutableDictionary, NSString;

@interface NSApplicationTestingController : NSObject {

	NSMutableDictionary* _currentTests;
	NSString* _quitTestName;
	char _isExtendedLaunch;
	char _checkForLeaks;
	double _launchTime;
	NSString* _aggregate;
	NSString* _testNameForLiveTest;
	/*^block*/id _testCompletionHandler;
	NSString* _currentDocumentPath;
	char _waitingForDocumentWindow;
	char _waitingForLaunchComplete;

}
+(id)sharedTestingController;
+(void)performResizeTestOnWindow:(id)arg1 preTestHandler:(/*^block*/id)arg2 postTestHandler:(/*^block*/id)arg3 ;
-(void)reportFullAppLaunchCompleteWasExtended:(char)arg1 ;
-(void)reportBasicAppLaunchCompleteWillExtended:(char)arg1 ;
-(char)reportApplicationTerminating;
-(char)isRunningTest;
-(char)isRunningTest:(id)arg1 ;
-(char)isRunningQuitTest;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(void)startedTest:(id)arg1 ;
-(void)finishedTest:(id)arg1 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 withTeardownBlock:(/*^block*/id)arg3 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(/*^block*/id)arg4 ;
-(void)finishedTest:(id)arg1 waitForCommit:(char)arg2 extraResults:(id)arg3 ;
-(void)finishedTest:(id)arg1 waitForCommit:(char)arg2 extraResults:(id)arg3 withTeardownBlock:(/*^block*/id)arg4 ;
-(void)failedTest:(id)arg1 ;
-(void)failedTest:(id)arg1 withFailure:(id)arg2 ;
-(void)failedTest:(id)arg1 withResults:(id)arg2 ;
-(void)failedTest:(id)arg1 withFailure:(id)arg2 withResults:(id)arg3 ;
-(void)startedSubTest:(id)arg1 forTest:(id)arg2 ;
-(void)startedSubTest:(id)arg1 forTest:(id)arg2 withMetrics:(id)arg3 ;
-(void)finishedSubTest:(id)arg1 forTest:(id)arg2 ;
-(void)finishedSubTest:(id)arg1 forTest:(id)arg2 waitForCommit:(char)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)installCACommitCompletionBlock:(/*^block*/id)arg1 ;
-(void)performScrollTestOnScrollView:(id)arg1 usingTestName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performResizeTestOnWindow:(id)arg1 usingTestName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performActivateDeactivateTestUsingTestName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportWillOpenDocumentURLs:(id)arg1 fileURLs:(id)arg2 otherURLs:(id)arg3 ;
-(void)reportDidOpenWindowsForURLs:(char)arg1 ;
-(char)handleTestURL:(id)arg1 ;
-(void)reportAppLaunchStartWithLaunchTime:(double)arg1 ;
-(void)_finishLaunchTestIfAppropriate;
-(void)_runOpenDocumentTestWithTestName:(id)arg1 options:(id)arg2 ;
-(void)_runCloseDocumentTestWithTestName:(id)arg1 options:(id)arg2 ;
-(void)_runResizeTestWithTestName:(id)arg1 options:(id)arg2 ;
-(void)_runScrollTestWithTestName:(id)arg1 options:(id)arg2 ;
-(void)_runActivationTestWithTestName:(id)arg1 options:(id)arg2 ;
-(char)_applySandboxExtensionFromBookmarkForTestName:(id)arg1 options:(id)arg2 ;
-(id)_previouslyOpenedDocumentForTestWithTestName:(id)arg1 options:(id)arg2 ;
-(id)_windowForDocument:(id)arg1 ;
-(id)_scrollViewForCodelessTestingInWindow:(id)arg1 ;
-(void)_scrollToTop:(id)arg1 ;
-(void)_resetToDefaultStateWindow:(id)arg1 scrollView:(id)arg2 ;
-(id)_currentFrameCountForTestDisplay;
-(void)emitPPTStartTracePointForTestName:(id)arg1 identifier:(unsigned long long)arg2 ;
-(void)_reportResults:(id)arg1 ;
-(void)emitPPTEndTracePointForTestName:(id)arg1 identifier:(unsigned long long)arg2 ;
-(id)_subTest:(id)arg1 forTest:(id)arg2 withMetrics:(id)arg3 ;
-(void)emitPPTStartTracePointForSubTestName:(id)arg1 identifier:(unsigned long long)arg2 testIdentifier:(unsigned long long)arg3 ;
-(void)emitPPTEndTracePointForSubTestName:(id)arg1 identifier:(unsigned long long)arg2 ;
-(void)_liveScrollWillStart:(id)arg1 ;
-(void)_liveScrollDidEnd:(id)arg1 ;
-(void)_sendDictionaryToPPT:(id)arg1 ;
-(CFMessagePortRef)_purplePPTServerPort;
@end
