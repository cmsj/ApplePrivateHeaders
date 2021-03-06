/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTouchBarItem.h>
#import <libobjc.A.dylib/NSTouchBarItemPositionAnimationDelegate.h>

@class NSCandidateListViewController, NSString, NSViewController, NSArray;

@interface NSCandidateListTouchBarItem : NSTouchBarItem <NSTouchBarItemPositionAnimationDelegate> {

	NSCandidateListViewController* _candidateViewController;
	NSString* _customizationLabel;
	NSViewController* _inputContextViewController;
	SCD_Struct_NS90 _clfbiFlags;

}

@property (readonly) NSCandidateListViewController * candidateListViewController; 
@property (__weak) NSView*<NSTextInputClient> client; 
@property (__weak) id<NSCandidateListTouchBarItemDelegate> delegate; 
@property (getter=isCollapsed) char collapsed; 
@property (assign) char allowsCollapsing; 
@property (getter=isCandidateListVisible,readonly) char candidateListVisible; 
@property (assign) char allowsTextInputContextCandidates; 
@property (copy) id attributedStringForCandidate; 
@property (copy,readonly) NSArray * candidates; 
@property (copy) NSString * customizationLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)standardWidth;
+(id)candidateBarAppearance;
+(id)keyPathsForValuesAffectingView;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSCandidateListTouchBarItemDelegate>)delegate;
-(void)setDelegate:(id<NSCandidateListTouchBarItemDelegate>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)view;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSView*<NSTextInputClient>)client;
-(void)setClient:(NSView*<NSTextInputClient>)arg1 ;
-(char)isCollapsed;
-(unsigned long long)itemPosition;
-(void)_commonInit;
-(NSString *)customizationLabel;
-(void)setCustomizationLabel:(NSString *)arg1 ;
-(id)viewController;
-(void)setCollapsed:(char)arg1 ;
-(char)allowsCollapsing;
-(void)setAllowsCollapsing:(char)arg1 ;
-(char)isCandidateListVisible;
-(NSArray *)candidates;
-(/*^block*/id)formattingBlock;
-(void)setFormattingBlock:(/*^block*/id)arg1 ;
-(void)setCandidates:(id)arg1 forSelectedRange:(NSRange)arg2 offset:(unsigned long long)arg3 inString:(id)arg4 rect:(CGRect)arg5 view:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)setCandidates:(id)arg1 forSelectedRange:(NSRange)arg2 inString:(id)arg3 ;
-(void)setCandidates:(id)arg1 forSelectedRange:(NSRange)arg2 inString:(id)arg3 rect:(CGRect)arg4 view:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)runPositionAnimation;
-(char)shouldAnimateNextLayoutPass;
-(void)setLimitsNumberOfCandidates:(char)arg1 ;
-(char)limitsNumberOfCandidates;
-(id)attributedStringForCandidate;
-(void)updateWithInsertionPointVisibility:(char)arg1 ;
-(void)_setTextInputContextViewController:(id)arg1 ;
-(id)_textInputContextViewController;
-(char)allowsTextInputContextCandidates;
-(NSCandidateListViewController *)candidateListViewController;
-(void)_automaticTextCompletionChanged:(id)arg1 ;
-(void)setAllowsTextInputContextCandidates:(char)arg1 ;
-(void)setAttributedStringForCandidate:(id)arg1 ;
-(void)_didChangeCandidateListVisibility;
@end

