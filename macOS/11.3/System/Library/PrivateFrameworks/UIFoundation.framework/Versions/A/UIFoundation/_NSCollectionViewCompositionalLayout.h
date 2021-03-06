/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSCollectionViewCompositionalLayout.h>

@class NSArray;

@interface _NSCollectionViewCompositionalLayout : NSCollectionViewCompositionalLayout {

	long long _scrollDirection;
	NSArray* _boundarySupplementaryItems;
	NSArray* _supplementaryItems;

}

@property (nonatomic,readonly) long long scrollDirection;                     //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;              //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryItems;                      //@synthesize supplementaryItems=_supplementaryItems - In the implementation block
-(long long)scrollDirection;
-(NSArray *)supplementaryItems;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(NSArray *)boundarySupplementaryItems;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(id)initWithLayoutSection:(id)arg1 ;
-(id)initWithSection:(id)arg1 configuration:(id)arg2 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 configuration:(id)arg2 ;
-(id)initWithLayoutSectionProvider:(/*^block*/id)arg1 configuration:(id)arg2 ;
-(id)initWithLayoutSection:(id)arg1 configuration:(id)arg2 ;
-(id)initWithSection:(id)arg1 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 ;
-(id)initWithLayoutSectionProvider:(/*^block*/id)arg1 scrollDirection:(long long)arg2 ;
-(id)initWithLayoutSectionProvider:(/*^block*/id)arg1 ;
-(id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2 ;
@end

