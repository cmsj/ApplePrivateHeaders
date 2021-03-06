/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, IMKCandidate, NSNumber, NSIndexPath, IMKUICandidateItemLayout, NSString;

@interface IMKUICandidate : NSObject <NSCopying> {

	long long _alignment;
	double _annotationLeadingMargin;
	NSAttributedString* _annotationAttributedStringValue;
	IMKCandidate* _candidate;
	NSNumber* _hasDefinitionValue;
	NSNumber* _hasNoteValue;
	char _hidden;
	NSIndexPath* _indexPath;
	IMKUICandidateItemLayout* _layout;
	char _selected;
	double _spacing;
	CGSize _size;
	CGPoint _position;
	double _rightEdge;
	long long _selectionKeyAlignment;
	double _selectionKeyLeadingEdge;
	double _thickness;
	NSAttributedString* _titleAttributedStringValue;
	double _titleLeadingEdge;
	long long _truncationType;
	double _minimumSpacing;

}

@property (assign,nonatomic) long long alignment;                                             //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) double annotationLeadingMargin;                                  //@synthesize annotationLeadingMargin=_annotationLeadingMargin - In the implementation block
@property (nonatomic,retain) IMKCandidate * candidate;                                        //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,readonly) double finalLeadingEdgeForTitle; 
@property (nonatomic,readonly) char hasDefinition; 
@property (nonatomic,readonly) char hasNote; 
@property (assign,nonatomic) char hidden;                                                     //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                         //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) CGSize minimumContentSize; 
@property (nonatomic,readonly) CGSize intrinsicContentSize; 
@property (assign,nonatomic) CGPoint position;                                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) long long selectionKeyAlignment;                                 //@synthesize selectionKeyAlignment=_selectionKeyAlignment - In the implementation block
@property (assign,nonatomic) CGSize size;                                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double minimumSpacing;                                           //@synthesize minimumSpacing=_minimumSpacing - In the implementation block
@property (assign,nonatomic) double spacing;                                                  //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double thickness;                                                //@synthesize thickness=_thickness - In the implementation block
@property (assign,nonatomic) double rightEdge;                                                //@synthesize rightEdge=_rightEdge - In the implementation block
@property (assign,nonatomic) char selected;                                                   //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) double selectionKeyLeadingEdge;                                  //@synthesize selectionKeyLeadingEdge=_selectionKeyLeadingEdge - In the implementation block
@property (assign,nonatomic) double titleLeadingEdge;                                         //@synthesize titleLeadingEdge=_titleLeadingEdge - In the implementation block
@property (assign,nonatomic) long long truncationType;                                        //@synthesize truncationType=_truncationType - In the implementation block
@property (nonatomic,readonly) NSString * stringIdentifier; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,copy) NSAttributedString * annotationAttributedStringValue;              //@synthesize annotationAttributedStringValue=_annotationAttributedStringValue - In the implementation block
@property (nonatomic,copy) NSAttributedString * titleAttributedStringValue;                   //@synthesize titleAttributedStringValue=_titleAttributedStringValue - In the implementation block
@property (nonatomic,retain) IMKUICandidateItemLayout * layout;                               //@synthesize layout=_layout - In the implementation block
+(id)sharedTextStorage;
-(void)setTruncationType:(long long)arg1 ;
-(long long)truncationType;
-(void)setSelectionKeyAlignment:(long long)arg1 ;
-(void)setTitleLeadingEdge:(double)arg1 ;
-(NSAttributedString *)annotationAttributedStringValue;
-(NSAttributedString *)titleAttributedStringValue;
-(void)setAnnotationLeadingMargin:(double)arg1 ;
-(void)drawItemInView:(id)arg1 frame:(CGRect)arg2 ;
-(long long)selectionKeyAlignment;
-(void)setMinimumSpacing:(double)arg1 ;
-(double)titleLeadingEdge;
-(id)stringAttributes:(id)arg1 selected:(char)arg2 ;
-(id)attributedStringWithString:(id)arg1 attributes:(id)arg2 selected:(char)arg3 ;
-(void)setAnnotationAttributedStringValue:(NSAttributedString *)arg1 ;
-(void)setTitleAttributedStringValue:(NSAttributedString *)arg1 ;
-(double)finalLeadingEdgeForTitle;
-(double)minimumSpacing;
-(CGSize)contentSizeForMinimum:(char)arg1 ;
-(double)verticalPositionForStringSize:(CGSize)arg1 frame:(CGRect)arg2 ;
-(void)drawVerticalText:(id)arg1 frame:(CGRect)arg2 showAtTop:(char)arg3 margin:(double)arg4 ;
-(double)finalTrailingEdgeForAnnotation;
-(double)annotationLeadingMargin;
-(CGSize)extraAnnotationSize;
-(void)drawBackgroundInView:(id)arg1 frame:(CGRect)arg2 ;
-(void)drawSelectionInView:(id)arg1 frame:(CGRect)arg2 ;
-(void)drawTitleInView:(id)arg1 frame:(CGRect)arg2 ;
-(void)drawAnnotationInView:(id)arg1 frame:(CGRect)arg2 ;
-(double)selectionKeyLeadingEdge;
-(void)setSelectionKeyLeadingEdge:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(id)description;
-(double)length;
-(void)setHidden:(char)arg1 ;
-(char)hidden;
-(void)setSize:(CGSize)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(long long)alignment;
-(IMKUICandidateItemLayout *)layout;
-(NSIndexPath *)indexPath;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(CGRect)frame;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setLayout:(IMKUICandidateItemLayout *)arg1 ;
-(char)selected;
-(void)setSelected:(char)arg1 ;
-(IMKCandidate *)candidate;
-(void)setCandidate:(IMKCandidate *)arg1 ;
-(void)setThickness:(double)arg1 ;
-(double)thickness;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(char)hasNote;
-(char)isDummy;
-(double)rightEdge;
-(void)setRightEdge:(double)arg1 ;
-(CGSize)minimumContentSize;
-(NSString *)stringIdentifier;
-(char)hasDefinition;
@end

