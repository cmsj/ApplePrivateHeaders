/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTStrokeLayer.h>

@class TSTStrokeLayer;

@interface TSTStrokeOrderedLayer : TSTStrokeLayer {

	TSTStrokeLayer* _majorStrokeLayer;
	TSTStrokeLayer* _minorStrokeLayer;

}

@property (nonatomic,retain) TSTStrokeLayer * majorStrokeLayer;              //@synthesize majorStrokeLayer=_majorStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTStrokeLayer * minorStrokeLayer;              //@synthesize minorStrokeLayer=_minorStrokeLayer - In the implementation block
-(void)invalidate;
-(long long)startingIndex;
-(void)invalidateRange:(TSTSimpleRange)arg1 ;
-(id)findStrokeAndRangeAtIndex:(long long)arg1 ;
-(id)initWithContext:(id)arg1 majorStrokeLayer:(id)arg2 minorStrokeLayer:(id)arg3 ;
-(void)enumerateRawStrokesSegmentsUsingBlock:(/*^block*/id)arg1 ;
-(TSTStrokeLayer *)majorStrokeLayer;
-(TSTStrokeLayer *)minorStrokeLayer;
-(id)nextStrokeAndRange:(id)arg1 ;
-(id)p_findStrokeAndRangeAtIndex:(long long)arg1 highOrderToken:(id)arg2 updatingLowOrderToken:(id*)arg3 lowOrderLayer:(id)arg4 ;
-(void)enumerateStrokesUsingBlock:(/*^block*/id)arg1 ;
-(void)appendStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(void)insertStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(void)setMajorStrokeLayer:(TSTStrokeLayer *)arg1 ;
-(void)setMinorStrokeLayer:(TSTStrokeLayer *)arg1 ;
@end
