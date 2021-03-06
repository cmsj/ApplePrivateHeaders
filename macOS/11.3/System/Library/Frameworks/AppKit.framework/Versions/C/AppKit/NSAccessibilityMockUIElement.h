/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSAccessibilityElement.h>

@class NSString;

@interface NSAccessibilityMockUIElement : NSAccessibilityElement {

	NSString* _role;
	NSString* _subrole;
	id _parent;

}
+(id)elementWithRole:(id)arg1 subrole:(id)arg2 parent:(id)arg3 ;
+(id)elementWithRole:(id)arg1 parent:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)accessibilityAttributeNames;
-(id)accessibilityWindowAttribute;
-(id)accessibilityParentAttribute;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)initWithRole:(id)arg1 subrole:(id)arg2 parent:(id)arg3 ;
-(id)initWithRole:(id)arg1 parent:(id)arg2 ;
-(char)accessibilityShouldUseUniqueId;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
-(id)accessibilitySubroleAttribute;
-(char)accessibilityIsSubroleAttributeSettable;
-(id)accessibilityHelpAttribute;
-(char)accessibilityIsHelpAttributeSettable;
-(id)accessibilityFocusedAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(void)accessibilitySetFocusedAttribute:(id)arg1 ;
-(char)accessibilityIsParentAttributeSettable;
-(char)accessibilityIsWindowAttributeSettable;
-(id)accessibilityTopLevelUIElementAttribute;
-(char)accessibilityIsTopLevelUIElementAttributeSettable;
-(id)accessibilityPositionAttribute;
-(char)accessibilityIsPositionAttributeSettable;
-(id)accessibilitySizeAttribute;
-(char)accessibilityIsSizeAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityHorizontalUnitDescriptionAttribute;
-(id)accessibilityVerticalUnitDescriptionAttribute;
@end

