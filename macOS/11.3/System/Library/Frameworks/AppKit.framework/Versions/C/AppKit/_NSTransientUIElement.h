/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSTransientUIElement <NSObject>
@property (setter=_setRegisteredTransientBehavior:) long long _registeredTransientBehavior; 
@property (readonly) long long _transientBehavior; 
@property (getter=isDetached,readonly) char detached; 
@optional
-(char)isDetached;

@required
-(long long)_registeredTransientBehavior;
-(void)_setRegisteredTransientBehavior:(long long)arg1;
-(long long)_transientBehavior;
-(char)_isAffectedByEventsInWindow:(id)arg1;
-(void)_closeForNonDragOrResizeClickWithEvent:(id)arg1;
-(void)_closeForKeyDownEvent:(id)arg1;
-(void)_closeForSheetPresentingOnWindow:(id)arg1;
-(void)_closeForToolbarPresentingOnWindow:(id)arg1;

@end

