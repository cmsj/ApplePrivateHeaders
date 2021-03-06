/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDLayout.h>

@class TSDDefaultPartitioner;

@interface TSDPartitionedPartialLayout : TSDLayout {

	CGRect _bounds;
	TSDDefaultPartitioner* _partitioner;
	char _isLayoutRTL;

}

@property (nonatomic,readonly) char p_isLayoutRTL;                               //@synthesize isLayoutRTL=_isLayoutRTL - In the implementation block
@property (nonatomic,readonly) TSDDefaultPartitioner * partitioner;              //@synthesize partitioner=_partitioner - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                    //@synthesize bounds=_bounds - In the implementation block
-(CGRect)bounds;
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(void)updateChildrenFromInfo;
-(void)processChanges:(id)arg1 ;
-(TSDDefaultPartitioner *)partitioner;
-(id)initWithInfo:(id)arg1 bounds:(CGRect)arg2 partitioner:(id)arg3 isLayoutRTL:(char)arg4 ;
-(char)p_isLayoutRTL;
@end

