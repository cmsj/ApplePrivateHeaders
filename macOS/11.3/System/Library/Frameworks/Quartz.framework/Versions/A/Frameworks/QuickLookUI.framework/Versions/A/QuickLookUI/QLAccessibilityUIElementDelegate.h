/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLAccessibilityUIElementDelegate <NSObject>
@optional
-(char)accessibilityPerformPress:(id)arg1;
-(CGRect*)frameForUIElementInParentSpace:(id)arg1;
-(CGRect*)frameForUIElement:(id)arg1;
-(id)accessibilityAttributeValue:(id)arg1 forUIElementWithIdentifier:(id)arg2;
-(id)accessibilityAdditionalAttributeNamesForUIElementWithIdentifier:(id)arg1;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 forUIElementWithIdentifier:(id)arg3;
-(char)accessibilityIsAttributeSettable:(id)arg1 forUIElementWithIdentifier:(id)arg2;
-(id)accessibilityActionNamesForUIElementWithIdentifier:(id)arg1;
-(void)accessibilityPerformAction:(id)arg1 forUIElementWithIdentifier:(id)arg2;
-(CGRect*)frameForUIElementWithIdentifier:(id)arg1;
-(CGRect*)frameForUIElementInParentSpaceWithIdentifier:(id)arg1;
-(char)accessibilityPerformIncrement:(id)arg1;
-(char)accessibilityPerformDecrement:(id)arg1;
-(id)accessibilityLabelFor:(id)arg1;
-(id)accessibilityIdentifierFor:(id)arg1;
-(id)accessibilityValueFor:(id)arg1;
-(void)setAccessibilityValue:(id)arg1 for:(id)arg2;

@end

