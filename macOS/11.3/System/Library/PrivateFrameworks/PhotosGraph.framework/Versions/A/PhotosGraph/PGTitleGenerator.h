/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, PGTitleGeneratorDateMatching, PHAsset, PHAssetCollection, PGTitle, NSLocale;

@interface PGTitleGenerator : NSObject {

	char _isForHighlight;
	NSSet* _momentNodes;
	PGTitleGeneratorDateMatching* _dateMatching;
	PHAsset* _keyAsset;
	PHAssetCollection* _curatedAssetCollection;
	PHAssetCollection* _assetCollection;
	PGTitle* _title;
	PGTitle* _subtitle;
	NSSet* _usedLocationNodes;
	NSLocale* _locale;
	unsigned long long _preferredTitleType;
	unsigned long long _lineBreakBehavior;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;                      //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodes;                                      //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSSet * usedLocationNodes;                                  //@synthesize usedLocationNodes=_usedLocationNodes - In the implementation block
@property (nonatomic,readonly) PGTitleGeneratorDateMatching * dateMatching;              //@synthesize dateMatching=_dateMatching - In the implementation block
@property (nonatomic,readonly) PHAsset * keyAsset;                                       //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * curatedAssetCollection;               //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                          //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) PGTitle * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PGTitle * subtitle;                                       //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned long long preferredTitleType;                      //@synthesize preferredTitleType=_preferredTitleType - In the implementation block
@property (assign,nonatomic) unsigned long long lineBreakBehavior;                       //@synthesize lineBreakBehavior=_lineBreakBehavior - In the implementation block
@property (assign,nonatomic) char isForHighlight;                                        //@synthesize isForHighlight=_isForHighlight - In the implementation block
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(PGTitle *)title;
-(PGTitle *)subtitle;
-(id)_defaultTitle;
-(PHAsset *)keyAsset;
-(PHAssetCollection *)assetCollection;
-(NSSet *)momentNodes;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(char)_useSplitTimeTitlesIfNeeded;
-(id)initWithMomentNodes:(id)arg1 type:(long long)arg2 ;
-(char)_triggerDefaultTitleGenerationIfNil;
-(NSSet *)usedLocationNodes;
-(void)setUsedLocationNodes:(NSSet *)arg1 ;
-(unsigned long long)lineBreakBehavior;
-(void)setLineBreakBehavior:(unsigned long long)arg1 ;
-(PHAssetCollection *)curatedAssetCollection;
-(char)isForHighlight;
-(id)initWithMomentNode:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6 ;
-(id)initWithMomentNodes:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6 ;
-(id)initWithMomentNode:(id)arg1 type:(long long)arg2 ;
-(void)_generateTitleAndSubtitle;
-(id)_defaultLocationTitle;
-(id)_defaultTimeTitle;
-(id)_splitTimeTitles;
-(unsigned long long)_allowedTimeTitleFormats;
-(id)_addressNodeFromKeyAsset;
-(id)_addressNodesFromCuratedAssetCollection;
-(PGTitleGeneratorDateMatching *)dateMatching;
-(unsigned long long)preferredTitleType;
-(void)setPreferredTitleType:(unsigned long long)arg1 ;
-(void)setIsForHighlight:(char)arg1 ;
@end
