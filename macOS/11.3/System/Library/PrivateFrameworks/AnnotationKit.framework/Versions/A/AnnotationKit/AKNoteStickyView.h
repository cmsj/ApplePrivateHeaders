/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSView.h>

@protocol AKNoteStickyViewDelegate;
@class AKAnnotationTheme, NSColor, NSBox, NSTrackingArea;

@interface AKNoteStickyView : NSView {

	char _isNoteMarker;
	char _mouseInView;
	char _clickPossible;
	AKAnnotationTheme* _theme;
	NSColor* _themeColor;
	id<AKNoteStickyViewDelegate> _delegate;
	NSBox* _boxView;
	NSTrackingArea* _mouseTrackingArea;

}

@property (nonatomic,retain) NSBox * boxView;                                           //@synthesize boxView=_boxView - In the implementation block
@property (assign) char mouseInView;                                                    //@synthesize mouseInView=_mouseInView - In the implementation block
@property (assign) char clickPossible;                                                  //@synthesize clickPossible=_clickPossible - In the implementation block
@property (nonatomic,retain) NSTrackingArea * mouseTrackingArea;                        //@synthesize mouseTrackingArea=_mouseTrackingArea - In the implementation block
@property (nonatomic,retain) AKAnnotationTheme * theme;                                 //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic) char isNoteMarker;                                         //@synthesize isNoteMarker=_isNoteMarker - In the implementation block
@property (nonatomic,retain) NSColor * themeColor;                                      //@synthesize themeColor=_themeColor - In the implementation block
@property (assign,nonatomic,__weak) id<AKNoteStickyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AKNoteStickyViewDelegate>)delegate;
-(void)setDelegate:(id<AKNoteStickyViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(NSColor *)themeColor;
-(void)setThemeColor:(NSColor *)arg1 ;
-(void)setTheme:(AKAnnotationTheme *)arg1 ;
-(AKAnnotationTheme *)theme;
-(char)mouseInView;
-(void)setIsNoteMarker:(char)arg1 ;
-(void)p_updateColors;
-(char)isNoteMarker;
-(NSBox *)boxView;
-(void)setBoxView:(NSBox *)arg1 ;
-(void)setMouseInView:(char)arg1 ;
-(char)clickPossible;
-(void)setClickPossible:(char)arg1 ;
-(NSTrackingArea *)mouseTrackingArea;
-(void)setMouseTrackingArea:(NSTrackingArea *)arg1 ;
@end

