/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderJob.h>

@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob {

	AVAsset* _videoSource;
	NSDictionary* _recipe;

}

@property (nonatomic,retain) AVAsset * videoSource;              //@synthesize videoSource=_videoSource - In the implementation block
@property (nonatomic,retain) NSDictionary * recipe;              //@synthesize recipe=_recipe - In the implementation block
-(id)result;
-(id)cacheKey;
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
-(char)render:(out id*)arg1 ;
-(AVAsset *)videoSource;
-(void)setVideoSource:(AVAsset *)arg1 ;
-(char)wantsCompleteStage;
-(char)prepare:(out id*)arg1 ;
-(char)wantsOutputGeometry;
-(id)scalePolicy;
-(char)wantsOutputVideo;
-(id)analysisRequest;
@end

