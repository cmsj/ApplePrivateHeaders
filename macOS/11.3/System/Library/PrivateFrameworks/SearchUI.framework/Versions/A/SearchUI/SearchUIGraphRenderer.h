/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <AppKit/NSView.h>

@class NSArray, SearchUIStockChartDisplayMode;

@interface SearchUIGraphRenderer : NSView {

	char _roundLineCaps;
	unsigned _volumeCount;
	CGPoint* _points;
	NSArray* _linePointCounts;
	NSArray* _dottedLinePositions;
	NSArray* _dottedLinePositionsForStyleOnly;
	SCD_Struct_Se0* _volumeBars;
	double _volumeBarWidth;
	unsigned long long _maxVolume;
	SearchUIStockChartDisplayMode* _displayMode;
	CGSize _graphSize;
	CGSize _volumeGraphSize;
	NSEdgeInsets _graphInsets;

}

@property (assign,nonatomic) CGSize graphSize;                                         //@synthesize graphSize=_graphSize - In the implementation block
@property (assign,nonatomic) CGSize volumeGraphSize;                                   //@synthesize volumeGraphSize=_volumeGraphSize - In the implementation block
@property (assign,nonatomic) CGPoint* points;                                          //@synthesize points=_points - In the implementation block
@property (nonatomic,retain) NSArray * linePointCounts;                                //@synthesize linePointCounts=_linePointCounts - In the implementation block
@property (nonatomic,retain) NSArray * dottedLinePositions;                            //@synthesize dottedLinePositions=_dottedLinePositions - In the implementation block
@property (nonatomic,retain) NSArray * dottedLinePositionsForStyleOnly;                //@synthesize dottedLinePositionsForStyleOnly=_dottedLinePositionsForStyleOnly - In the implementation block
@property (assign,nonatomic) SCD_Struct_Se0* volumeBars;                               //@synthesize volumeBars=_volumeBars - In the implementation block
@property (assign,nonatomic) double volumeBarWidth;                                    //@synthesize volumeBarWidth=_volumeBarWidth - In the implementation block
@property (assign,nonatomic) unsigned long long maxVolume;                             //@synthesize maxVolume=_maxVolume - In the implementation block
@property (assign,nonatomic) unsigned volumeCount;                                     //@synthesize volumeCount=_volumeCount - In the implementation block
@property (assign,nonatomic) NSEdgeInsets graphInsets;                                 //@synthesize graphInsets=_graphInsets - In the implementation block
@property (assign,nonatomic) char roundLineCaps;                                       //@synthesize roundLineCaps=_roundLineCaps - In the implementation block
@property (nonatomic,retain) SearchUIStockChartDisplayMode * displayMode;              //@synthesize displayMode=_displayMode - In the implementation block
-(SearchUIStockChartDisplayMode *)displayMode;
-(void)setDisplayMode:(SearchUIStockChartDisplayMode *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGPoint*)points;
-(void)setPoints:(CGPoint*)arg1 ;
-(void)setLinePointCounts:(NSArray *)arg1 ;
-(void)setDottedLinePositions:(NSArray *)arg1 ;
-(void)setDottedLinePositionsForStyleOnly:(NSArray *)arg1 ;
-(void)setVolumeBars:(SCD_Struct_Se0*)arg1 ;
-(void)setVolumeCount:(unsigned)arg1 ;
-(void)setVolumeBarWidth:(double)arg1 ;
-(void)setMaxVolume:(unsigned long long)arg1 ;
-(void)setGraphInsets:(NSEdgeInsets)arg1 ;
-(NSEdgeInsets)graphInsets;
-(void)renderLineGraphInContext:(CGContextRef)arg1 ;
-(void)renderVolumeGraphInContext:(CGContextRef)arg1 ;
-(CGSize)lineGraphSize;
-(void)renderGraphLineInContext:(CGContextRef)arg1 withColor:(id)arg2 offset:(CGPoint)arg3 ;
-(CGSize)graphSize;
-(void)setGraphSize:(CGSize)arg1 ;
-(CGSize)volumeGraphSize;
-(void)setVolumeGraphSize:(CGSize)arg1 ;
-(NSArray *)linePointCounts;
-(NSArray *)dottedLinePositions;
-(NSArray *)dottedLinePositionsForStyleOnly;
-(SCD_Struct_Se0*)volumeBars;
-(double)volumeBarWidth;
-(unsigned long long)maxVolume;
-(unsigned)volumeCount;
-(char)roundLineCaps;
-(void)setRoundLineCaps:(char)arg1 ;
@end

