/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSScrubberSelectionView.h>

@class NSColor;

@interface NSScrubberRoundedSelectionBackgroundView : NSScrubberSelectionView {

	NSColor* _tintColor;

}

@property (copy) NSColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)keyPathsForValuesInvalidatingDisplay;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSEdgeInsets)alignmentRectInsets;
-(NSColor *)tintColor;
-(void)setTintColor:(NSColor *)arg1 ;
-(void)_roundedBackgroundCommonInit;
@end

