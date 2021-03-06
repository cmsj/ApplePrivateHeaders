/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/Versions/A/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol OBAnimationAppearanceChangeDelegate;
@class CALayer, CAPackage, NSString;

@interface OBAnimationView : NSView <CALayerDelegate> {

	char _flipForRTL;
	char _useAccentColor;
	char _needsBrightnessAdjustment;
	char _accentUsesHSV;
	double _scale;
	id<OBAnimationAppearanceChangeDelegate> _appearanceChangeDelegate;
	CALayer* _packageLayer;
	CAPackage* _package;
	double _accentRadianDelta;
	double _accentBrightnessValue;
	CGRect _preferredFrame;

}

@property (nonatomic,retain) CALayer * packageLayer;                                                               //@synthesize packageLayer=_packageLayer - In the implementation block
@property (nonatomic,retain) CAPackage * package;                                                                  //@synthesize package=_package - In the implementation block
@property (assign,nonatomic) CGRect preferredFrame;                                                                //@synthesize preferredFrame=_preferredFrame - In the implementation block
@property (assign,nonatomic) char needsBrightnessAdjustment;                                                       //@synthesize needsBrightnessAdjustment=_needsBrightnessAdjustment - In the implementation block
@property (assign,nonatomic) double accentRadianDelta;                                                             //@synthesize accentRadianDelta=_accentRadianDelta - In the implementation block
@property (assign,nonatomic) double accentBrightnessValue;                                                         //@synthesize accentBrightnessValue=_accentBrightnessValue - In the implementation block
@property (assign,nonatomic) char accentUsesHSV;                                                                   //@synthesize accentUsesHSV=_accentUsesHSV - In the implementation block
@property (assign) double scale;                                                                                   //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic,__weak) id<OBAnimationAppearanceChangeDelegate> appearanceChangeDelegate;              //@synthesize appearanceChangeDelegate=_appearanceChangeDelegate - In the implementation block
@property (assign) char flipForRTL;                                                                                //@synthesize flipForRTL=_flipForRTL - In the implementation block
@property (assign) char useAccentColor;                                                                            //@synthesize useAccentColor=_useAccentColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CAPackage *)package;
-(double)scale;
-(void)setPackage:(CAPackage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(double)defaultScale;
-(void)setAppearanceChangeDelegate:(id<OBAnimationAppearanceChangeDelegate>)arg1 ;
-(void)setPackage:(id)arg1 sizingTransformScale:(double)arg2 ;
-(void)appearanceChanged:(id)arg1 ;
-(CGRect)preferredFrame;
-(void)_setPackage:(id)arg1 ;
-(CALayer *)packageLayer;
-(void)setPackageLayer:(CALayer *)arg1 ;
-(char)useAccentColor;
-(void)addAccentColorToLayer:(id)arg1 ;
-(char)flipForRTL;
-(id<OBAnimationAppearanceChangeDelegate>)appearanceChangeDelegate;
-(char)isDark;
-(void)setFlipForRTL:(char)arg1 ;
-(void)setUseAccentColor:(char)arg1 ;
-(void)setPreferredFrame:(CGRect)arg1 ;
-(char)needsBrightnessAdjustment;
-(void)setNeedsBrightnessAdjustment:(char)arg1 ;
-(double)accentRadianDelta;
-(void)setAccentRadianDelta:(double)arg1 ;
-(double)accentBrightnessValue;
-(void)setAccentBrightnessValue:(double)arg1 ;
-(char)accentUsesHSV;
-(void)setAccentUsesHSV:(char)arg1 ;
@end

