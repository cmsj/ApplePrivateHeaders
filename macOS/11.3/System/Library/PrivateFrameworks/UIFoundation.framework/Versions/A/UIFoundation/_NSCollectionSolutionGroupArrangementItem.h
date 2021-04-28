/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class _NSCollectionLayoutItemSolver, NSCollectionLayoutItem;

@interface _NSCollectionSolutionGroupArrangementItem : NSObject {

	_NSCollectionLayoutItemSolver* _solution;
	CGRect _layoutFrame;

}

@property (assign,nonatomic) CGRect layoutFrame;                                      //@synthesize layoutFrame=_layoutFrame - In the implementation block
@property (nonatomic,readonly) _NSCollectionLayoutItemSolver * solution;              //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
-(NSCollectionLayoutItem *)item;
-(_NSCollectionLayoutItemSolver *)solution;
-(CGRect)layoutFrame;
-(id)initWithSolution:(id)arg1 ;
-(void)setLayoutFrame:(CGRect)arg1 ;
@end
