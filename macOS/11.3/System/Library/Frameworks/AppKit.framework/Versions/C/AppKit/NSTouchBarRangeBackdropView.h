/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTouchBarRangeView;

@interface NSTouchBarRangeBackdropView : NSView {

	id _parentView;

}

@property (__weak) NSTouchBarRangeView * parentView; 
+(id)keyPathsForValuesInvalidatingDisplay;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSEdgeInsets)alignmentRectInsets;
-(void)drawRect:(CGRect)arg1 ;
-(void)_commonViewSetup;
-(id)_coreUIDrawOptions;
-(NSTouchBarRangeView *)parentView;
-(void)setParentView:(NSTouchBarRangeView *)arg1 ;
@end

