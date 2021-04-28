/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTStrokeLayer.h>

@interface TSTMutableStrokeLayer : TSTStrokeLayer

@property (assign,nonatomic) unsigned columnOrRowIndex; 
-(void)invalidate;
-(void)moveRange:(NSRange)arg1 toIndex:(long long)arg2 ;
-(void)removeRange:(TSTSimpleRange)arg1 ;
-(void)flattenStrokeOrder;
-(void)invalidateRange:(TSTSimpleRange)arg1 ;
-(void)setStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(void)insertSpaceAtRange:(TSTSimpleRange)arg1 ;
-(void)swapSegmentAtIndex:(long long)arg1 withSegmentAtIndex:(long long)arg2 ;
-(void)appendStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(void)applyStroke:(id)arg1 atIndexes:(id)arg2 order:(int)arg3 applyStroke:(id)arg4 atIndexes:(id)arg5 order:(int)arg6 applyStroke:(id)arg7 atIndexes:(id)arg8 order:(int)arg9 applyStroke:(id)arg10 atIndexes:(id)arg11 order:(int)arg12 applyStroke:(id)arg13 atIndexes:(id)arg14 order:(int)arg15 ;
-(char)hasStrokeInRange:(TSTSimpleRange)arg1 ;
@end
