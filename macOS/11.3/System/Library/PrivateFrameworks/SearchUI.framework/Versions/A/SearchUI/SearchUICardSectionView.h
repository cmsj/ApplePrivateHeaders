/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <AppSupportUI/NUIContainerStackView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol SearchUIFeedbackDelegate;
@class NSView, SearchUICardSectionRowModel, NSViewController, SFCardSection, NSString;

@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerViewDelegate> {

	char _isCompactWidth;
	NSView* _contentView;
	SearchUICardSectionRowModel* _rowModel;
	NSViewController* _embeddedViewController;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	NSView* _leadingView;
	NSView* _leadingTextView;
	NSView* _chevronView;

}

@property (nonatomic,retain) SearchUICardSectionRowModel * rowModel;                            //@synthesize rowModel=_rowModel - In the implementation block
@property (nonatomic,retain) NSView * contentView;                                              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSView * chevronView;                                              //@synthesize chevronView=_chevronView - In the implementation block
@property (assign) char isCompactWidth;                                                         //@synthesize isCompactWidth=_isCompactWidth - In the implementation block
@property (nonatomic,readonly) SFCardSection * section; 
@property (readonly) NSViewController * embeddedViewController;                                 //@synthesize embeddedViewController=_embeddedViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (nonatomic,readonly) NSView * leadingView;                                            //@synthesize leadingView=_leadingView - In the implementation block
@property (nonatomic,readonly) NSView * leadingTextView;                                        //@synthesize leadingTextView=_leadingTextView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsRecyclingForCardSection:(id)arg1 ;
+(char)supportsCustomUserReportRequestAfforance;
+(id)dragTitleForCardSection:(id)arg1 ;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg1 ;
+(char)fillsBackgroundWithContentForCardSection:(id)arg1 ;
+(char)hasLeadingImageForCardSection:(id)arg1 ;
+(char)prefersNoSeparatorAboveCardSection:(id)arg1 ;
+(NSEdgeInsets)separatorInsetsForStyle:(int)arg1 cellView:(id)arg2 leadingView:(id)arg3 leadingTextView:(id)arg4 ;
-(NSString *)description;
-(void)resetCursorRects;
-(NSView *)contentView;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(void)setContentView:(NSView *)arg1 ;
-(SFCardSection *)section;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)setupContentView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(NSView *)leadingTextView;
-(void)updateWithRowModel:(id)arg1 ;
-(id)sendFeedbackForPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(void)didInvalidateSizeAnimate:(char)arg1 ;
-(SearchUICardSectionRowModel *)rowModel;
-(void)openPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)setRowModel:(SearchUICardSectionRowModel *)arg1 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)updateChevronVisible:(char)arg1 leaveSpaceForChevron:(char)arg2 ;
-(NSViewController *)embeddedViewController;
-(char)isCompactWidth;
-(void)setIsCompactWidth:(char)arg1 ;
-(NSView *)leadingView;
-(NSView *)chevronView;
-(void)setChevronView:(NSView *)arg1 ;
-(void)requestRemovalFromEnclosingView;
@end
