/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NUIArrangementContainer.h>
#import <libobjc.A.dylib/NUIGridArrangementDataSource.h>

@protocol SearchUIFeedbackDelegate;
@class SearchUICombinedCardSectionRowModel, NUIGridArrangement, NSMutableDictionary, NSMutableArray, NSString;

@interface SearchUICombinedCardSectionsView : NSView <NUIArrangementContainer, NUIGridArrangementDataSource> {

	char _hasAttributionFooter;
	SearchUICombinedCardSectionRowModel* _rowModel;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	NUIGridArrangement* _arrangement;
	NSMutableDictionary* _cardSectionsMapping;
	NSMutableArray* _uncacheableViews;
	NSMutableArray* _viewList;

}

@property (nonatomic,retain) NUIGridArrangement * arrangement;                                  //@synthesize arrangement=_arrangement - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cardSectionsMapping;                         //@synthesize cardSectionsMapping=_cardSectionsMapping - In the implementation block
@property (nonatomic,retain) NSMutableArray * uncacheableViews;                                 //@synthesize uncacheableViews=_uncacheableViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewList;                                         //@synthesize viewList=_viewList - In the implementation block
@property (assign) char hasAttributionFooter;                                                   //@synthesize hasAttributionFooter=_hasAttributionFooter - In the implementation block
@property (nonatomic,retain) SearchUICombinedCardSectionRowModel * rowModel;                    //@synthesize rowModel=_rowModel - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)layout;
-(char)isFlipped;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(long long)numberOfItemsInGridArrangement:(id)arg1 ;
-(id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(NSRange*)arg3 rows:(NSRange*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(SearchUICombinedCardSectionRowModel *)rowModel;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)setRowModel:(SearchUICombinedCardSectionRowModel *)arg1 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(id)visibleViewList;
-(void)setArrangement:(NUIGridArrangement *)arg1 ;
-(void)setCardSectionsMapping:(NSMutableDictionary *)arg1 ;
-(void)setUncacheableViews:(NSMutableArray *)arg1 ;
-(void)setViewList:(NSMutableArray *)arg1 ;
-(void)resetStateOfViews;
-(void)setHasAttributionFooter:(char)arg1 ;
-(NSMutableDictionary *)cardSectionsMapping;
-(NSMutableArray *)uncacheableViews;
-(NSMutableArray *)viewList;
-(NUIGridArrangement *)arrangement;
-(char)hasAttributionFooter;
@end

