/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVSceneTaxonomy;

@interface VCPSceneTaxonomy : NSObject {

	PVSceneTaxonomy* _sceneTaxonomy;

}
+(id)sharedTaxonomy;
-(id)init;
-(id)sceneNameFromSceneId:(unsigned)arg1 ;
-(id)sceneIdFromSceneName:(id)arg1 ;
@end
