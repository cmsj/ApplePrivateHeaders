/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>

@class TLKHeaderView;

@interface SearchUIRichTitleCardSectionView : SearchUICardSectionView

@property (nonatomic,retain) TLKHeaderView * contentView; 
+(char)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg1 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
@end

