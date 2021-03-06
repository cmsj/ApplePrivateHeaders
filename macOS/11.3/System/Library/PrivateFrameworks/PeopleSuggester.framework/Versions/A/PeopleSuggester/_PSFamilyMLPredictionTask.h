/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying_DKKnowledgeSaving;
@class NSString;

@interface _PSFamilyMLPredictionTask : NSObject {

	id<_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;
	NSString* _directory;

}

@property (nonatomic,copy,readonly) NSString * directory;                                              //@synthesize directory=_directory - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(NSString *)directory;
-(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)arg1 ;
-(void)execute;
-(id)contactKeysToFetch;
-(id)contactsInContactStore;
-(id)knowledgeEventUsingPredictions:(id)arg1 familyRelations:(id)arg2 ;
@end

