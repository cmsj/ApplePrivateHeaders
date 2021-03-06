/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class ABPeoplePickerTableView;

@interface ABPeoplePickerSubrowGroupElement : NSObject {

	id _parent;
	ABPeoplePickerTableView* _tableView;
	long long _row;

}

@property (retain) id parent;                                        //@synthesize parent=_parent - In the implementation block
@property (assign) ABPeoplePickerTableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign) long long row;                                    //@synthesize row=_row - In the implementation block
-(void)dealloc;
-(id)parent;
-(id)accessibilityAttributeNames;
-(id)accessibilityWindowAttribute;
-(id)accessibilityParentAttribute;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(ABPeoplePickerTableView *)tableView;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(char)accessibilityShouldUseUniqueId;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
-(id)accessibilityHelpAttribute;
-(char)accessibilityIsHelpAttributeSettable;
-(id)accessibilityFocusedAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(void)accessibilitySetFocusedAttribute:(id)arg1 ;
-(char)accessibilityIsParentAttributeSettable;
-(char)accessibilityIsWindowAttributeSettable;
-(id)accessibilityPositionAttribute;
-(char)accessibilityIsPositionAttributeSettable;
-(id)accessibilitySizeAttribute;
-(char)accessibilityIsSizeAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(long long)row;
-(id)accessibilityChildrenAttribute;
-(void)setTableView:(ABPeoplePickerTableView *)arg1 ;
-(void)setParent:(id)arg1 ;
-(void)setRow:(long long)arg1 ;
-(id)initWithParent:(id)arg1 tableView:(id)arg2 row:(long long)arg3 ;
-(id)accessibilitySelectedAttributeOfChild:(id)arg1 ;
-(void)accessibilitySetSelectedAttributeOfChild:(id)arg1 toValue:(id)arg2 ;
-(CGSize)_accessibilitySizeOfChild:(id)arg1 ;
@end

