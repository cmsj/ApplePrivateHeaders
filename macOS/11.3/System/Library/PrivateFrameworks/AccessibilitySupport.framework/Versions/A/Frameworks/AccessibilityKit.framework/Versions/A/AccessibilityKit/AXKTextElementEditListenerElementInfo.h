/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityKit.framework/Versions/A/AccessibilityKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityKit/AccessibilityKit-Structs.h>
@class AXKElementController, NSAttributedString, AXFTextRange, NSString;

@interface AXKTextElementEditListenerElementInfo : NSObject {

	char _isEditable;
	char _isSpotlight;
	char _hasActiveInlineSession;
	char _isPreFetchInfo;
	char _isLastLineNewLine;
	AXKElementController* _elementController;
	long long _numberOfCharacters;
	NSAttributedString* _currentLineContent;
	AXFTextRange* _selectedRangeWithinLineContent;
	AXFTextRange* _selectedTextRange;
	AXFTextRange* _currentLineContentRange;
	NSString* _deletionCandidateText;
	long long _alignment;
	CGRect _textElementFrame;
	CGRect _editingLineFrame;
	CGRect _selectionRangeFrame;
	CGRect _elementWindowRect;

}

@property (nonatomic,retain) AXKElementController * elementController;                   //@synthesize elementController=_elementController - In the implementation block
@property (assign,nonatomic) long long numberOfCharacters;                               //@synthesize numberOfCharacters=_numberOfCharacters - In the implementation block
@property (nonatomic,copy) NSAttributedString * currentLineContent;                      //@synthesize currentLineContent=_currentLineContent - In the implementation block
@property (nonatomic,retain) AXFTextRange * selectedRangeWithinLineContent;              //@synthesize selectedRangeWithinLineContent=_selectedRangeWithinLineContent - In the implementation block
@property (nonatomic,retain) AXFTextRange * selectedTextRange;                           //@synthesize selectedTextRange=_selectedTextRange - In the implementation block
@property (nonatomic,retain) AXFTextRange * currentLineContentRange;                     //@synthesize currentLineContentRange=_currentLineContentRange - In the implementation block
@property (nonatomic,copy) NSString * deletionCandidateText;                             //@synthesize deletionCandidateText=_deletionCandidateText - In the implementation block
@property (assign,nonatomic) long long alignment;                                        //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) char isEditable;                                            //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) char isSpotlight;                                           //@synthesize isSpotlight=_isSpotlight - In the implementation block
@property (assign,nonatomic) char hasActiveInlineSession;                                //@synthesize hasActiveInlineSession=_hasActiveInlineSession - In the implementation block
@property (assign,nonatomic) char isPreFetchInfo;                                        //@synthesize isPreFetchInfo=_isPreFetchInfo - In the implementation block
@property (assign,nonatomic) char isLastLineNewLine;                                     //@synthesize isLastLineNewLine=_isLastLineNewLine - In the implementation block
@property (assign,nonatomic) CGRect textElementFrame;                                    //@synthesize textElementFrame=_textElementFrame - In the implementation block
@property (assign,nonatomic) CGRect editingLineFrame;                                    //@synthesize editingLineFrame=_editingLineFrame - In the implementation block
@property (assign,nonatomic) CGRect selectionRangeFrame;                                 //@synthesize selectionRangeFrame=_selectionRangeFrame - In the implementation block
@property (assign,nonatomic) CGRect elementWindowRect;                                   //@synthesize elementWindowRect=_elementWindowRect - In the implementation block
-(void)setAlignment:(long long)arg1 ;
-(long long)alignment;
-(char)isEditable;
-(AXFTextRange *)selectedTextRange;
-(void)setIsEditable:(char)arg1 ;
-(void)setSelectedTextRange:(AXFTextRange *)arg1 ;
-(long long)numberOfCharacters;
-(id)initWithElementController:(id)arg1 ;
-(void)setNumberOfCharacters:(long long)arg1 ;
-(char)isSpotlight;
-(void)setIsSpotlight:(char)arg1 ;
-(void)setSelectedRangeWithinLineContent:(AXFTextRange *)arg1 ;
-(void)setCurrentLineContent:(NSAttributedString *)arg1 ;
-(void)setElementWindowRect:(CGRect)arg1 ;
-(void)setTextElementFrame:(CGRect)arg1 ;
-(void)setEditingLineFrame:(CGRect)arg1 ;
-(void)setSelectionRangeFrame:(CGRect)arg1 ;
-(void)setIsPreFetchInfo:(char)arg1 ;
-(void)setCurrentLineContentRange:(AXFTextRange *)arg1 ;
-(NSString *)deletionCandidateText;
-(AXKElementController *)elementController;
-(AXFTextRange *)selectedRangeWithinLineContent;
-(NSAttributedString *)currentLineContent;
-(void)setDeletionCandidateText:(NSString *)arg1 ;
-(void)setHasActiveInlineSession:(char)arg1 ;
-(AXFTextRange *)currentLineContentRange;
-(char)hasActiveInlineSession;
-(void)setIsLastLineNewLine:(char)arg1 ;
-(char)isLastLineNewLine;
-(CGRect)editingLineFrame;
-(CGRect)textElementFrame;
-(void)setElementController:(AXKElementController *)arg1 ;
-(char)isPreFetchInfo;
-(CGRect)selectionRangeFrame;
-(CGRect)elementWindowRect;
@end

