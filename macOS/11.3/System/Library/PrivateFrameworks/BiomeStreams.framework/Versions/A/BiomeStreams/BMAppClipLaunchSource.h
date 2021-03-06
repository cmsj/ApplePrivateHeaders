/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BMStoreSource.h>

@class _CDClientContext, _DKKnowledgeStore;

@interface BMAppClipLaunchSource : BMStoreSource {

	_CDClientContext* _contextStore;
	_DKKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,readonly) _CDClientContext * contextStore;                 //@synthesize contextStore=_contextStore - In the implementation block
@property (nonatomic,readonly) _DKKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(_DKKnowledgeStore *)knowledgeStore;
-(_CDClientContext *)contextStore;
@end

