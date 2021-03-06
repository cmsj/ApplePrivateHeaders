/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTLayout;

@interface TSTAnimation : NSObject <NSCopying> {

	int mKind;
	TSUCellRect* mCellRanges;
	unsigned long long mCellRangeCount;
	unsigned long long mStageCount;
	unsigned long long mStage;
	char mFinal;
	char mByColumn;
	char mByRow;
	char mByCell;
	char mByContent;
	char mByCellRange;
	char mByMissingCellRange;
	char mReverse;
	char mShowsTableChrome;
	char mShowsOverlayLayers;
	char mExpandBackgroundFill;
	char mDrawsBlackAndWhite;
	TSTLayout* mLayout;

}

@property (assign,nonatomic,__weak) TSTLayout * layout; 
@property (readonly) unsigned long long stageCount; 
@property (readonly) unsigned long long stage; 
@property (readonly) char final; 
@property (assign) char showsTableChrome; 
@property (assign) char showsOverlayLayers; 
@property (assign) char expandBackgroundFill; 
@property (assign) char drawsBlackAndWhite; 
@property (readonly) unsigned long long cellRangeCount; 
@property (readonly) char drawTableName; 
@property (readonly) char drawTableBackground; 
@property (readonly) char drawCellBackground; 
@property (readonly) char drawCellContent; 
@property (readonly) char clipStrokes; 
@property (readonly) char drawStrokes; 
@property (readonly) char enabled; 
+(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
+(id)newAnimationWithLayout:(id)arg1 andCellRange:(TSUCellRect)arg2 ;
+(id)textureDeliveryStylesLocalized:(char)arg1 ;
+(id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned long long)arg2 ;
+(char)deliveryStyleSupportedForExport:(unsigned long long)arg1 ;
+(unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)arg1 tableProvider:(id)arg2 ;
+(unsigned long long)p_NumberOfColumnBuilds:(id)arg1 ;
+(unsigned long long)p_NumberOfRowBuilds:(id)arg1 ;
+(unsigned long long)p_NumberOfCellBuilds:(id)arg1 ;
+(unsigned long long)p_stageCountForProvider:(id)arg1 withAnimationKind:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)enabled;
-(TSTLayout *)layout;
-(unsigned long long)stage;
-(void)setLayout:(TSTLayout *)arg1 ;
-(char)final;
-(char)drawTableName;
-(unsigned long long)cellRangeCount;
-(TSUCellRect)cellRangeAtIndex:(unsigned long long)arg1 ;
-(char)drawTableBackground;
-(char)drawCellBackground;
-(char)expandBackgroundFill;
-(char)drawCellContent;
-(char)drawStrokes;
-(char)drawsBlackAndWhite;
-(void)addCellRange:(TSUCellRect)arg1 ;
-(void)setStage:(unsigned long long)arg1 andFinal:(char)arg2 ;
-(void)clearCellRanges;
-(char)clipStrokes;
-(unsigned long long)stageCount;
-(char)showsTableChrome;
-(void)setShowsTableChrome:(char)arg1 ;
-(char)showsOverlayLayers;
-(void)setShowsOverlayLayers:(char)arg1 ;
-(void)setExpandBackgroundFill:(char)arg1 ;
-(void)setDrawsBlackAndWhite:(char)arg1 ;
-(char)isHidingContentOfCellID:(TSUCellCoord)arg1 ;
@end

