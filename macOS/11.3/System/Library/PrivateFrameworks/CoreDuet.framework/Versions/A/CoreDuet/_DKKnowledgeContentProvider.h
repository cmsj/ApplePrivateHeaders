/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKContentProvider.h>

@protocol _DKKnowledgeQuerying;
@class NSString;

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider> {

	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

