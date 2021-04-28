/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/NumbersQuicklook.framework/Versions/A/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NumbersQuicklook/NumbersQuicklook-Structs.h>
#import <TSText/TSWPPageLayout.h>

@class TNPageController;

@interface TNPageLayoutAbstract : TSWPPageLayout {

	TSUCellCoord _pageCoordinate;
	TNPageController* _pageController;

}

@property (assign) TSUCellCoord pageCoordinate;                    //@synthesize pageCoordinate=_pageCoordinate - In the implementation block
@property (__weak) TNPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
@property (readonly) CGRect pageBounds; 
-(id)description;
-(CGRect)pageBounds;
-(TNPageController *)pageController;
-(void)setPageController:(TNPageController *)arg1 ;
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(TSUCellCoord)pageCoordinate;
-(id)initWithPageController:(id)arg1 pageCoordinate:(TSUCellCoord)arg2 ;
-(void)setPageCoordinate:(TSUCellCoord)arg1 ;
@end
