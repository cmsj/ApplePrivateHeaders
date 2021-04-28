/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSWindow.h>

@class NSComboBoxCell, NSWindow;

@interface NSComboBoxWindow : NSWindow {

	NSComboBoxCell* _comboBoxCell;
	NSWindow* _attachedToParent;

}
-(void)dealloc;
-(id)accessibilityParentAttribute;
-(char)accessibilityIsIgnored;
-(char)isKeyWindow;
-(void)makeKeyAndOrderFront:(id)arg1 ;
-(void)orderWindow:(long long)arg1 relativeTo:(long long)arg2 ;
-(void)orderOut:(id)arg1 ;
-(void)orderFront:(id)arg1 ;
-(char)canBecomeKeyWindow;
-(char)accessibilityIsChildOfApp;
-(char)hasKeyAppearance;
-(void)_commonAwake;
-(char)worksWhenModal;
-(void)_attachToParentWindow;
-(void)_detachFromParentWindow;
-(id)initWithContentRect:(CGRect)arg1 comboBoxCell:(id)arg2 ;
-(char)canBecomeVisibleWithoutLogin;
-(unsigned long long)shadowOptions;
-(char)hasShadow;
-(char)_allowsImplicitRemovalFromMovementGroup;
-(void)setShownAboveComboBox:(char)arg1 ;
@end
