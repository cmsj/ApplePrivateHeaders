/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemUIPlugin.framework/Versions/A/SystemUIPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemUIPlugin/SystemUIPlugin-Structs.h>
#import <AppKit/NSAccessibilityElement.h>

@class NSMenuExtra;

@interface NSMenuExtraAccessibilityElement : NSAccessibilityElement {

	NSMenuExtra* _menuExtra;

}
-(id)accessibilitySubrole;
-(id)accessibilityParent;
-(id)accessibilityChildren;
-(id)accessibilityRole;
-(id)accessibilityLabel;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityRoleDescription;
-(char)isAccessibilityFocused;
-(char)accessibilityPerformCancel;
-(char)accessibilityPerformPress;
-(id)accessibilityTopLevelUIElement;
-(id)accessibilityValue;
-(id)accessibilityTitle;
-(char)isAccessibilitySelected;
-(void)setAccessibilitySelected:(char)arg1 ;
-(id)accessibilityWindow;
-(char)isAccessibilityEnabled;
-(id)initWithMenuExtra:(id)arg1 ;
@end

