/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSCollectionView.h>

@interface CollectionViewPlus : NSCollectionView {

	char _hasEnclosingScrollView;

}

@property (assign,nonatomic) char hasEnclosingScrollView;                //@synthesize hasEnclosingScrollView=_hasEnclosingScrollView - In the implementation block
@property (__weak) id<CollectionViewPlusDelegate> delegate; 
-(void)keyDown:(id)arg1 ;
-(id)enclosingScrollView;
-(void)draggingSession:(id)arg1 movedToPoint:(CGPoint)arg2 ;
-(id)makeItemWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_setOpensDropInsertionGaps:(char)arg1 ;
-(void)setHasEnclosingScrollView:(char)arg1 ;
-(void)updateChildrenAccessibilityAttributes;
-(char)isScreenPointWithinBounds:(CGPoint)arg1 ;
-(id)makeItemWithIdentifier:(id)arg1 forIndexPath:(id)arg2 forCollectionView:(id)arg3 ;
-(char)hasEnclosingScrollView;
@end

