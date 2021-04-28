/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSArray, NSImageRep;

@interface _NSToolbarImageRepView : NSView {

	NSArray* _itemIdentifiers;
	NSImageRep* _activeImageRep;
	NSImageRep* _inactiveImageRep;
	CGSize logicalImageSize;

}

@property (assign,nonatomic) CGSize logicalImageSize; 
-(void)dealloc;
-(char)isOpaque;
-(id)accessibilityAttributeNames;
-(CGSize)intrinsicContentSize;
-(void)mouseDown:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(id)accessibilityDescriptionAttribute;
-(char)accessibilityIsDescriptionAttributeSettable;
-(id)accessibilityEnabledAttribute;
-(char)accessibilityIsEnabledAttributeSettable;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)_windowChangedKeyState;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(id)_itemIdentifiers;
-(id)_computeDragImage;
-(char)_isPaletteView;
-(CGSize)logicalImageSize;
-(void)setLogicalImageSize:(CGSize)arg1 ;
-(void)setActiveImageRep:(id)arg1 inactiveImageRep:(id)arg2 forItemIdentifiers:(id)arg3 ;
-(void)sizeWidthToFit;
-(void)sizeHeightToFit;
-(CGSize)sizeWhenSizedToFit;
-(id)_validDestinationForDragsWeInitiate;
-(id)_activeImageRep;
-(id)_inactiveImageRep;
@end
