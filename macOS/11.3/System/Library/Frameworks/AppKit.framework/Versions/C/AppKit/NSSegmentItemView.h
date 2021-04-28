/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSSegmentedCell, NSSegmentItem, NSSegmentItemBezelView, NSSegmentItemLabelView, NSSegmentItemImageView, NSColor, NSUserInterfaceCompressionOptions, NSString, NSImage, NSFont;

@interface NSSegmentItemView : NSView {

	NSSegmentedCell* _parentCell;
	NSSegmentItem* _segmentItemData;
	unsigned long long _controlSize;
	long long _segmentStyle;
	NSSegmentItemBezelView* _bezelView;
	NSSegmentItemLabelView* _labelView;
	NSSegmentItemImageView* _imageView;
	NSSegmentItemImageView* _menuIndicatorView;
	NSColor* _bezelTintColor;
	double _segmentWidth;
	CGSize _labelSize;
	char _drawsBezel;
	char _enabled;
	char _highlighted;
	char _emphasized;
	char _rollover;
	char _active;
	char _selected;
	char _leadingCap;
	char _trailingCap;
	char _leadingSeparator;
	char _trailingSeparator;
	long long _leadingSegmentHighlightState;
	long long _trailingSegmentHighlightState;
	char _showMenuIndicator;
	unsigned long long _imageScaling;
	long long _alignment;
	NSUserInterfaceCompressionOptions* _compressibleOptions;
	char _useSlidingSegmentStyle;
	char _isObserving;
	char _useTextToolbarStyle;

}

@property (__weak) NSSegmentedCell * parentCell;                                         //@synthesize parentCell=_parentCell - In the implementation block
@property (__weak) NSSegmentItem * segmentItemData;                                      //@synthesize segmentItemData=_segmentItemData - In the implementation block
@property (copy) NSString * label; 
@property (retain) NSImage * image; 
@property (assign) unsigned long long imageScaling; 
@property (assign) double segmentWidth;                                                  //@synthesize segmentWidth=_segmentWidth - In the implementation block
@property (readonly) CGRect labelRect; 
@property (readonly) CGRect imageRect; 
@property (assign) long long segmentStyle;                                               //@synthesize segmentStyle=_segmentStyle - In the implementation block
@property (assign) unsigned long long controlSize;                                       //@synthesize controlSize=_controlSize - In the implementation block
@property (assign) char drawsBezel;                                                      //@synthesize drawsBezel=_drawsBezel - In the implementation block
@property (retain) NSFont * font; 
@property (assign) char enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign) char highlighted;                                                     //@synthesize highlighted=_highlighted - In the implementation block
@property (assign) char emphasized;                                                      //@synthesize emphasized=_emphasized - In the implementation block
@property (assign) char rollover;                                                        //@synthesize rollover=_rollover - In the implementation block
@property (assign) char active;                                                          //@synthesize active=_active - In the implementation block
@property (assign) char selected;                                                        //@synthesize selected=_selected - In the implementation block
@property (assign) char leadingCap;                                                      //@synthesize leadingCap=_leadingCap - In the implementation block
@property (assign) char trailingCap;                                                     //@synthesize trailingCap=_trailingCap - In the implementation block
@property (assign) char leadingSeparator;                                                //@synthesize leadingSeparator=_leadingSeparator - In the implementation block
@property (assign) char trailingSeparator;                                               //@synthesize trailingSeparator=_trailingSeparator - In the implementation block
@property (assign) long long leadingSegmentHighlightState;                               //@synthesize leadingSegmentHighlightState=_leadingSegmentHighlightState - In the implementation block
@property (assign) long long trailingSegmentHighlightState;                              //@synthesize trailingSegmentHighlightState=_trailingSegmentHighlightState - In the implementation block
@property (assign) char showMenuIndicator;                                               //@synthesize showMenuIndicator=_showMenuIndicator - In the implementation block
@property (copy) NSColor * bezelTintColor;                                               //@synthesize bezelTintColor=_bezelTintColor - In the implementation block
@property (assign) long long alignment;                                                  //@synthesize alignment=_alignment - In the implementation block
@property (assign) NSUserInterfaceCompressionOptions * compressibleOptions;              //@synthesize compressibleOptions=_compressibleOptions - In the implementation block
@property (assign) char useSlidingSegmentStyle;                                          //@synthesize useSlidingSegmentStyle=_useSlidingSegmentStyle - In the implementation block
@property (assign) char useTextToolbarStyle;                                             //@synthesize useTextToolbarStyle=_useTextToolbarStyle - In the implementation block
-(void)dealloc;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(char)active;
-(void)setImage:(NSImage *)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(long long)alignment;
-(void)layout;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActive:(char)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(NSImage *)image;
-(void)viewDidMoveToWindow;
-(void)setHighlighted:(char)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)isAccessibilityElement;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(id)accessibilityChildrenAttribute;
-(NSFont *)font;
-(void)setFont:(NSFont *)arg1 ;
-(void)setSegmentStyle:(long long)arg1 ;
-(void)viewDidMoveToSuperview;
-(unsigned long long)imageScaling;
-(int)_vibrancyBlendMode;
-(NSColor *)bezelTintColor;
-(void)setBezelTintColor:(NSColor *)arg1 ;
-(double)lastBaselineOffsetFromBottom;
-(void)setEmphasized:(char)arg1 ;
-(char)highlighted;
-(void)_windowDidOrderOnScreen;
-(int)_vibrancyBlendModeForSegmentLabelView:(id)arg1 proposedBlendMode:(int)arg2 ;
-(id)_preferredAppearanceForSegmentLabelView:(id)arg1 ;
-(int)_vibrancyBlendModeForSegmentImageView:(id)arg1 proposedBlendMode:(int)arg2 ;
-(id)_preferredAppearanceForSegmentImageView:(id)arg1 ;
-(int)_vibrancyBlendModeForSegmentBezelView:(id)arg1 proposedBlendMode:(int)arg2 ;
-(NSSegmentItem *)segmentItemData;
-(void)_stopObserving;
-(void)_updateContentState;
-(void)_updateBezelView;
-(char)rollover;
-(void)_updateBezelAndContentsAnimated;
-(void)_updateCachedLabelSize;
-(void)_setupObserving;
-(NSSegmentedCell *)parentCell;
-(char)emphasized;
-(char)_showsDisabledStateInBezel;
-(char)leadingCap;
-(char)trailingCap;
-(char)leadingSeparator;
-(char)trailingSeparator;
-(long long)segmentStyle;
-(id)_coreUIState;
-(char)selected;
-(id)_coreUISegmentPosition;
-(long long)leadingSegmentHighlightState;
-(long long)trailingSegmentHighlightState;
-(char)useSlidingSegmentStyle;
-(char)useTextToolbarStyle;
-(id)_coreUIOptions;
-(id)_requestMetrics:(id)arg1 ;
-(char)_useLegacyContentInsets;
-(char)drawsBezel;
-(SCD_Struct_NS64)_segmentMetricsWithCompressionOptions:(id)arg1 ;
-(double)contentSpacing;
-(CGSize)_preferredImageAlignmentSize;
-(CGSize)_labelSize;
-(char)showMenuIndicator;
-(double)minimumLabelWidth;
-(double)segmentWidth;
-(double)_minimumContentWidthWithOptions:(id)arg1 ;
-(NSUserInterfaceCompressionOptions *)compressibleOptions;
-(CGSize)_minimumSegmentSizeWithOptions:(id)arg1 ;
-(double)_contentWidthWithOptions:(id)arg1 ;
-(CGSize)_preferredSegmentSizeWithOptions:(id)arg1 ;
-(CGSize)_minimumSegmentSize;
-(CGSize)_preferredSegmentSize;
-(double)_availableTruncationWidth;
-(NSEdgeInsets)_segmentAlignmentRectInsets;
-(CGRect)imageRect;
-(void)setImageRect:(CGRect)arg1 ;
-(void)setShowMenuIndicator:(char)arg1 ;
-(CGRect)labelRect;
-(id)labelView;
-(void)setLabelView:(id)arg1 ;
-(void)setParentCell:(NSSegmentedCell *)arg1 ;
-(void)setDrawsBezel:(char)arg1 ;
-(void)setSegmentItemData:(NSSegmentItem *)arg1 ;
-(void)setSegmentWidth:(double)arg1 ;
-(void)setRollover:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)setLeadingCap:(char)arg1 ;
-(void)setTrailingCap:(char)arg1 ;
-(void)setLeadingSeparator:(char)arg1 ;
-(void)setTrailingSeparator:(char)arg1 ;
-(void)setLeadingSegmentHighlightState:(long long)arg1 ;
-(void)setTrailingSegmentHighlightState:(long long)arg1 ;
-(void)setCompressibleOptions:(NSUserInterfaceCompressionOptions *)arg1 ;
-(void)setUseSlidingSegmentStyle:(char)arg1 ;
-(void)setUseTextToolbarStyle:(char)arg1 ;
@end
