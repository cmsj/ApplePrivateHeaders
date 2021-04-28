/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCollectionViewItem.h>

@class NSLayoutConstraint, NSArray, NSRoundedRectView;

@interface NSTouchBarCustomizationPalettePresetItem : NSCollectionViewItem {

	NSLayoutConstraint* _maxTextWidthConstraint;
	double _paletteScaleFactor;
	NSLayoutConstraint* _textSpacingConstraint;
	NSArray* _insetConstraints;
	NSRoundedRectView* _roundedRectView;

}
-(void)dealloc;
-(void)setRepresentedObject:(id)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityChildrenAttribute;
-(void)loadView;
-(id)accessibilityIdentifier;
-(id)accessibilityHelp;
-(void)applyLayoutAttributes:(id)arg1 ;
-(char)_viewControllerSupports10_10Features;
@end
