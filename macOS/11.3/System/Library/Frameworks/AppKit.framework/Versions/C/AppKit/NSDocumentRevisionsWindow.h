/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSWindow.h>

@class NSDocumentRevisionsView, CALayer, CABackdropLayer;

@interface NSDocumentRevisionsWindow : NSWindow {

	NSDocumentRevisionsView* view;
	CALayer* dpLayer;
	CABackdropLayer* rootBackdropLayer;

}

@property (readonly) NSDocumentRevisionsView * view; 
@property (readonly) CALayer * dpLayer; 
-(NSDocumentRevisionsView *)view;
-(void)sendEvent:(id)arg1 ;
-(id)accessibilitySubroleAttribute;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(char)canBecomeKeyWindow;
-(char)canBecomeMainWindow;
-(id)accessibilityTitleAttribute;
-(id)initWithController:(id)arg1 ;
-(char)_allowsOrdering;
-(CALayer *)dpLayer;
@end

