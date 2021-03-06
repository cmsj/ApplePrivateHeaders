/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, AMActionMetadataStore, AMApplicationDefinition, NSArray;

@interface AMActionRegistry : NSObject {

	char _didLoadAllRegularActions;
	char _didLoadAllConversionActions;
	NSMutableArray* _cachesInResolutionOrder;
	NSMutableArray* _customActions;
	NSMutableArray* _applicationDefinitionActions;
	NSMutableArray* _internalConversionActions;
	NSMutableDictionary* _explicitlyLoadedActionsByBundleIdentifier;
	NSMutableArray* _invalidActions;
	char _shouldFilterActions;
	AMActionMetadataStore* _actionMetadataStore;
	AMApplicationDefinition* _applicationDefinitionAsActionFilter;

}

@property (retain) NSMutableArray * cachesInResolutionOrder;                                             //@synthesize cachesInResolutionOrder=_cachesInResolutionOrder - In the implementation block
@property (retain) NSMutableArray * customActions;                                                       //@synthesize customActions=_customActions - In the implementation block
@property (retain) NSMutableArray * applicationDefinitionActions;                                        //@synthesize applicationDefinitionActions=_applicationDefinitionActions - In the implementation block
@property (retain) NSMutableArray * invalidActions;                                                      //@synthesize invalidActions=_invalidActions - In the implementation block
@property (retain) NSMutableArray * internalConversionActions;                                           //@synthesize internalConversionActions=_internalConversionActions - In the implementation block
@property (retain) NSMutableDictionary * explicitlyLoadedActionsByBundleIdentifier;                      //@synthesize explicitlyLoadedActionsByBundleIdentifier=_explicitlyLoadedActionsByBundleIdentifier - In the implementation block
@property (assign) char didLoadAllRegularActions;                                                        //@synthesize didLoadAllRegularActions=_didLoadAllRegularActions - In the implementation block
@property (assign) char didLoadAllConversionActions;                                                     //@synthesize didLoadAllConversionActions=_didLoadAllConversionActions - In the implementation block
@property (retain) AMActionMetadataStore * actionMetadataCache;                                          //@synthesize actionMetadataStore=_actionMetadataStore - In the implementation block
@property (nonatomic,retain) AMApplicationDefinition * applicationDefinitionAsActionFilter;              //@synthesize applicationDefinitionAsActionFilter=_applicationDefinitionAsActionFilter - In the implementation block
@property (assign,nonatomic) char shouldFilterActions;                                                   //@synthesize shouldFilterActions=_shouldFilterActions - In the implementation block
@property (nonatomic,readonly) NSArray * regularActions; 
@property (nonatomic,readonly) NSArray * conversionActions; 
@property (nonatomic,readonly) char isFilteringActions; 
+(id)sharedActionRegistry;
+(void)rebuildCache;
-(id)init;
-(NSMutableArray *)customActions;
-(void)setCustomActions:(NSMutableArray *)arg1 ;
-(id)regularActionWithBundleIdentifier:(id)arg1 ;
-(id)actionNamesWithBundleIdentifiers:(id)arg1 ;
-(NSArray *)conversionActions;
-(void)incrementUseCountForActionWithBundleIdenifier:(id)arg1 ;
-(id)customActionFromCustomActionDictionary:(id)arg1 ;
-(NSArray *)regularActions;
-(void)loadDefinitionFileActions;
-(void)setApplicationDefinitionAsActionFilter:(AMApplicationDefinition *)arg1 ;
-(char)isFilteringActions;
-(id)importActionWithURL:(id)arg1 replaceExisting:(char)arg2 error:(id*)arg3 ;
-(id)dateAddedForActionWithBundleIdentifier:(id)arg1 ;
-(unsigned long long)useCountForActionWithBundleIdentifier:(id)arg1 ;
-(id)genericActionBundleForIdentifier:(id)arg1 ;
-(id)customActionDictionaryWithUUID:(id)arg1 ;
-(void)removeCustomActionDictionary:(id)arg1 ;
-(void)addCustomActionDictionary:(id)arg1 ;
-(NSMutableArray *)cachesInResolutionOrder;
-(NSMutableArray *)applicationDefinitionActions;
-(void)setApplicationDefinitionActions:(NSMutableArray *)arg1 ;
-(void)_rebuildCachesIfNeeded;
-(id)_allCachesInResolutionOrder;
-(void)setCachesInResolutionOrder:(NSMutableArray *)arg1 ;
-(NSMutableArray *)invalidActions;
-(void)setInvalidActions:(NSMutableArray *)arg1 ;
-(void)writeCache;
-(NSMutableArray *)internalConversionActions;
-(void)setInternalConversionActions:(NSMutableArray *)arg1 ;
-(char)didLoadAllConversionActions;
-(void)_loadInternalConversionActions;
-(void)_loadAllActionsForActionType:(id)arg1 ;
-(void)setDidLoadAllConversionActions:(char)arg1 ;
-(char)didLoadAllRegularActions;
-(void)setDidLoadAllRegularActions:(char)arg1 ;
-(NSMutableDictionary *)explicitlyLoadedActionsByBundleIdentifier;
-(void)_loadAllRegularActionsIfNeeded;
-(char)shouldFilterActions;
-(AMApplicationDefinition *)applicationDefinitionAsActionFilter;
-(void)_addExplicitlyLoadedActionsIntoArray:(id)arg1 ;
-(id)genericActionFromCacheForIdentifier:(id)arg1 ;
-(void)_loadAllConversionActionsIfNeeded;
-(id)loadActionWithURL:(id)arg1 replaceExisting:(char)arg2 error:(id*)arg3 ;
-(void)setExplicitlyLoadedActionsByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(AMActionMetadataStore *)actionMetadataCache;
-(void)setActionMetadataCache:(AMActionMetadataStore *)arg1 ;
-(void)_loadActionMetadataCacheIfNeeded;
-(void)setShouldFilterActions:(char)arg1 ;
@end

