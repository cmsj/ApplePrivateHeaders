/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/AKNoteStickyViewDelegate.h>

@protocol AKNoteMarginViewDelegate;
@class AKAnnotationTheme, NSString, NSTextView, AKNoteStickyView;

@interface AKNoteMarginView : NSView <AKNoteStickyViewDelegate> {

	char _clickEligible;
	AKAnnotationTheme* _theme;
	NSString* _noteText;
	id<AKNoteMarginViewDelegate> _delegate;
	NSTextView* _textView;
	AKNoteStickyView* _noteView;

}

@property (assign,nonatomic) char clickEligible;                                        //@synthesize clickEligible=_clickEligible - In the implementation block
@property (nonatomic,retain) NSTextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) AKNoteStickyView * noteView;                               //@synthesize noteView=_noteView - In the implementation block
@property (nonatomic,retain) AKAnnotationTheme * theme;                                 //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) NSString * noteText;                                       //@synthesize noteText=_noteText - In the implementation block
@property (assign,nonatomic,__weak) id<AKNoteMarginViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)noteFont;
-(id<AKNoteMarginViewDelegate>)delegate;
-(void)setDelegate:(id<AKNoteMarginViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)setTextView:(NSTextView *)arg1 ;
-(NSTextView *)textView;
-(void)mouseUp:(id)arg1 ;
-(void)setTheme:(AKAnnotationTheme *)arg1 ;
-(AKAnnotationTheme *)theme;
-(NSString *)noteText;
-(void)setNoteText:(NSString *)arg1 ;
-(void)stickyViewWasClicked:(id)arg1 ;
-(char)clickEligible;
-(void)setClickEligible:(char)arg1 ;
-(AKNoteStickyView *)noteView;
-(void)setNoteView:(AKNoteStickyView *)arg1 ;
@end

