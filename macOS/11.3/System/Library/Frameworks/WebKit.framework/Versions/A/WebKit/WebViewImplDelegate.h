/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebViewImplDelegate
@optional
-(void)_web_didAddMediaControlsManager:(id)arg1;
-(void)_web_didRemoveMediaControlsManager;
-(void)_didHandleAcceptedCandidate;
-(void)_didUpdateCandidateListVisibility:(char)arg1;

@required
-(id)_web_superInputContext;
-(void)_web_superQuickLookWithEvent:(id)arg1;
-(void)_web_superRemoveTrackingRect:(long long)arg1;
-(void)_web_superSwipeWithEvent:(id)arg1;
-(void)_web_superMagnifyWithEvent:(id)arg1;
-(void)_web_superSmartMagnifyWithEvent:(id)arg1;
-(id)_web_superAccessibilityAttributeValue:(id)arg1;
-(void)_web_superDoCommandBySelector:(SEL)arg1;
-(char)_web_superPerformKeyEquivalent:(id)arg1;
-(void)_web_superKeyDown:(id)arg1;
-(id)_web_superHitTest:(CGPoint)arg1;
-(id)_web_immediateActionAnimationControllerForHitTestResultInternal:(HitTestResult*)arg1 withType:(unsigned)arg2 userData:(Object*)arg3;
-(void)_web_prepareForImmediateActionAnimation;
-(void)_web_cancelImmediateActionAnimation;
-(void)_web_completeImmediateActionAnimation;
-(void)_web_dismissContentRelativeChildWindows;
-(void)_web_dismissContentRelativeChildWindowsWithAnimation:(char)arg1;
-(void)_web_editorStateDidChange;
-(void)_web_gestureEventWasNotHandledByWebCore:(id)arg1;
-(void)_web_didChangeContentSize:(CGSize)arg1;
-(unsigned long long)_web_dragDestinationActionForDraggingInfo:(id)arg1;
-(void)_web_didPerformDragOperation:(char)arg1;
-(void)_web_grantDOMPasteAccess;

@end

