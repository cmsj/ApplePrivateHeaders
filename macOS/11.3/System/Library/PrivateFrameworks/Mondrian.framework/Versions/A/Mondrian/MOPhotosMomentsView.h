/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Mondrian/Mondrian-Structs.h>
#import <Mondrian/MOMediaView.h>

@protocol MOPhotosMomentsViewDelegate;
@interface MOPhotosMomentsView : MOMediaView {

	unsigned _delegateRecommendedCellSizeForThumbnailSize : 1;
	unsigned _delegateShouldShowMainFooter : 1;
	unsigned _delegateMainFooterTitle : 1;
	unsigned _delegateMainFooterInfo : 1;
	unsigned _delegateMainFooterHeight : 1;
	id<MOPhotosMomentsViewDelegate> _photosMomentsViewDelegate;

}

@property (assign,nonatomic,__weak) id<MOPhotosMomentsViewDelegate> photosMomentsViewDelegate;              //@synthesize photosMomentsViewDelegate=_photosMomentsViewDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollToEnd:(char)arg1 ;
-(id)momentsLayout;
-(void)setPhotosMomentsViewDelegate:(id<MOPhotosMomentsViewDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 recommendedCellSizeForThumbnailSize:(CGSize)arg3 inMaxSize:(CGSize)arg4 ;
-(char)shouldShowMainFooterForCollectionView:(id)arg1 layout:(id)arg2 includingWhenInBounds:(char*)arg3 ;
-(id)mainFooterTitleForCollectionView:(id)arg1 ;
-(id)mainFooterInfoForCollectionView:(id)arg1 ;
-(double)mainFooterHeightForCollectionView:(id)arg1 ;
-(void)mediaView:(id)arg1 didUpdateSupplementaryView:(id)arg2 ofKind:(id)arg3 withMediaSection:(id)arg4 atIndexPath:(id)arg5 ;
-(id<MOPhotosMomentsViewDelegate>)photosMomentsViewDelegate;
@end

