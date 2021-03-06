/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AppKit/NSView.h>

@protocol AKPinFieldViewDelegate;
@class NSImage, NSArray, NSString, NSButton;

@interface AKPinFieldView : NSView {

	NSImage* _digitField;
	NSArray* _pinFieldBoxArray;
	CGRect* _digitRects;
	CGRect _progressRect;
	NSString* _localizedString;
	NSString* _pinString;
	int _position;
	double _maxFontHeight;
	char _enabled;
	char _echosBullets;
	char _supportsRTL;
	int _pinLength;
	struct {
		unsigned pinFieldViewTextDidChange : 1;
		unsigned pinFieldViewTextDidComplete : 1;
		unsigned padding : 6;
	}  _delegateFlags;
	id<AKPinFieldViewDelegate> _delegate;
	NSButton* _nextButtonResponder;
	unsigned long long _chunkingStyle;

}

@property (assign) char supportsRTL;                                                  //@synthesize supportsRTL=_supportsRTL - In the implementation block
@property (assign) unsigned long long chunkingStyle;                                  //@synthesize chunkingStyle=_chunkingStyle - In the implementation block
@property (assign,nonatomic,__weak) id<AKPinFieldViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char echosBullets;                                       //@synthesize echosBullets=_echosBullets - In the implementation block
@property (retain) NSButton * nextButtonResponder;                                    //@synthesize nextButtonResponder=_nextButtonResponder - In the implementation block
+(CGSize)viewSizeWithLength:(int)arg1 chunkingStyle:(unsigned long long)arg2 ;
+(CGSize)digitViewSizeWithLength:(int)arg1 ;
-(id<AKPinFieldViewDelegate>)delegate;
-(void)setDelegate:(id<AKPinFieldViewDelegate>)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)setEchosBullets:(char)arg1 ;
-(char)echosBullets;
-(CGSize)viewSize;
-(id)initWithFrame:(CGRect)arg1 pinLength:(int)arg2 ;
-(id)PINString;
-(void)clearPIN;
-(char)PINCompleted;
-(id)initWithFrame:(CGRect)arg1 pinLength:(int)arg2 supportsRTL:(char)arg3 chunkingStyle:(unsigned long long)arg4 ;
-(int)PINLength;
-(unsigned long long)chunkingStyle;
-(void)_setupDigitMaxHeight;
-(void)setSupportsRTL:(char)arg1 ;
-(CGSize)digitViewSize;
-(void)setChunkingStyle:(unsigned long long)arg1 ;
-(void)_setupDigitRectsWithFrame:(CGRect)arg1 ;
-(id)_digitFontAttributes;
-(void)drawFocusRingOnRect:(CGRect)arg1 ;
-(NSButton *)nextButtonResponder;
-(void)_handleBackspaceEvent;
-(void)_appendNewCharacterWithEvent:(id)arg1 ;
-(id)_axBoxChildren;
-(void)_delayedPostAccessibilityFocusChange;
-(void)handleTextChange;
-(CGRect)rectForIndex:(int)arg1 ;
-(int)activeInputIndex;
-(char)supportsRTL;
-(void)setNextButtonResponder:(NSButton *)arg1 ;
-(char)shouldChunkIntoPairs;
-(id)_axChildren;
@end

