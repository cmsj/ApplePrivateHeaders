/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSPersistence/TSPContainedObject.h>
#import <libobjc.A.dylib/KNSlideCollection.h>

@class KNSlideNode, NSArray, NSMutableOrderedSet, NSMutableArray, NSMutableDictionary, NSMapTable, NSNumberFormatter, NSString;

@interface KNSlideTree : TSPContainedObject <KNSlideCollection> {

	NSMutableOrderedSet* _slideNodes;
	NSMutableArray* _displayedSlideNodeCache;
	NSMutableDictionary* _slideNodesForUniqueIdentifiersCache;
	NSMutableDictionary* _slideNodesForFormulaReferenceNamesCache;
	NSMapTable* _formulaReferenceNamesForSlideNodesCache;
	NSNumberFormatter* _formatter;

}

@property (nonatomic,retain) NSArray * displayedSlideNodes;                                //@synthesize displayedSlideNodeCache=_displayedSlideNodeCache - In the implementation block
@property (retain) NSNumberFormatter * formatter;                                          //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) NSArray * slideNodes; 
@property (nonatomic,readonly) NSArray * visibleSlideNodes; 
@property (nonatomic,readonly) KNSlideNode * defaultSlideNodeForNewSelection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 minimumValidDepth:(unsigned long long)arg2 canExceedSlideTreeMaxDepth:(char)arg3 ;
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 atDepths:(id)arg2 minimumValidDepth:(unsigned long long)arg3 canExceedSlideTreeMaxDepth:(char)arg4 ;
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 minimumValidDepth:(unsigned long long)arg2 ;
+(id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 atDepths:(id)arg2 minimumValidDepth:(unsigned long long)arg3 ;
+(char)areMultipleMasterTypesInCollection:(id)arg1 ;
-(void)dealloc;
-(id)objectEnumerator;
-(char)isEmpty;
-(NSNumberFormatter *)formatter;
-(void)setFormatter:(NSNumberFormatter *)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(void)removeAll;
-(void)saveToArchive:(SlideTreeArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SlideTreeArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(NSArray *)visibleSlideNodes;
-(id)formulaReferenceNameForSlideNode:(id)arg1 ;
-(id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(char)arg2 ;
-(id)slideNamesMatchingPrefix:(id)arg1 ;
-(NSArray *)slideNodes;
-(void)invalidateSlideNameCache;
-(unsigned long long)slideNumberForSlideNode:(id)arg1 ;
-(void)addSlideNode:(id)arg1 atDepth:(unsigned long long)arg2 dolcContext:(id)arg3 ;
-(char)containsSlideNode:(id)arg1 ;
-(unsigned long long)indexOfSlideNode:(id)arg1 ;
-(id)slideNodeAtIndex:(unsigned long long)arg1 ignoreHiddenNodes:(char)arg2 ;
-(id)slideNodeAfterSlideNode:(id)arg1 omitSkippedSlideNodes:(char)arg2 omitCollapsedSlideNodes:(char)arg3 ;
-(id)slideNodeBeforeSlideNode:(id)arg1 omitSkippedSlideNodes:(char)arg2 omitCollapsedSlideNodes:(char)arg3 ;
-(id)childrenOfSlideNode:(id)arg1 ;
-(id)descendantsOfSlideNode:(id)arg1 omitSkippedSlideNodes:(char)arg2 omitCollapsedSlideNodes:(char)arg3 ;
-(void)addSlideNodeForDocumentUpgrade:(id)arg1 atDepth:(unsigned long long)arg2 ;
-(void)p_clearSlideNodeCache;
-(char)slideNodeIsDisplayed:(id)arg1 ;
-(void)setDisplayedSlideNodes:(NSArray *)arg1 ;
-(id)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1 ;
-(void)p_cacheSlideNodes;
-(id)slidesUsingMasterSlide:(id)arg1 ;
-(id)parentOfSlideNode:(id)arg1 ;
-(id)orderedSlideNodesInSelection:(id)arg1 ;
-(KNSlideNode *)defaultSlideNodeForNewSelection;
-(NSArray *)displayedSlideNodes;
-(void)insertSlideNodes:(id)arg1 atIndexes:(id)arg2 slideNodesChangingDepths:(id)arg3 depthsOfSlideNodesChangingDepths:(id)arg4 dolcContext:(id)arg5 ;
-(void)moveSlideNodes:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3 slideNodesChangingDepths:(id)arg4 depthsOfSlideNodesChangingDepths:(id)arg5 ;
-(void)removeSlideNodes:(id)arg1 atIndexes:(id)arg2 slideNodesChangingDepths:(id)arg3 depthsOfSlideNodesChangingDepths:(id)arg4 ;
-(void)reloadDisplayedNodes;
-(id)unhiddenSlideNodeAtIndex:(unsigned long long)arg1 ;
-(id)slideNodeWithUniqueIdentifier:(id)arg1 ;
-(unsigned long long)visiblePageCountIsSeparatedByBuilds:(char)arg1 ;
-(unsigned long long)byBuildPageIndexForSlideIndex:(unsigned long long)arg1 andEventIndex:(unsigned long long)arg2 ;
-(void)slideIndex:(unsigned long long*)arg1 andEventIndex:(unsigned long long*)arg2 forByBuildPageIndex:(unsigned long long)arg3 ;
-(unsigned long long)numberOfSlidesUsingMasterSlide:(id)arg1 ;
-(id)slideNodesInAscendingOrder:(id)arg1 ;
@end

