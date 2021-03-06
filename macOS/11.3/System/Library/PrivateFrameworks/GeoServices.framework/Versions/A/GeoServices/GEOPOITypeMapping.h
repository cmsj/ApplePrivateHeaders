/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSSet, NSDictionary, geo_isolater, GEOResourceManifestManager, GEOResourceManager, NSString;

@interface GEOPOITypeMapping : NSObject <GEOResourceManifestTileGroupObserver> {

	NSSet* _alwaysVisibleTypes;
	NSDictionary* _categoryToTypeMapping;
	NSDictionary* _typeToCategoryMapping;
	geo_isolater* _accessLock;
	GEOResourceManifestManager* _manifestManager;
	GEOResourceManager* _resourceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMapping;
-(void)dealloc;
-(id)init;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)typesForPOICategories:(id)arg1 ;
-(char)isAlwaysVisiblePOIType:(int)arg1 ;
-(id)categoryForPOIType:(int)arg1 ;
-(void)_tearDown;
-(id)initWithResourceManifestManager:(id)arg1 resourceManager:(id)arg2 ;
-(id)alwaysVisibleTypes;
-(id)typeToCategoryMapping;
-(id)categoryToTypeMapping;
-(void)parsePOICategoriesJSON:(id)arg1 ;
-(id)parseVisiblePOITypesJSON:(id)arg1 ;
-(char)parseCategoryMappingJSON:(id)arg1 categoryToPOIType:(id*)arg2 POITypeToCategory:(id*)arg3 ;
-(void)loadPOICategoriesJSON;
-(void)clearCachedValues;
@end

