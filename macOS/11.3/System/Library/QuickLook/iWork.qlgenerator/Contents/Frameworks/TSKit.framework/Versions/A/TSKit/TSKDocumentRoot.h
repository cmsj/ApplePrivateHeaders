/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSKit/TSKAccessControllerDelegate.h>
#import <TSKit/TSKModel.h>

@protocol TSKDocumentRootDelegate, TSULogContext;
@class TSULocale, NSMutableArray, TSKAccessController, TSKSelectionDispatcher, TSKPasteboardController, TSKAnnotationAuthorStorage, TSKAnnotationAuthor, TSKChangeNotifier, TSKDocumentSupport, TSCHTextCache, TSSTheme, TSSStylesheet, NSDictionary, NSString;

@interface TSKDocumentRoot : TSPObject <TSKAccessControllerDelegate, TSKModel> {

	char _hasUserDefinedLocale;
	TSULocale* _documentCreationLocale;
	char _isBeingLocalized;
	id<TSKDocumentRootDelegate> _delegate;
	TSULocale* _documentLocale;
	os_unfair_lock_s _documentLocaleLock;
	NSMutableArray* _iCloudTeardownStack;
	char _preventImageConversionOnOpen;
	id<TSULogContext> _logContext;
	char _shouldMeasureNegativelyTrackedTextCorrectly;
	char _useOptimizedTextVerticalAlignment;
	id _collaborationDidUploadAllDataObserver;
	char _isFindActive;
	char _documentCurrentlyImporting;
	TSKAccessController* _accessController;
	TSKSelectionDispatcher* _selectionDispatcher;
	TSKPasteboardController* _pasteboardController;
	TSKAnnotationAuthorStorage* _annotationAuthorStorage;
	TSKAnnotationAuthor* _authorForFiltering;
	TSKChangeNotifier* _changeNotifier;
	TSKDocumentSupport* _documentSupport;
	TSKDocumentSupport* _documentSupportIfAvailable;

}

@property (readonly) TSCHTextCache * tsch_textCache; 
@property (nonatomic,readonly) TSSTheme * theme; 
@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (nonatomic,retain) TSKPasteboardController * pasteboardController;                                   //@synthesize pasteboardController=_pasteboardController - In the implementation block
@property (nonatomic,readonly) TSKDocumentSupport * documentSupport;                                           //@synthesize documentSupport=_documentSupport - In the implementation block
@property (nonatomic,readonly) TSKDocumentSupport * documentSupportIfAvailable;                                //@synthesize documentSupportIfAvailable=_documentSupportIfAvailable - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalDocumentPropertiesForWrite; 
@property (nonatomic,readonly) NSDictionary * additionalDocumentSupportPropertiesForWrite; 
@property (nonatomic,readonly) TSKAccessController * accessController;                                         //@synthesize accessController=_accessController - In the implementation block
@property (nonatomic,readonly) TSKChangeNotifier * changeNotifier;                                             //@synthesize changeNotifier=_changeNotifier - In the implementation block
@property (nonatomic,readonly) TSKSelectionDispatcher * selectionDispatcher;                                   //@synthesize selectionDispatcher=_selectionDispatcher - In the implementation block
@property (assign,nonatomic,__weak) id<TSKDocumentRootDelegate> delegate; 
@property (nonatomic,readonly) char isCollaborativeClient; 
@property (nonatomic,readonly) char isCollaborativeClientOrServer; 
@property (nonatomic,readonly) char isCollaborativeServer; 
@property (nonatomic,readonly) unsigned long long maxMediaItemFileSize; 
@property (nonatomic,readonly) unsigned long long maxEmbeddedMediaItemFileSize; 
@property (nonatomic,readonly) unsigned long long maximumDocumentSize; 
@property (nonatomic,readonly) unsigned long long availableSizeForMediaItems; 
@property (nonatomic,readonly) unsigned long long minLargeDataLengthInBytes; 
@property (assign,nonatomic) char shouldPreventImageConversionOnOpen; 
@property (retain) TSULocale * documentLocale; 
@property (nonatomic,readonly) TSULocale * documentCreationLocale;                                             //@synthesize documentCreationLocale=_documentCreationLocale - In the implementation block
@property (nonatomic,readonly) char hasFloatingLocale; 
@property (nonatomic,readonly) unsigned long long applicationType; 
@property (assign,getter=isFindActive,nonatomic) char findActive;                                              //@synthesize isFindActive=_isFindActive - In the implementation block
@property (nonatomic,readonly) char canUseHEVC; 
@property (nonatomic,readonly) NSString * documentLanguage; 
@property (nonatomic,readonly) unsigned long long writingDirection; 
@property (nonatomic,readonly) unsigned long long writingDirectionForStorage; 
@property (nonatomic,readonly) TSKAnnotationAuthorStorage * annotationAuthorStorage;                           //@synthesize annotationAuthorStorage=_annotationAuthorStorage - In the implementation block
@property (nonatomic,retain) TSKAnnotationAuthor * authorForFiltering;                                         //@synthesize authorForFiltering=_authorForFiltering - In the implementation block
@property (nonatomic,readonly) char isBeingLocalized;                                                          //@synthesize isBeingLocalized=_isBeingLocalized - In the implementation block
@property (assign,getter=isDocumentCurrentlyImporting,nonatomic) char documentCurrentlyImporting;              //@synthesize documentCurrentlyImporting=_documentCurrentlyImporting - In the implementation block
@property (nonatomic,readonly) char freehandDrawingsRequireSpacerShape; 
@property (assign,nonatomic) char shouldMeasureNegativelyTrackedTextCorrectly;                                 //@synthesize shouldMeasureNegativelyTrackedTextCorrectly=_shouldMeasureNegativelyTrackedTextCorrectly - In the implementation block
@property (assign,nonatomic) char useOptimizedTextVerticalAlignment;                                           //@synthesize useOptimizedTextVerticalAlignment=_useOptimizedTextVerticalAlignment - In the implementation block
@property (nonatomic,readonly) char shouldUseAnchoredDrawableWrapSlop; 
@property (nonatomic,readonly) char hasICloudConflict; 
@property (nonatomic,readonly) id<TSULogContext> logContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)needsObjectUUID;
-(id)UIStateForChart:(id)arg1 ;
-(void)setUIState:(id)arg1 forChart:(id)arg2 ;
-(TSCHTextCache *)tsch_textCache;
-(void)setTheme:(TSSTheme *)arg1 ;
-(TSSTheme *)theme;
-(TSSStylesheet *)stylesheet;
-(void)setThemeForTemplateImport:(id)arg1 ;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1 ;
-(id)stylesToNotResizeInStylesheet:(id)arg1 ;
-(id)migratedStyleForStyle:(id)arg1 ;
-(void)migrateStylesInObjects:(id)arg1 ;
-(void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2 ;
-(char)objectsNeedToBeMigrated:(id)arg1 ;
-(id)migratedPresetForPreset:(id)arg1 ;
-(void)migrateStylesInObjects:(id)arg1 changePropagationMap:(id)arg2 ;
-(id)migratedPropertyMapForPropertyMap:(id)arg1 ;
-(void)dealloc;
-(id<TSKDocumentRootDelegate>)delegate;
-(void)setDelegate:(id<TSKDocumentRootDelegate>)arg1 ;
-(unsigned long long)applicationType;
-(id)initWithContext:(id)arg1 ;
-(void)commonInit;
-(id<TSULogContext>)logContext;
-(unsigned long long)writingDirection;
-(void)willClose;
-(void)documentDidLoad;
-(NSDictionary *)additionalDocumentPropertiesForWrite;
-(void)didAcquireReadLock;
-(void)willRelinquishReadLock;
-(id)modelEnumerator;
-(id)modelEnumeratorForObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)dataFromDocumentCachePath:(id)arg1 ;
-(char)writeData:(id)arg1 atDocumentCachePath:(id)arg2 ;
-(CGImageSourceRef)newImageSourceForDocumentCachePath:(id)arg1 ;
-(id)uniqueDocumentCachePathForProposedPath:(id)arg1 ;
-(void)didSaveWithEncryptionChange;
-(char)isDirectionRightToLeft;
-(char)documentDisallowsHighlightsOnStorage:(id)arg1 ;
-(id)modelEnumeratorWithFlags:(unsigned long long)arg1 ;
-(id)modelEnumeratorForObjectsOfClass:(Class)arg1 ;
-(id)modelEnumeratorForObjectsConformingToProtocol:(id)arg1 ;
-(id)modelEnumeratorForObjectsRespondingToSelector:(SEL)arg1 ;
-(long long)addObserverForICloudTeardownWithBlock:(/*^block*/id)arg1 ;
-(void)removeICloudTeardownObserver:(long long)arg1 ;
-(void)notifyICloudTeardownObservers;
-(char)hasICloudTeardownObserver;
-(char)hasICloudConflict;
-(void)updateForNonCommandChangesWithWriteLock:(id)arg1 ;
-(TSKAccessController *)accessController;
-(TSKChangeNotifier *)changeNotifier;
-(TSKPasteboardController *)pasteboardController;
-(void)setPasteboardController:(TSKPasteboardController *)arg1 ;
-(char)isFindActive;
-(void)setFindActive:(char)arg1 ;
-(TSKAnnotationAuthorStorage *)annotationAuthorStorage;
-(char)isBeingLocalized;
-(TSKDocumentSupport *)documentSupport;
-(id)customFormatList;
-(id)calculationEngine;
-(char)isCollaborativeClient;
-(void)saveToArchive:(DocumentArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const DocumentArchive*)arg1 unarchiver:(id)arg2 ;
-(void)setDocumentLocale:(TSULocale *)arg1 ;
-(char)shouldShowFloatingCommentInfo:(id)arg1 ;
-(unsigned long long)writingDirectionForStorage;
-(id)makeStyleMapper;
-(TSULocale *)documentLocale;
-(void)pauseRecalculation;
-(void)resumeRecalculation;
-(void)resumeRecalculationForBlock:(/*^block*/id)arg1 ;
-(TSKAnnotationAuthor *)authorForFiltering;
-(void)setAuthorForFiltering:(TSKAnnotationAuthor *)arg1 ;
-(id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsPassingTest:(/*^block*/id)arg2 ;
-(char)documentAllowsPencilAnnotationsOnModel:(id)arg1 ;
-(char)freehandDrawingsRequireSpacerShape;
-(char)shouldUseAnchoredDrawableWrapSlop;
-(char)isDocumentCurrentlyImporting;
-(char)updateDocumentLocaleToCurrentIfNeeded;
-(id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsOfClass:(Class)arg2 ;
-(void)setShouldMeasureNegativelyTrackedTextCorrectly:(char)arg1 ;
-(void)setUseOptimizedTextVerticalAlignment:(char)arg1 ;
-(NSString *)documentLanguage;
-(char)updateDocumentLocaleToUseLanguageIfNeeded:(id)arg1 ;
-(void)backgroundDocumentDidLoad;
-(char)hasFloatingLocale;
-(void)pauseRecalculationSometimeSoon;
-(void)blockForRecalcWithTimeout:(double)arg1 ;
-(id)makeIsolatedStyleMapper;
-(id)documentCachePathWithRelativePath:(id)arg1 ;
-(char)hasExpandedTables;
-(NSDictionary *)additionalDocumentSupportPropertiesForWrite;
-(void)setDocumentCurrentlyImporting:(char)arg1 ;
-(void)pauseRecalculationForBlock:(/*^block*/id)arg1 ;
-(id)boostPrimaryThreadQualityOfService;
-(void)setUpAccessControllerIfNeeded;
-(void)p_setUpControllersForBackground:(char)arg1 ;
-(id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsConformingToProtocol:(id)arg2 ;
-(id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsRespondingToSelector:(SEL)arg2 ;
-(TSULocale *)documentCreationLocale;
-(long long)addObserverForICloudTeardownSuspendingCollaboration:(char)arg1 block:(/*^block*/id)arg2 ;
-(char)shouldPreventImageConversionOnOpen;
-(void)setShouldPreventImageConversionOnOpen:(char)arg1 ;
-(unsigned long long)maxMediaItemFileSize;
-(unsigned long long)maxEmbeddedMediaItemFileSize;
-(unsigned long long)maximumDocumentSize;
-(unsigned long long)availableSizeForMediaItems;
-(unsigned long long)minLargeDataLengthInBytes;
-(char)canUseHEVC;
-(id)tableIdRemappingCommandsForTablesInStorages:(id)arg1 ;
-(id)tableIdRemappingCommandsForTablesInDrawables:(id)arg1 ;
-(void)updateAnnotationAuthorList:(id)arg1 ;
-(void)p_addUploadObserver;
-(void)prepareForCollaborationSessionAfterConnectingAndCanPerformUserActionsIfNeeded;
-(id)commandForRemovingCommentsFromDrawables:(id)arg1 context:(id)arg2 ;
-(void)removeAllAnnotationsFromDrawables:(id)arg1 ;
-(id)commandForUpdatingAfterInsertingDrawables:(id)arg1 context:(id)arg2 ;
-(void)dumpReaderWriterThreads;
-(char)isCollaborativeClientOrServer;
-(char)isCollaborativeServer;
-(char)shouldDropOperationHistoryWithDocumentRevision:(id)arg1 ;
-(void)gilligan_documentDidInsertObject:(id)arg1 ;
-(void)gilligan_documentWillInsertObject:(id)arg1 ;
-(void)gilligan_documentWillRemoveObject:(id)arg1 ;
-(void)gilligan_documentDidRemoveObject:(id)arg1 ;
-(TSKSelectionDispatcher *)selectionDispatcher;
-(char)shouldMeasureNegativelyTrackedTextCorrectly;
-(char)useOptimizedTextVerticalAlignment;
-(TSKDocumentSupport *)documentSupportIfAvailable;
@end

