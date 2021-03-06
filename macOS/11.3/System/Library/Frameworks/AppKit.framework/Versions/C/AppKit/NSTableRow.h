/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSTableView;

@interface NSTableRow : NSObject {

	NSTableView* _tableView;
	long long _row;

}
+(id)tableRow:(long long)arg1 ofTableView:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)accessibilityAttributeNames;
-(id)accessibilityWindowAttribute;
-(id)accessibilityParentAttribute;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
-(id)accessibilitySubroleAttribute;
-(char)accessibilityIsSubroleAttributeSettable;
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
-(char)accessibilitySupportsNotifications;
-(long long)row;
-(id)accessibilityChildrenAttribute;
-(id)_accessibilityChildUIElementForSpecifierComponent:(long long)arg1 ;
-(long long)_accessibilitySpecifierComponentForChildUIElement:(id)arg1 registerIfNeeded:(char)arg2 ;
-(id)accessibilityChildrenInNavigationOrderAttribute;
-(char)accessibilityIsChildrenAttributeSettable;
-(id)deepestAccessibilityDescendants;
-(id)accessibilityVisibleChildrenAttribute;
-(char)accessibilityIsVisibleChildrenAttributeSettable;
-(id)accessibilitySelectedAttribute;
-(id)accessibilityIndexAttribute;
-(id)_accessibilityChildrenWithIndexes:(id)arg1 ;
-(long long)_childrenCount;
-(char)accessibilityHasOutlineColumnMockGroupForRow:(long long)arg1 column:(long long)arg2 ;
-(char)accessibilityIsSelectedAttributeSettable;
-(void)accessibilitySetSelectedAttribute:(id)arg1 ;
-(char)accessibilityIsIndexAttributeSettable;
-(id)initWithRow:(long long)arg1 ofTableView:(id)arg2 ;
-(char)_canDeselect;
@end

