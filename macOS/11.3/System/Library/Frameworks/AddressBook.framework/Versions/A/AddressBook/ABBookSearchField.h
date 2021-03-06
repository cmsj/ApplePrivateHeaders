/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSSearchField.h>

@class NSProgressIndicator, NSNumber;

@interface ABBookSearchField : NSSearchField {

	NSProgressIndicator* _progressIndicator;
	char _animatingProgress;
	char _hidesProgress;
	NSNumber* _trackingTag;

}

@property (assign,getter=isAnimatingProgress,nonatomic) char animatingProgress;              //@synthesize animatingProgress=_animatingProgress - In the implementation block
@property (assign,nonatomic) char hidesProgress;                                             //@synthesize hidesProgress=_hidesProgress - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setNeedsDisplay:(char)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)viewDidEndLiveResize;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)setAnimatingProgress:(char)arg1 ;
-(void)BookSearchField_commonInit;
-(id)bookSearchFieldCell;
-(void)resetTracking;
-(char)hidesProgress;
-(void)updateAnimationForState:(char)arg1 ;
-(void)clearTrackingIfNeeded;
-(void)setHidesProgress:(char)arg1 ;
-(char)isAnimatingProgress;
@end

