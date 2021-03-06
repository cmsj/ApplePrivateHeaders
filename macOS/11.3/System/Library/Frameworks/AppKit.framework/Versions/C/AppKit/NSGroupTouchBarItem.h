/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTouchBarItem.h>
#import <libobjc.A.dylib/NSTouchBarItemTypeGroup.h>

@class NSTouchBar, NSString, NSUserInterfaceCompressionOptions, NSArray;

@interface NSGroupTouchBarItem : NSTouchBarItem <NSTouchBarItemTypeGroup> {

	NSTouchBar* _groupTouchBar;
	NSString* _customizationLabel;
	long long _groupUserInterfaceLayoutDirection;
	struct {
		unsigned hasAutomaticLayoutDirection : 1;
		unsigned reserved : 31;
	}  _gtbiFlags;
	id _private;

}

@property (retain) NSTouchBar * groupTouchBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * customizationLabel; 
@property (assign) long long groupUserInterfaceLayoutDirection; 
@property (assign) char prefersEqualWidths; 
@property (assign) double preferredItemWidth; 
@property (readonly) NSUserInterfaceCompressionOptions * effectiveCompressionOptions; 
@property (copy) NSArray * prioritizedCompressionOptions; 
+(id)alertStyleGroupItemWithIdentifier:(id)arg1 ;
+(id)groupItemWithIdentifier:(id)arg1 items:(id)arg2 ;
+(id)groupItemWithIdentifier:(id)arg1 items:(id)arg2 allowedCompressionOptions:(id)arg3 ;
+(id)keyPathsForValuesAffectingEffectiveCompressibleUserInterfaceOptions;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_type;
-(id)initWithIdentifier:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setGroupUserInterfaceLayoutDirection:(long long)arg1 ;
-(NSTouchBar *)groupTouchBar;
-(id)makeViewForCustomizationPalette;
-(void)item:(id)arg1 minSize:(CGSize*)arg2 maxSize:(CGSize*)arg3 preferredSize:(CGSize*)arg4 ;
-(void)invalidateMeasurementsOfItem:(id)arg1 ;
-(NSString *)customizationLabel;
-(void)setCustomizationLabel:(NSString *)arg1 ;
-(void)setGroupTouchBar:(NSTouchBar *)arg1 ;
-(char)prefersEqualWidths;
-(double)preferredItemWidth;
-(NSArray *)prioritizedCompressionOptions;
-(void)setPrefersEqualWidths:(char)arg1 ;
-(void)setPreferredItemWidth:(double)arg1 ;
-(void)setPrioritizedCompressionOptions:(NSArray *)arg1 ;
-(void)_setGroupItems:(id)arg1 ;
-(void)setGroupHasAlertStyle:(char)arg1 ;
-(NSUserInterfaceCompressionOptions *)effectiveCompressionOptions;
-(char)groupHasAlertStyle;
-(void)frameChangesEnded;
-(double)_minimumWidthForCompressionOptions:(id)arg1 ;
-(id)_defaultCompressionOptionOrder;
-(char)hasAutomaticLayoutDirection;
-(void)setHasAutomaticLayoutDirection:(char)arg1 ;
-(long long)groupUserInterfaceLayoutDirection;
-(id)compressionGroupLayout;
-(void)_itemViewMinSize:(CGSize*)arg1 maxSize:(CGSize*)arg2 preferredSize:(CGSize*)arg3 stretchesContent:(char)arg4 ;
-(id)makeViewForCustomizationPreview;
-(CGSize)fallbackItemSizeForCustomization;
-(id)_makeContainerTouchBar;
@end

