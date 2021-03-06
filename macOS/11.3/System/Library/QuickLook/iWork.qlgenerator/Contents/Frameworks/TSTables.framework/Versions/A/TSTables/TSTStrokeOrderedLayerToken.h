/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTStrokeLayerStrokeAndRange.h>

@protocol TSTStrokeLayerStrokeAndRange;
@class TSDStroke, NSString;

@interface TSTStrokeOrderedLayerToken : NSObject <TSTStrokeLayerStrokeAndRange> {

	int _order;
	TSDStroke* _stroke;
	id<TSTStrokeLayerStrokeAndRange> _majorStrokeLayerToken;
	id<TSTStrokeLayerStrokeAndRange> _minorStrokeLayerToken;
	TSTSimpleRange _range;

}

@property (nonatomic,retain) TSDStroke * stroke;                                                  //@synthesize stroke=_stroke - In the implementation block
@property (assign,nonatomic) TSTSimpleRange range;                                                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) int order;                                                           //@synthesize order=_order - In the implementation block
@property (nonatomic,retain) id<TSTStrokeLayerStrokeAndRange> majorStrokeLayerToken;              //@synthesize majorStrokeLayerToken=_majorStrokeLayerToken - In the implementation block
@property (nonatomic,retain) id<TSTStrokeLayerStrokeAndRange> minorStrokeLayerToken;              //@synthesize minorStrokeLayerToken=_minorStrokeLayerToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWithStroke:(id)arg1 range:(TSTSimpleRange)arg2 order:(int)arg3 majorStrokeLayerToken:(id)arg4 minorStrokeLayerToken:(id)arg5 ;
-(TSTSimpleRange)range;
-(void)setRange:(TSTSimpleRange)arg1 ;
-(int)order;
-(TSDStroke *)stroke;
-(void)setOrder:(int)arg1 ;
-(void)setStroke:(TSDStroke *)arg1 ;
-(id)initWithStroke:(id)arg1 range:(TSTSimpleRange)arg2 order:(int)arg3 majorStrokeLayerToken:(id)arg4 minorStrokeLayerToken:(id)arg5 ;
-(id<TSTStrokeLayerStrokeAndRange>)majorStrokeLayerToken;
-(void)setMajorStrokeLayerToken:(id<TSTStrokeLayerStrokeAndRange>)arg1 ;
-(id<TSTStrokeLayerStrokeAndRange>)minorStrokeLayerToken;
-(void)setMinorStrokeLayerToken:(id<TSTStrokeLayerStrokeAndRange>)arg1 ;
@end

