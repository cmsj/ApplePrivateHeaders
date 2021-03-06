/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NURenderContext, NUSourceNode, NSError, NSString, NURenderNode;

@interface NUCacheNode : NURenderNode {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NURenderContext* _renderContext;
	NUSourceNode* _sourceNode;
	NSError* _sourceError;
	long long _subsampleFactor;
	NSString* _cachedCacheIdentifier;

}

@property (retain) NSString * cachedCacheIdentifier;                    //@synthesize cachedCacheIdentifier=_cachedCacheIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * cacheIdentifier; 
@property (nonatomic,readonly) long long subsampleFactor;               //@synthesize subsampleFactor=_subsampleFactor - In the implementation block
@property (nonatomic,readonly) NURenderNode * inputNode; 
+(id)registry;
+(id)cacheDirectoryURL;
+(id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
+(void)_ensureCacheDirectoryURL:(id)arg1 ;
+(void)_pruneCacheDirectory:(id)arg1 toSize:(long long)arg2 ;
+(long long)_maxCacheDirectorySize;
+(void)clearCacheDirectory;
-(unsigned long long)_hash;
-(char)isResolved;
-(long long)sampleMode;
-(NSString *)cacheIdentifier;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(void)nu_updateDigest:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(char)requiresVideoComposition;
-(char)requiresAudioMix;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(char)isEqualToRenderNode:(id)arg1 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 ;
-(NURenderNode *)inputNode;
-(long long)subsampleFactor;
-(id)initWithInput:(id)arg1 settings:(id)arg2 subsampleFactor:(long long)arg3 ;
-(id)descriptionSubClassHook;
-(long long)subsampleFactorForScale:(SCD_Struct_NU8)arg1 ;
-(char)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2 ;
-(id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id*)arg2 ;
-(void)resolveWithSourceNode:(id)arg1 error:(id)arg2 ;
-(void)_resolveWithSourceNode:(id)arg1 error:(id)arg2 ;
-(id)resolvedSourceNode:(out id*)arg1 ;
-(id)persistentURLPrefix;
-(id)temporaryURLPrefix;
-(id)persistentURL;
-(id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2 ;
-(char)installTemporaryURL:(id)arg1 intoPersistentURL:(id)arg2 error:(out id*)arg3 ;
-(void)resolveSourceWithResponse:(id)arg1 ;
-(NSString *)cachedCacheIdentifier;
-(void)setCachedCacheIdentifier:(NSString *)arg1 ;
@end

