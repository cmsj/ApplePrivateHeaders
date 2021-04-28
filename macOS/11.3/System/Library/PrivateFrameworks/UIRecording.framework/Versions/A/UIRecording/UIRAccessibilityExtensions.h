/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIRecording.framework/Versions/A/UIRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIRecording/UIRecording-Structs.h>
@interface UIRAccessibilityExtensions : NSObject
+(id)valueOfExistingAttribute:(CFStringRef)arg1 ofUIElement:(AXUIElementRef)arg2 ;
+(id)englishNameOfUIElement:(AXUIElementRef)arg1 ;
+(id)UIElementDictionary;
+(char)validateTitle:(id)arg1 ;
+(char)_verifyGrabbingIsEnabledAndAlertIfNecessary:(char)arg1 ;
+(id)UIElementRoleDescriptionsForRoles;
+(char)isRoleContainer:(id)arg1 ;
+(id)textForUIElement:(AXUIElementRef)arg1 outHTML:(id*)arg2 ;
+(id)descriptionForUIEventWithChildrenStack:(id)arg1 outHTML:(id*)arg2 ;
+(id)actionsForElementRef:(AXUIElementRef)arg1 ;
+(id)englishDescriptionForAction:(id)arg1 withUIElement:(AXUIElementRef)arg2 ;
+(id)englishDescriptionFormatStringWithUIElement:(AXUIElementRef)arg1 ;
+(void)grab:(CGRect)arg1 windowNum:(unsigned)arg2 ;
+(id)imageForUIElement:(AXUIElementRef)arg1 ;
@end
