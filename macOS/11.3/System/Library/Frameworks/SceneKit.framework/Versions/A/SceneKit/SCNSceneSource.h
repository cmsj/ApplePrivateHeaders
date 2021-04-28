/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSDictionary, NSURL, NSData, NSString;

@interface SCNSceneSource : NSObject <NSKeyedUnarchiverDelegate> {

	C3DSceneSourceRef _sceneSource;
	C3DSceneRef _lastLoadedScene;
	NSDictionary* _lastOptions;
	char _sceneLoaded;
	NSDictionary* _sceneSourceOptions;

}

@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sceneSourceWithURL:(id)arg1 options:(id)arg2 ;
+(id)sceneSourceWithData:(id)arg1 options:(id)arg2 ;
+(id)sceneTypes;
+(id)sceneFileTypes;
+(char)_shouldCacheWithOptions:(id)arg1 ;
+(id)_cachedSceneSourceForURL:(id)arg1 options:(id)arg2 ;
+(void)_cacheSceneSource:(id)arg1 forURL:(id)arg2 options:(id)arg3 ;
+(void)_removeCachedSceneSourceIfNeededForURL:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSData *)data;
-(id)propertyForKey:(id)arg1 ;
-(NSURL *)url;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)debugQuickLookObject;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(C3DLibraryRef)library;
-(id)sceneWithOptions:(id)arg1 error:(id*)arg2 ;
-(C3DSceneRef)_createSceneRefWithOptions:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(long long)sceneCount;
-(id)sceneWithOptions:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(id)copyPropertiesAtIndex:(long long)arg1 options:(id)arg2 ;
-(id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2 ;
-(id)identifiersOfEntriesWithClass:(Class)arg1 ;
-(long long)countOfScenes;
-(id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 ;
-(id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(C3DSceneSourceRef)sceneSourceRef;
-(id)entryWithID:(id)arg1 withClass:(Class)arg2 ;
-(id)IDsOfEntriesWithClass:(Class)arg1 ;
-(long long)sourceStatus;
-(char)canExportToColladaWithNoDataLoss;
-(id)performConsistencyCheck;
-(id)sceneWithClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)debugQuickLookData;
-(id)sceneSourceOptions;
-(id)_sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(/*^block*/id)arg3 ;
-(id)sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(/*^block*/id)arg3 ;
-(char)_appendToEntries:(id)arg1 entriesWithType:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 entryObjectConstructor:(/*^block*/id)arg4 ;
-(id)c3dDataRepresentation;
-(id)entriesPassingTest:(/*^block*/id)arg1 ;
@end
