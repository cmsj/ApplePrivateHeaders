/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSCollectionViewItem;
#import <UIFoundation/UIFoundation-Structs.h>
@class NSView, NSCollectionViewLayoutAttributes, NSMutableArray;

@interface NSCollectionViewAnimation : NSObject {

	id<_NSCollectionViewItem> _item;
	NSView* _view;
	NSCollectionViewLayoutAttributes* _finalLayoutAttributes;
	double _startFraction;
	double _endFraction;
	long long _viewType;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _startupHandlers;
	/*^block*/id _animationBlock;
	struct {
		unsigned animateFromCurrentPosition : 1;
		unsigned deleteAfterAnimation : 1;
		unsigned rasterizeAfterAnimation : 1;
		unsigned resetRasterizationAfterAnimation : 1;
		unsigned updateZIndexAfterAnimation : 1;
	}  _collectionViewAnimationFlags;

}

@property (nonatomic,readonly) id<_NSCollectionViewItem> item;                                        //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSView * view;                                                         //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) long long viewType;                                                    //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) NSCollectionViewLayoutAttributes * finalLayoutAttributes;              //@synthesize finalLayoutAttributes=_finalLayoutAttributes - In the implementation block
@property (nonatomic,readonly) double startFraction;                                                  //@synthesize startFraction=_startFraction - In the implementation block
@property (nonatomic,readonly) double endFraction;                                                    //@synthesize endFraction=_endFraction - In the implementation block
@property (nonatomic,readonly) char animateFromCurrentPosition; 
@property (nonatomic,readonly) char deleteAfterAnimation; 
@property (nonatomic,readonly) char updateZIndexAfterAnimation; 
@property (assign,nonatomic) char rasterizeAfterAnimation; 
@property (assign,nonatomic) char resetRasterizationAfterAnimation; 
-(id)description;
-(NSView *)view;
-(id<_NSCollectionViewItem>)item;
-(char)updateZIndexAfterAnimation;
-(void)setUpdateZIndexAfterAnimation:(char)arg1 ;
-(id)initWithView:(id)arg1 viewType:(long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPostion:(char)arg6 deleteAfterAnimation:(char)arg7 customAnimations:(/*^block*/id)arg8 ;
-(char)animateFromCurrentPosition;
-(char)deleteAfterAnimation;
-(void)setRasterizeAfterAnimation:(char)arg1 ;
-(char)rasterizeAfterAnimation;
-(void)setResetRasterizationAfterAnimation:(char)arg1 ;
-(char)resetRasterizationAfterAnimation;
-(void)startFromCollectionViewCore:(id)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)addStartupHandler:(/*^block*/id)arg1 ;
-(long long)viewType;
-(NSCollectionViewLayoutAttributes *)finalLayoutAttributes;
-(double)startFraction;
-(double)endFraction;
@end

