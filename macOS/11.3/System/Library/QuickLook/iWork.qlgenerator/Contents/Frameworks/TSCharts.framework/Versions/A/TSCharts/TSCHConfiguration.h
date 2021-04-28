/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSString, TSSPropertyMap;

@interface TSCHConfiguration : NSObject {

	char _supportsChartDataEditor;
	char _supportsChartRangeEditingMode;
	char _supportsNumberFormatSameAsSource;
	char _showMessageOnSelection;
	char _disableHighQualityRenderingIfNecessary;
	char _supports3DFillDataEmbeddingRecovery;
	char _use3DFillFor3DChartFallback;
	char _shouldForceDiscreteGraphicsFor3D;
	char _exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
	char _supportsTextBackground;
	char _supportsTextWrapping;
	Class _multiDataChartOptionsControllerBuildSupportClass;
	NSString* _modifyChartDataHelpKey;
	long long _analyticsAppType;

}

@property (assign,nonatomic) char supportsChartDataEditor;                                           //@synthesize supportsChartDataEditor=_supportsChartDataEditor - In the implementation block
@property (assign,nonatomic) char supportsChartRangeEditingMode;                                     //@synthesize supportsChartRangeEditingMode=_supportsChartRangeEditingMode - In the implementation block
@property (assign,nonatomic) char supportsNumberFormatSameAsSource;                                  //@synthesize supportsNumberFormatSameAsSource=_supportsNumberFormatSameAsSource - In the implementation block
@property (assign,nonatomic) char showMessageOnSelection;                                            //@synthesize showMessageOnSelection=_showMessageOnSelection - In the implementation block
@property (assign,nonatomic) char disableHighQualityRenderingIfNecessary;                            //@synthesize disableHighQualityRenderingIfNecessary=_disableHighQualityRenderingIfNecessary - In the implementation block
@property (assign,nonatomic) char supports3DFillDataEmbeddingRecovery;                               //@synthesize supports3DFillDataEmbeddingRecovery=_supports3DFillDataEmbeddingRecovery - In the implementation block
@property (assign,nonatomic) char use3DFillFor3DChartFallback;                                       //@synthesize use3DFillFor3DChartFallback=_use3DFillFor3DChartFallback - In the implementation block
@property (assign,nonatomic) char shouldForceDiscreteGraphicsFor3D;                                  //@synthesize shouldForceDiscreteGraphicsFor3D=_shouldForceDiscreteGraphicsFor3D - In the implementation block
@property (assign,nonatomic) char exportsUsingSageKeynoteChartNonStyleDefaultsOverride;              //@synthesize exportsUsingSageKeynoteChartNonStyleDefaultsOverride=_exportsUsingSageKeynoteChartNonStyleDefaultsOverride - In the implementation block
@property (assign,nonatomic) char supportsTextBackground;                                            //@synthesize supportsTextBackground=_supportsTextBackground - In the implementation block
@property (assign,nonatomic) char supportsTextWrapping;                                              //@synthesize supportsTextWrapping=_supportsTextWrapping - In the implementation block
@property (nonatomic,retain) Class multiDataChartOptionsControllerBuildSupportClass;                 //@synthesize multiDataChartOptionsControllerBuildSupportClass=_multiDataChartOptionsControllerBuildSupportClass - In the implementation block
@property (nonatomic,copy) NSString * modifyChartDataHelpKey;                                        //@synthesize modifyChartDataHelpKey=_modifyChartDataHelpKey - In the implementation block
@property (assign,nonatomic) long long analyticsAppType;                                             //@synthesize analyticsAppType=_analyticsAppType - In the implementation block
@property (readonly) TSSPropertyMap * appSpecificPropertyOverrides; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedChartConfiguration;
+(void)resetSharedChartConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setSupportsChartDataEditor:(char)arg1 ;
-(void)setSupportsChartRangeEditingMode:(char)arg1 ;
-(void)setSupportsNumberFormatSameAsSource:(char)arg1 ;
-(void)setShowMessageOnSelection:(char)arg1 ;
-(void)setModifyChartDataHelpKey:(NSString *)arg1 ;
-(void)setAnalyticsAppType:(long long)arg1 ;
-(void)setSupportsTextBackground:(char)arg1 ;
-(void)setSupportsTextWrapping:(char)arg1 ;
-(char)use3DFillFor3DChartFallback;
-(char)disableHighQualityRenderingIfNecessary;
-(char)supportsNumberFormatSameAsSource;
-(char)supportsChartRangeEditingMode;
-(TSSPropertyMap *)appSpecificPropertyOverrides;
-(char)supportsTextWrapping;
-(char)supportsChartDataEditor;
-(char)showMessageOnSelection;
-(void)setDisableHighQualityRenderingIfNecessary:(char)arg1 ;
-(char)supports3DFillDataEmbeddingRecovery;
-(void)setSupports3DFillDataEmbeddingRecovery:(char)arg1 ;
-(void)setUse3DFillFor3DChartFallback:(char)arg1 ;
-(char)shouldForceDiscreteGraphicsFor3D;
-(void)setShouldForceDiscreteGraphicsFor3D:(char)arg1 ;
-(char)exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
-(void)setExportsUsingSageKeynoteChartNonStyleDefaultsOverride:(char)arg1 ;
-(char)supportsTextBackground;
-(Class)multiDataChartOptionsControllerBuildSupportClass;
-(void)setMultiDataChartOptionsControllerBuildSupportClass:(Class)arg1 ;
-(NSString *)modifyChartDataHelpKey;
-(long long)analyticsAppType;
@end
