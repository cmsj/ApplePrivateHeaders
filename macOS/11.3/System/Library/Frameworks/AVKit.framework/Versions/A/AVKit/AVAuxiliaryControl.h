/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAuxiliaryControlsViewItem;
#import <AVKit/AVKit-Structs.h>
@class NSView;

@interface AVAuxiliaryControl : NSObject {

	char _displayed;
	char _animating;
	float _displayPriority;
	NSView*<AVAuxiliaryControlsViewItem> _controlView;
	CGSize _preferredSize;

}

@property (nonatomic,readonly) NSView*<AVAuxiliaryControlsViewItem> controlView;              //@synthesize controlView=_controlView - In the implementation block
@property (nonatomic,readonly) float displayPriority;                                         //@synthesize displayPriority=_displayPriority - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize;                                          //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,readonly) char included; 
@property (assign,getter=isDisplayed,nonatomic) char displayed;                               //@synthesize displayed=_displayed - In the implementation block
@property (assign,getter=isAnimating,nonatomic) char animating;                               //@synthesize animating=_animating - In the implementation block
+(id)auxiliaryControlForView:(id)arg1 withDisplayPriority:(float)arg2 ;
+(CGSize)_preferredSizeForView:(id)arg1 ;
+(id)keyPathsForValuesAffectingIncluded;
-(CGSize)preferredSize;
-(char)isVisible;
-(char)isAnimating;
-(NSView*<AVAuxiliaryControlsViewItem>)controlView;
-(void)setDisplayed:(char)arg1 ;
-(float)displayPriority;
-(void)setAnimating:(char)arg1 ;
-(char)included;
-(char)isDisplayed;
@end

