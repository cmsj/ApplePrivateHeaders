/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSMenuItemViewerLike.h>

@class NSMenuItem, NSView, NSString;

@interface NSMenuWindowManagerItemViewer : NSView <NSMenuItemViewerLike> {

	NSMenuItem* _menuItem;
	NSView* _menuItemView;
	struct {
		unsigned settingSize : 1;
		unsigned drawnFromCarbon : 1;
		unsigned installedWidthConstraints : 1;
		unsigned reserved : 29;
	}  _menuItemViewerFlags;
	void* _hiView;
	CGSize _minimumViewSize;
	id _rememberedFirstResponder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CFStringRef)_getMenuItemViewerHIViewClassRegisteringIfNecessary;
+(Class)_classToCheckForRequiresConstraintBasedLayout;
-(void)dealloc;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)_menuItemViewFrameChanged:(id)arg1 ;
-(id)_menuItem;
-(id)initWithFrame:(CGRect)arg1 forMenuItem:(id)arg2 ;
-(id)_menuItemView;
-(void)_clearMenuItem;
-(void)_setMenuItemView:(id)arg1 ;
-(void)_setHIView:(void*)arg1 ;
-(void*)_hiView;
-(CGSize)_minimumViewSize;
-(char)wantsDefaultClipping;
-(char)clipsToBounds;
-(id)_enclosingMenuItem;
-(id)opaqueAncestor;
-(char)_isContainedInMenu;
-(char)_rememberAndResignFirstResponder;
-(char)_restoreOrBecomeFirstResponder;
-(id)accessibilityAttributeNames;
-(id)accessibilityWindowAttribute;
-(id)accessibilityParentAttribute;
@end

