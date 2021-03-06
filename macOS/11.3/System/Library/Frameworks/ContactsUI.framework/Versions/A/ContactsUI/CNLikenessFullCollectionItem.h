/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLikenessCollectionItem.h>

@class CNAvatarViewController, NSImage;

@interface CNLikenessFullCollectionItem : CNLikenessCollectionItem {

	CNAvatarViewController* _avatarViewController;
	NSImage* _selectionImage;

}

@property (retain) CNAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (retain) NSImage * selectionImage;                                   //@synthesize selectionImage=_selectionImage - In the implementation block
-(void)setRepresentedObject:(id)arg1 ;
-(id)contentView;
-(void)loadView;
-(void)rightMouseDown:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)setSelected:(char)arg1 ;
-(CNAvatarViewController *)avatarViewController;
-(NSImage *)selectionImage;
-(void)setSelectionImage:(NSImage *)arg1 ;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(id)selectionBackgroundImage;
-(void)_updateEditabilityForSelectedState:(char)arg1 ;
-(void)_setLikeness:(id)arg1 ;
@end

