/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHNotifyOnModify.h>
#import <TSCharts/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHChartInfo, TSCHChartGrid, NSMutableArray, NSDictionary, NSMutableDictionary, NSArray;

@interface TSCHChartModel : NSObject <TSCHNotifyOnModify, TSDMixing, NSCopying> {

	TSCHChartInfo* _chartInfo;
	TSCHChartGrid* _grid;
	int _scatterFormat;
	NSMutableArray* _seriesList;
	NSMutableArray* _axisList;
	NSDictionary* _referenceLinesMap;
	unsigned long long _multiDataSetIndex;
	char _modelInvalid;
	char _isTransient;
	NSDictionary* _axisIDToDataFormatterPersistableStyleObjectsMap;
	NSDictionary* _seriesIndexToDataFormatterPersistableStyleObjectsMap;
	char _disableCachingMediatorData;
	int _cachedChartMediatorGridDirection;
	NSMutableDictionary* _modelManagedCaches;
	unsigned long long _numberOfSeriesForCalculatingBarWidth;
	NSMutableDictionary* _seriesDimensionsByGridIndex;
	NSMutableDictionary* _gridIndexesBySeriesDimension;

}

@property (nonatomic,readonly) char isTransient;                                                     //@synthesize isTransient=_isTransient - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * seriesDimensionsByGridIndex;                      //@synthesize seriesDimensionsByGridIndex=_seriesDimensionsByGridIndex - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * gridIndexesBySeriesDimension;                     //@synthesize gridIndexesBySeriesDimension=_gridIndexesBySeriesDimension - In the implementation block
@property (assign,nonatomic,__weak) TSCHChartInfo * chart; 
@property (assign,nonatomic,__weak) TSCHChartInfo * chartInfo;                                       //@synthesize chartInfo=_chartInfo - In the implementation block
@property (nonatomic,retain) TSCHChartGrid * grid;                                                   //@synthesize grid=_grid - In the implementation block
@property (assign,nonatomic) int scatterFormat;                                                      //@synthesize scatterFormat=_scatterFormat - In the implementation block
@property (assign,nonatomic) unsigned long long multiDataSetIndex;                                   //@synthesize multiDataSetIndex=_multiDataSetIndex - In the implementation block
@property (nonatomic,readonly) char isMultiData; 
@property (nonatomic,readonly) unsigned long long numberOfMultiDataSets; 
@property (nonatomic,readonly) unsigned long long numberOfMultiDataSetCategories; 
@property (nonatomic,readonly) unsigned long long numberOfChunkableMultiDataSets; 
@property (nonatomic,readonly) unsigned long long numberOfSeries; 
@property (nonatomic,readonly) unsigned long long numberOfSeriesForCalculatingBarWidth;              //@synthesize numberOfSeriesForCalculatingBarWidth=_numberOfSeriesForCalculatingBarWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfValues; 
@property (nonatomic,readonly) unsigned long long maxNumberOfReferenceLines; 
@property (nonatomic,readonly) unsigned long long numberOfGroupsInAllSeries; 
@property (nonatomic,readonly) unsigned long long analyticsDataSize; 
@property (nonatomic,copy,readonly) NSArray * seriesList;                                            //@synthesize seriesList=_seriesList - In the implementation block
@property (nonatomic,copy,readonly) NSArray * axisList;                                              //@synthesize axisList=_axisList - In the implementation block
@property (nonatomic,copy,readonly) NSArray * valueAxisList; 
@property (nonatomic,copy,readonly) NSArray * categoryAxisList; 
@property (nonatomic,copy,readonly) NSDictionary * referenceLinesMap;                                //@synthesize referenceLinesMap=_referenceLinesMap - In the implementation block
@property (nonatomic,readonly) id syncRoot; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(char)isTransient;
-(id)syncRoot;
-(id)cachedObjectForKey:(id)arg1 ;
-(TSCHChartGrid *)grid;
-(void)setChart:(TSCHChartInfo *)arg1 ;
-(TSCHChartInfo *)chart;
-(void)setCacheObject:(id)arg1 forKey:(id)arg2 ;
-(void)invalidateCaches;
-(void)setGrid:(TSCHChartGrid *)arg1 ;
-(void)willModify;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(unsigned long long)numberOfValues;
-(id)nameForCategory:(unsigned long long)arg1 ;
-(char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 ;
-(TSCHChartInfo *)chartInfo;
-(int)scatterFormat;
-(void)forceLoadDefaultData;
-(id)seriesDimensionForGridIndex:(unsigned long long)arg1 ;
-(unsigned long long)gridIndexForSeriesDimension:(id)arg1 ;
-(void)invalidateModel;
-(unsigned long long)numberOfSeries;
-(NSArray *)seriesList;
-(NSArray *)axisList;
-(id)lineAreaModelCacheForSeries:(unsigned long long)arg1 ;
-(id)barModelCacheForSeries:(unsigned long long)arg1 ;
-(id)pieSeriesModelCacheForSeries:(unsigned long long)arg1 ;
-(id)axisForID:(id)arg1 ;
-(id)seriesAtIndex:(unsigned long long)arg1 ;
-(id)nameForSeries:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfReferenceLines;
-(unsigned long long)numberOfGroupsInAllSeries;
-(void)resetSeriesStorage;
-(char)isMultiData;
-(NSDictionary *)referenceLinesMap;
-(void)disableCachingMediatorDataDuringBlock:(/*^block*/id)arg1 ;
-(unsigned long long)multiDataSetIndex;
-(unsigned long long)numberOfGroupsInSeries:(id)arg1 ;
-(unsigned long long)multiDataSetCategoryIndexForCategory:(unsigned long long)arg1 ;
-(unsigned long long)categoryForMultiDataSetCategoryIndex:(unsigned long long)arg1 ;
-(void)setChartInfo:(TSCHChartInfo *)arg1 ;
-(unsigned long long)numberOfMultiDataSets;
-(id)initWithChartInfo:(id)arg1 dataSetIndex:(unsigned long long)arg2 ;
-(unsigned long long)p_lastMultiDataSetIndex;
-(void)setScatterFormat:(int)arg1 ;
-(void)setMultiDataSetIndex:(unsigned long long)arg1 ;
-(id)p_axisForID:(id)arg1 ;
-(void)p_synchronizeAxis:(id)arg1 class:(Class)arg2 axisID:(id)arg3 axisIndex:(unsigned long long)arg4 styleIndex:(unsigned long long)arg5 usedAxes:(id)arg6 unusedAxes:(id)arg7 ;
-(unsigned long long)defaultOrdinalForAxisType:(int)arg1 seriesIndex:(unsigned long long)arg2 ;
-(void)p_setBimapEntryForSeriesDimension:(id)arg1 andGridIndex:(unsigned long long)arg2 ;
-(char)p_disableCachingMediatorData;
-(void)p_synchronizeModelWithSeriesNonStyleMigration:(char)arg1 ;
-(void)p_synchronizeAxisList;
-(void)p_synchronizeSeriesListWithSeriesNonStyleMigration:(char)arg1 ;
-(void)p_postSynchronizeAxisList;
-(void)p_synchronizeReferenceLines;
-(void)p_cacheAxisDataFormatters;
-(void)p_cacheSeriesDataFormatters;
-(void)p_cacheMediatorChartGridDirection;
-(void)p_synchronizeModel;
-(unsigned long long)numberOfGridValues;
-(unsigned long long)p_numberOfGroupsInSeries:(id)arg1 ;
-(unsigned long long)p_multiDataSetCategoryIndexForCategory:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMultiDataSetCategories;
-(id)nameForMultiDataSetCategory:(unsigned long long)arg1 ;
-(void)setNameForMultiDataSetCategory:(unsigned long long)arg1 toName:(id)arg2 ;
-(char)p_shouldLoadDefaultData;
-(void)p_loadDefaultDataWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2 forDocumentLocale:(id)arg3 ;
-(void)p_loadDefaultData;
-(id)initForPresetImportWithChartInfo:(id)arg1 ;
-(void)enumerateMultiDataModelsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)archivedMultiDataSetIndex;
-(void)updateTransientModelFromInfoModel;
-(void)validateIfNeeded;
-(void)validateIfNeededWithSeriesNonStyleMigration:(char)arg1 ;
-(id)noSyncAxisList;
-(NSArray *)valueAxisList;
-(NSArray *)categoryAxisList;
-(void)setShouldCacheMediatorData:(char)arg1 ;
-(id)cachedDataFormatterPersistableStyleObjectForID:(id)arg1 ;
-(id)cachedDataFormatterPersistableStyleObjectAtSeriesIndex:(unsigned long long)arg1 ;
-(int)cachedChartMediatorGridDirection;
-(id)noSyncSeriesList;
-(unsigned long long)numberOfSeriesForCalculatingBarWidth;
-(id)seriesForHiddenDataExportAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfChunkableMultiDataSets;
-(id)allGroupsIndexSetForSeries:(id)arg1 ;
-(unsigned long long)numberOfGroupsInSeriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)analyticsDataSize;
-(void)setNameForSeries:(unsigned long long)arg1 toName:(id)arg2 ;
-(id)dataSetNameForMultiDataModel;
-(void)setNameForCategory:(unsigned long long)arg1 toName:(id)arg2 ;
-(void)loadDefaultDataIfNotDirtyWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2 forDocumentLocale:(id)arg3 ;
-(void)loadDefaultDataIfNotDirty;
-(char)hasReferenceLines;
-(id)referenceLineForStyleSwapIndex:(unsigned long long)arg1 ;
-(unsigned long long)styleSwapIndexForReferenceLine:(id)arg1 ;
-(id)addSeriesAtIndexForPresetImport:(unsigned long long)arg1 ;
-(id)addAxisOfClass:(Class)arg1 forIDForPresetImport:(id)arg2 ;
-(NSMutableDictionary *)seriesDimensionsByGridIndex;
-(void)setSeriesDimensionsByGridIndex:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)gridIndexesBySeriesDimension;
-(void)setGridIndexesBySeriesDimension:(NSMutableDictionary *)arg1 ;
-(id)legendModelCache;
-(void)loadFromPreUFFArchive:(const ChartModelArchive*)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3 ;
-(void)setTextEditingSelectionPath:(id)arg1 string:(id)arg2 ;
-(void)clearTextEditingSelectionPath;
-(void)loadFromUnityArchive:(const ChartArchive*)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3 chartInfo:(id)arg4 ;
-(void)saveToUnityArchive:(ChartArchive*)arg1 forCopy:(char)arg2 ;
@end

