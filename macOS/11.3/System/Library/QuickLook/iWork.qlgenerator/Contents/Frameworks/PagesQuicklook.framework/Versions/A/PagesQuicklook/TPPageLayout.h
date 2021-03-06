/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <TSText/TSWPPageLayout.h>
#import <libobjc.A.dylib/TSWPLayoutParent.h>
#import <libobjc.A.dylib/TSWPAttachmentNumberProviding.h>
#import <libobjc.A.dylib/TSWPColumnMetrics.h>
#import <libobjc.A.dylib/TPAttachmentLayoutParent.h>
#import <libobjc.A.dylib/TSDWrapInvalidationParent.h>

@protocol TSWPHeaderFooterProvider, TPMasterDrawableProvider;
@class TSWPPadding, TPFootnoteContainerLayout, TSURetainedPointerKeyDictionary, NSMutableSet, TSDFill, TPBodyLayout, NSArray, NSSet, NSString;

@interface TPPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPAttachmentNumberProviding, TSWPColumnMetrics, TPAttachmentLayoutParent, TSDWrapInvalidationParent> {

	id<TSWPHeaderFooterProvider> _headerFooterProvider;
	TPFootnoteContainerLayout* _footnoteContainerLayout;
	unsigned long long _pageNumber;
	unsigned long long _pageCount;
	char _shouldHeaderFooterBeVisible;
	char _childLayoutsValid;
	TSURetainedPointerKeyDictionary* _oldChildLayouts;
	id<TPMasterDrawableProvider> _masterDrawableProvider;
	unsigned long long _contentFlags;
	int _inInvalidationClusterCount;
	char _childTextLayoutsNeedInvalidationForExteriorWrap;
	char _validating;
	char _overrideAllowFootnotes;
	NSMutableSet* _anchoredDrawableLayouts;
	TSDFill* _backgroundFill;

}

@property (assign,getter=isValidating,nonatomic) char validating;                                       //@synthesize validating=_validating - In the implementation block
@property (nonatomic,__weak,readonly) TPBodyLayout * bodyLayout; 
@property (nonatomic,readonly) CGRect bodyRect; 
@property (nonatomic,readonly) char allowsBody; 
@property (nonatomic,readonly) char allowsFootnotes; 
@property (nonatomic,readonly) char canHavePreviousPageFootnotes; 
@property (nonatomic,readonly) unsigned long long pageIndex; 
@property (nonatomic,readonly) id<NSFastEnumeration> childTextLayoutsForExteriorWrap; 
@property (nonatomic,readonly) char marginsAreMirrored; 
@property (nonatomic,readonly) NSArray * floatingDrawableLayouts; 
@property (nonatomic,readonly) NSSet * anchoredDrawableLayouts; 
@property (nonatomic,readonly) TPFootnoteContainerLayout * footnoteContainerLayout;                     //@synthesize footnoteContainerLayout=_footnoteContainerLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,__weak,readonly) id<TPMasterDrawableProvider> masterDrawableProvider; 
@property (nonatomic,readonly) TSDFill * backgroundFill;                                                //@synthesize backgroundFill=_backgroundFill - In the implementation block
@property (assign,nonatomic) char overrideAllowFootnotes;                                               //@synthesize overrideAllowFootnotes=_overrideAllowFootnotes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) char alwaysStartsNewTarget; 
@property (nonatomic,readonly) char shrinkTextToFit; 
@property (nonatomic,readonly) char columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(void)dealloc;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setChildren:(id)arg1 ;
-(unsigned long long)columnCount;
-(void)validate;
-(unsigned long long)pageCount;
-(id)pageLayout;
-(TSWPPadding *)layoutMargins;
-(unsigned long long)pageNumber;
-(char)isValidating;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(unsigned long long)pageIndex;
-(CGRect)bodyRect;
-(char)hasHeaders;
-(unsigned long long)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(int)naturalAlignmentForTextLayout:(id)arg1 ;
-(unsigned long long)pageCountForAttachment:(id)arg1 ;
-(unsigned long long)pageNumberForAttachment:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(char)alwaysStartsNewTarget;
-(char)shrinkTextToFit;
-(char)columnsAreLeftToRight;
-(id)computeLayoutGeometry;
-(void)invalidateSize;
-(void)invalidatePosition;
-(void)updateChildrenFromInfo;
-(void)addAttachmentLayout:(id)arg1 ;
-(char)textIsVertical;
-(void)parentDidChange;
-(void)wrappableChildInvalidated:(id)arg1 ;
-(id)dependentLayouts;
-(void)parentWillChangeTo:(id)arg1 ;
-(char)isRootLayoutForInspectorGeometry;
-(CGSize)maximumFrameSizeForChild:(id)arg1 ;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(char)shouldProvideGuidesDuringExclusiveAlignmentOperation;
-(char)providesGuidesForChildLayouts;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(TSDFill *)backgroundFill;
-(char)descendersCannotClip;
-(double)maxAutoGrowLineWidthForTextLayout:(id)arg1 ;
-(double)maxAutoGrowBlockHeightForTextLayout:(id)arg1 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5 ;
-(CGSize)adjustedInsetsForTarget:(id)arg1 ;
-(id)headerFooterProvider;
-(void)evacuateOldChildLayoutCache;
-(void)p_addLayoutIfAttached:(id)arg1 ;
-(char)marginsAreMirrored;
-(char)allowsFootnotes;
-(char)canHavePreviousPageFootnotes;
-(id)existingAttachmentLayoutForInfo:(id)arg1 ;
-(NSSet *)anchoredDrawableLayouts;
-(void)setNeedsInflation;
-(void)processWidowAndInflation;
-(TPBodyLayout *)bodyLayout;
-(char)shouldHeaderFooterBeVisible:(long long)arg1 ;
-(pair<double, double>)p_sideMargins;
-(char)hasFooters;
-(id)layoutForChildInfo:(id)arg1 ;
-(id)p_childLayoutInParentLayout:(id)arg1 forChildInfo:(id)arg2 ;
-(char)allowIntersectionOfChildLayout:(id)arg1 ;
-(NSArray *)floatingDrawableLayouts;
-(void)p_addLayoutsForInfos:(id)arg1 toArray:(id)arg2 ;
-(void)rebuildChildLayoutsOnNextValidationForcingTextLayoutOnTopLevelObjects:(char)arg1 ;
-(char)headerFooterProviderValid;
-(TPFootnoteContainerLayout *)footnoteContainerLayout;
-(id)p_existingChildLayoutForInfo:(id)arg1 ;
-(void)p_sortChildLayouts;
-(id<NSFastEnumeration>)childTextLayoutsForExteriorWrap;
-(char)p_isHeaderFooterLayout:(id)arg1 ;
-(void)setValidating:(char)arg1 ;
-(void)p_updateFromLayoutInfoProvider;
-(void)p_removeInlineLayoutsFromPageLayout;
-(void)p_removeNoLongerInlineLayoutsFromBodyLayout;
-(void)p_populateOldChildLayoutsWithLayouts:(id)arg1 ;
-(id)p_insertBodyLayout;
-(id)p_insertValidatedFloatingLayouts;
-(id)p_insertValidatedMasterLayouts;
-(id)p_insertFootnoteContainerLayout;
-(void)p_validateTextLayoutsForExteriorWrapAffectedByAnchoredAttachments;
-(id)p_insertChildLayoutForInfo:(id)arg1 ;
-(id)p_orderedChildInfos;
-(id<TPMasterDrawableProvider>)masterDrawableProvider;
-(void)beginResizeWrapInvalidationCluster;
-(void)endResizeWrapInvalidationCluster;
-(Class)backgroundFillOwningInfoClass;
-(char)allowsBody;
-(char)allowsHeaderFooter;
-(void)invalidateLayoutsForPageCountChange;
-(id)primaryLayoutForInfo:(id)arg1 ;
-(id)layoutsForChildInfo:(id)arg1 ;
-(char)isReadyForBodyLayout;
-(char)isRootLevelForInlineGeometry;
-(void)invalidateHeaderFooterLayoutsCache;
-(void)invalidateHeaderFooterLayouts;
-(void)invalidateBodyAndMarginLayouts;
-(void)invalidateFootnoteSeparatorLine;
-(void)invalidateFootnoteContainers;
-(double)blockHeightAvailableForFootnotes;
-(void)inflateFootnotesInFootnoteContainer:(id)arg1 ;
-(CGRect)footnoteContainerFrameWithSize:(CGSize)arg1 ;
-(id)layoutsCausingWrapOnTextLayoutTarget:(id)arg1 ignoreIntersection:(char)arg2 ;
-(id)p_insertValidatedChildLayoutForInfo:(id)arg1 ;
-(char)overrideAllowFootnotes;
-(void)setOverrideAllowFootnotes:(char)arg1 ;
@end

