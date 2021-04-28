/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UXKit/UXKit-Structs.h>
@class NSMutableArray, _UXFlowLayoutSection;

@interface _UXFlowLayoutRow : NSObject {

	NSMutableArray* _items;
	CGSize _rowSize;
	CGRect _rowFrame;
	long long _index;
	char _isValid;
	char _complete;
	long long _verticalAlignement;
	long long _horizontalAlignement;
	char _fixedItemSize;
	_UXFlowLayoutSection* _section;

}

@property (assign,nonatomic) _UXFlowLayoutSection * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                              //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) CGRect rowFrame;                             //@synthesize rowFrame=_rowFrame - In the implementation block
@property (assign,nonatomic) long long index;                             //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                    //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) char complete;                               //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) char fixedItemSize;                          //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)addItem:(id)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(_UXFlowLayoutSection *)section;
-(NSMutableArray *)items;
-(id)snapshot;
-(char)complete;
-(void)setSection:(_UXFlowLayoutSection *)arg1 ;
-(CGRect)rowFrame;
-(CGSize)rowSize;
-(void)setComplete:(char)arg1 ;
-(void)layoutRow;
-(void)setFixedItemSize:(char)arg1 ;
-(void)setRowFrame:(CGRect)arg1 ;
-(id)copyFromSection:(id)arg1 ;
-(char)fixedItemSize;
-(void)setRowSize:(CGSize)arg1 ;
@end
