/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSString, NSURL, NSMutableDictionary, SUCatalog, NSObject;

@interface SUCatalogDataManager : NSObject {

	NSString* _catalogEntityTag;
	NSURL* _currentlySetCatalogURL;
	NSMutableDictionary* _lastClientRetrievalPostDateByKey;
	char _isAppleSeedCatalogURL;
	char _isCatalogEVProtected;
	char _isDefaultCatalogURL;
	NSString* _cachePathRoot;
	SUCatalog* _catalog;
	NSObject*<OS_dispatch_semaphore> _inFlightSemaphore;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSObject*<OS_dispatch_queue> _loadQueue;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}

@property (nonatomic,retain) SUCatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
+(id)sharedCatalogDataManager;
-(void)invalidateResourcesForProduct:(id)arg1 ;
-(void)undoRetrieveDistributionDataForProduct:(id)arg1 ;
-(char)isCurrentCatalogAppleSeed;
-(char)isCurrentCatalogDefault;
-(void)dumpStateFromCoder:(id)arg1 ;
-(id)currentlySetCatalogURL;
-(void)retrieveDistributionDataForProduct:(id)arg1 preferredLocalizations:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)dumpDebugInfo;
-(char)isCurrentCatalogEVProtected;
-(void)retrievePKMDataForProduct:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)retrieveIntegrityInformationForProduct:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)enumerateProductsWithHandler:(/*^block*/id)arg1 ;
-(void)retrieveCatalogWithHandler:(/*^block*/id)arg1 ;
-(void)_purgeChangedAndRemovedProductsFromCache;
-(id)_cachePathForURL:(id)arg1 inProduct:(id)arg2 ;
-(void)_retrieveURL:(id)arg1 forProduct:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_removeCacheForProduct:(id)arg1 reason:(id)arg2 ;
-(id)_cachePathForProduct:(id)arg1 ;
-(void)restoreFromCoder:(id)arg1 ;
-(void)archiveToCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)resetState;
-(SUCatalog *)catalog;
-(void)setCatalog:(SUCatalog *)arg1 ;
@end

