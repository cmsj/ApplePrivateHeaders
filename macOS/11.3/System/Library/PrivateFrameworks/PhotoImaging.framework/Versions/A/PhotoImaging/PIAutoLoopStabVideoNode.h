/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderNode.h>

@class NSDictionary;

@interface PIAutoLoopStabVideoNode : NURenderNode {

	NSDictionary* _bakedRecipe;

}

@property (nonatomic,readonly) NSDictionary * bakedRecipe;              //@synthesize bakedRecipe=_bakedRecipe - In the implementation block
+(id)nodeWithInput:(id)arg1 recipe:(id)arg2 error:(out id*)arg3 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(char)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(char)requiresVideoComposition;
-(char)requiresAudioMix;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 bakedRecipe:(id)arg3 ;
-(NSDictionary *)bakedRecipe;
@end

