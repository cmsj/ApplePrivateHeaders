/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <AppKit/NSView.h>

@class NSBezierPath, NSImage, PKPass, NSString;

@interface PKPassView : NSView {

	NSBezierPath* _clipPath;
	NSImage* _blurredBackground;
	NSImage* _cachedGradientOverlayImage;
	PKPass* _pass;
	NSString* _windowTitle;

}

@property (nonatomic,retain) PKPass * pass;                       //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) NSString * windowTitle;              //@synthesize windowTitle=_windowTitle - In the implementation block
+(void)drawNotchedNinePartImage:(id)arg1 inRect:(CGRect)arg2 ;
+(void)drawPerforatedNinePartImage:(id)arg1 inRect:(CGRect)arg2 ;
+(void)drawPlainNinePartImage:(id)arg1 inRect:(CGRect)arg2 ;
+(void)drawGradientOverlayWithBackgroundColor:(id)arg1 inRect:(CGRect)arg2 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(NSString *)windowTitle;
-(void)setWindowTitle:(NSString *)arg1 ;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(CGRect)innerRect;
-(void)drawMaskImage:(id)arg1 clipDirtyRect:(CGRect)arg2 ;
-(void)drawBackground;
-(void)drawBackgroundColor;
-(void)applyShadowToCurrentLayer;
-(void)drawBarcodeBackgroundInRect:(CGRect)arg1 ;
-(void)drawImage:(id)arg1 foregroundFilledInRect:(CGRect)arg2 ;
-(void)drawContainerBackgroundInRect:(CGRect)arg1 ;
@end

