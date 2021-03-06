/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHPropertyValueStorageContainer.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHChartStyle, TSCHLegendStyle, NSMutableArray, NSMutableDictionary, TSCHReferenceLineStyle, NSArray, TSSStylesheet, NSDictionary, TSURetainedPointerKeyDictionary;

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying> {

	TSCHChartStyleState* _themeChartStyleState;

}

@property (nonatomic,retain) TSCHChartStyle * chartStyle; 
@property (nonatomic,retain) TSCHLegendStyle * legendStyle; 
@property (nonatomic,copy) NSMutableArray * valueAxisStyles; 
@property (nonatomic,copy) NSMutableArray * categoryAxisStyles; 
@property (nonatomic,copy) NSMutableArray * seriesThemeStyles; 
@property (nonatomic,copy) NSMutableArray * seriesPrivateStyles; 
@property (nonatomic,copy) NSMutableArray * paragraphStyles; 
@property (nonatomic,copy) NSMutableDictionary * referenceLineStyles; 
@property (nonatomic,retain) TSCHReferenceLineStyle * referenceLineThemeStyle; 
@property (nonatomic,retain) TSCHChartStyleState * themeChartStyleState;                              //@synthesize themeChartStyleState=_themeChartStyleState - In the implementation block
@property (nonatomic,readonly) TSCHChartStyleState * stateForParentStyleLookup; 
@property (nonatomic,copy,readonly) NSArray * allStyles; 
@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (nonatomic,readonly) char paragraphStyleIndexesAreValid; 
@property (nonatomic,copy,readonly) NSDictionary * semanticTagToStyleMap; 
@property (nonatomic,readonly) TSURetainedPointerKeyDictionary * styleToSemanticTagsMap; 
+(id)styleState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(TSSStylesheet *)stylesheet;
-(TSCHChartStyle *)chartStyle;
-(TSCHLegendStyle *)legendStyle;
-(NSMutableArray *)valueAxisStyles;
-(NSMutableArray *)categoryAxisStyles;
-(NSMutableArray *)paragraphStyles;
-(NSMutableDictionary *)referenceLineStyles;
-(void)setReferenceLineStyles:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)seriesPrivateStyles;
-(NSMutableArray *)seriesThemeStyles;
-(TSCHReferenceLineStyle *)referenceLineThemeStyle;
-(id)applyStyleSwapTuple:(id)arg1 ;
-(char)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(char)arg2 ;
-(void)setLegendStyle:(TSCHLegendStyle *)arg1 ;
-(id)applyStyleSwapTuple:(id)arg1 ignoringBeforeValues:(char)arg2 ;
-(NSArray *)allStyles;
-(id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)stateByAdoptingStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)replaceStylesUsingBlock:(/*^block*/id)arg1 ;
-(TSCHChartStyleState *)stateForParentStyleLookup;
-(id)styleToUseForSemanticTag:(id)arg1 ;
-(TSCHChartStyleState *)themeChartStyleState;
-(void)setThemeChartStyleState:(TSCHChartStyleState *)arg1 ;
-(id)semanticUsagesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1 ;
-(NSDictionary *)semanticTagToStyleMap;
-(void)p_addParagraphStyleForSemanticUsage:(id)arg1 mappedStyle:(id)arg2 mappedState:(id)arg3 fromPriorStyle:(id)arg4 andPriorState:(id)arg5 maintainPriorIndex:(char)arg6 withStyleMapper:(id)arg7 withStylesheet:(id)arg8 toNewParagraphStylesTable:(id)arg9 andStyleMap:(id)arg10 ;
-(void)setStyle:(id)arg1 withSemanticTag:(id)arg2 ;
-(void)setParagraphStyles:(NSMutableArray *)arg1 ;
-(id)stateByReducingSeriesPrivateStyles;
-(id)stateByReducingReferenceLineStyles;
-(id)p_formatSemanticTag:(id)arg1 ;
-(id)p_locationOfStyleInNetwork:(id)arg1 ;
-(id)usesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1 ;
-(id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1 ;
-(id)styleNetworkDescription;
-(id)listOfStyles;
-(void)checkParagraphStyleIndicies;
-(void)replaceAllInstancesOfStyle:(id)arg1 withStyle:(id)arg2 ;
-(void)setChartStyle:(TSCHChartStyle *)arg1 ;
-(void)setValueAxisStyles:(NSMutableArray *)arg1 ;
-(void)setCategoryAxisStyles:(NSMutableArray *)arg1 ;
-(void)setSeriesThemeStyles:(NSMutableArray *)arg1 ;
-(void)setSeriesPrivateStyles:(NSMutableArray *)arg1 ;
-(void)setReferenceLineThemeStyle:(TSCHReferenceLineStyle *)arg1 ;
-(id)p_propertySetWithPropertySetType:(long long)arg1 forStyle:(id)arg2 ;
-(id)stateByExpandingSeriesStylesForSeriesCount:(unsigned long long)arg1 ;
-(id)stateByExpandingReferenceLineStylesForCount:(unsigned long long)arg1 ;
-(void)enumerateSemanticTagsAndUsagesWithPropertySetType:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)styleForSemanticTag:(id)arg1 ;
-(id)styleLookupSemanticTagForSemanticTag:(id)arg1 ;
-(id)fallbackSemanticTagForSemanticTag:(id)arg1 ;
-(char)paragraphStyleIndexesAreValid;
-(id)stateByExpandingForSeriesCount:(unsigned long long)arg1 andReferenceLineCount:(unsigned long long)arg2 ;
-(id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
-(TSURetainedPointerKeyDictionary *)styleToSemanticTagsMap;
-(id)semanticUsagesToParagraphStyleMapWithPropertySetType:(long long)arg1 filteredBySemanticUsages:(id)arg2 ;
-(id)fallbackSemanticUsageForSemanticUsage:(id)arg1 ;
@end

