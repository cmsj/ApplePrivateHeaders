/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSScrubberLayout.h>

@interface NSScrubberFlowLayout : NSScrubberLayout {

	id _support;
	double _itemSpacing;
	CGSize _itemSize;

}

@property (assign) double itemSpacing; 
@property (assign) CGSize itemSize; 
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)scrubberContentSize;
-(void)invalidateLayout;
-(void)prepareLayout;
-(id)layoutAttributesForItemsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndex:(long long)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(CGSize)itemSize;
-(double)itemSpacing;
-(void)setItemSpacing:(double)arg1 ;
-(void)invalidateLayoutForItemsAtIndexes:(id)arg1 ;
@end

