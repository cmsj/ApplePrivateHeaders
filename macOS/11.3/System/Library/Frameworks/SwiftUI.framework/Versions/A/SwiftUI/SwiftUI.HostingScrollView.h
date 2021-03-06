/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SwiftUI/SwiftUI-Structs.h>
#import <AppKit/NSScrollView.h>

@interface SwiftUI.HostingScrollView : NSScrollView {

	 viewType;
	 state;
	 host;
	 layoutDirection;
	 ignoreUpdates;
	 pendingUpdate;
	 animationTarget;
	 animationOffset;
	 isAnimatingScroll;
	 isAnimationCompletionCheckPending;
	 isTracking;
	 configuration;

}
+(Class)_verticalScrollerClass;
+(char)isCompatibleWithResponsiveScrolling;
+(Class)_horizontalScrollerClass;
-(id)hitTest:(CGPoint)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_nextResponderForEvent:(id)arg1 ;
-(void)scrollViewDidScrollWithNotification:(id)arg1 ;
-(void)scrollViewDidBeginLiveScrollingWithNotification:(id)arg1 ;
-(void)scrollViewDidEndLiveScrollingWithNotification:(id)arg1 ;
-(void)preferredScrollerStyleDidChangeWithNotification:(id)arg1 ;
@end

