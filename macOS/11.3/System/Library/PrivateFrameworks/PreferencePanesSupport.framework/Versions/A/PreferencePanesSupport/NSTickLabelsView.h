/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PreferencePanesSupport.framework/Versions/A/PreferencePanesSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencePanesSupport/PreferencePanesSupport-Structs.h>
#import <AppKit/NSView.h>

@class NSUpActionSlider, NSMutableDictionary, NSArray;

@interface NSTickLabelsView : NSView {

	NSUpActionSlider* fSlider;
	NSMutableDictionary* fTickLabelFontAttributes;
	NSArray* fTickLabels;

}
-(void)setSlider:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFontAttributes:(id)arg1 ;
-(void)setTickLabels:(id)arg1 ;
@end

