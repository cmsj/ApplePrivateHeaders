/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeSaving_DKKnowledgeQuerying;
@interface PHACoreDuetDatasetStorage : NSObject {

	id<_DKKnowledgeSaving><_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,readonly) id<_DKKnowledgeSaving><_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id)init;
-(id<_DKKnowledgeSaving><_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)addSample:(id)arg1 toDataset:(id)arg2 ;
-(id)samplesForDataset:(id)arg1 subset:(id)arg2 ;
-(id)_getEventStreamForDatasetName:(id)arg1 ;
@end

