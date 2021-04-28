/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>

@class TLKGridLayoutManager, TLKTableRow, NSMutableArray;

@interface TLKGridRowView : TLKView {

	char _needsSizingPass;
	TLKGridLayoutManager* _manager;
	TLKTableRow* _tableRow;
	NSMutableArray* _labels;
	NSMutableArray* _imageViews;
	NSMutableArray* _currentListOfViews;
	unsigned long long _indexOfFirstCenteredColumnForForcedCentering;
	unsigned long long _indexOfFirstTrailingColumn;

}

@property (nonatomic,retain) NSMutableArray * labels;                                                      //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageViews;                                                  //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentListOfViews;                                          //@synthesize currentListOfViews=_currentListOfViews - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfFirstCenteredColumnForForcedCentering;              //@synthesize indexOfFirstCenteredColumnForForcedCentering=_indexOfFirstCenteredColumnForForcedCentering - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfFirstTrailingColumn;                                //@synthesize indexOfFirstTrailingColumn=_indexOfFirstTrailingColumn - In the implementation block
@property (assign,nonatomic) char needsSizingPass;                                                         //@synthesize needsSizingPass=_needsSizingPass - In the implementation block
@property (nonatomic,retain) TLKGridLayoutManager * manager;                                               //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) TLKTableRow * tableRow;                                                       //@synthesize tableRow=_tableRow - In the implementation block
+(void)updateLabel:(id)arg1 withRichText:(id)arg2 alignment:(long long)arg3 ;
-(id)init;
-(TLKGridLayoutManager *)manager;
-(void)setManager:(TLKGridLayoutManager *)arg1 ;
-(void)layout;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSMutableArray *)labels;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(char)isLayoutSizeDependentOnPerpendicularAxis;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
-(void)observedPropertiesChanged;
-(id)leadingTextView;
-(void)setCurrentListOfViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentListOfViews;
-(TLKTableRow *)tableRow;
-(void)setNeedsSizingPass:(char)arg1 ;
-(char)needsSizingPass;
-(unsigned long long)indexOfFirstCenteredColumnForForcedCentering;
-(unsigned long long)indexOfFirstTrailingColumn;
-(void)resetStateOfAllViews;
-(void)generateLabelsAndImagesIfNecessary;
-(void)setIndexOfFirstCenteredColumnForForcedCentering:(unsigned long long)arg1 ;
-(void)setIndexOfFirstTrailingColumn:(unsigned long long)arg1 ;
-(void)setTableRow:(TLKTableRow *)arg1 ;
@end
