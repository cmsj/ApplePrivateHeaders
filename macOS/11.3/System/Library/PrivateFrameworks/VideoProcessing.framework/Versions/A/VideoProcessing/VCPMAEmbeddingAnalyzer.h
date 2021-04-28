/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCPObjectPool, VCPSceneProcessingImageManager;

@interface VCPMAEmbeddingAnalyzer : NSObject {

	VCPObjectPool* _sessionPool;
	VCPSceneProcessingImageManager* _imageManager;

}
-(id)init;
-(int)_loadImageURL:(id)arg1 withSession:(id)arg2 andRequestHandler:(id*)arg3 ;
-(void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 preferANE:(char)arg3 ;
-(void)analyzeWithImageURL:(id)arg1 requestTypes:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
