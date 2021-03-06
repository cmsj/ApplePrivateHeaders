/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphPropertylessNode.h>
#import <libobjc.A.dylib/PGGraphPortraitTopic.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSString, NSArray;

@interface PGGraphMeaningNode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport> {

	NSString* _label;
	long long _isVeryMeaningfulCachedValue;

}

@property (nonatomic,readonly) NSString * pg_topic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long isVeryMeaningfulCachedValue;                      //@synthesize isVeryMeaningfulCachedValue=_isVeryMeaningfulCachedValue - In the implementation block
@property (readonly) PGGraphMeaningNode * parentMeaningNode; 
@property (getter=isVeryMeaningful,nonatomic,readonly) char veryMeaningful; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)meaningLabelsForMeaningNodes:(id)arg1 ;
+(id)submeaningOfMeaning;
+(id)eventOfMeaning;
+(id)momentOfMeaning;
-(unsigned short)domain;
-(NSString *)localizedName;
-(id)label;
-(id)initWithLabel:(id)arg1 ;
-(NSArray *)localizedSynonyms;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)momentNodes;
-(id)highlightNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(NSString *)pg_topic;
-(id)associatedNodesForRemoval;
-(void)enumerateMeaningfulEventsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSubmeaningsUsingBlock:(/*^block*/id)arg1 ;
-(void)traverseSubmeaningHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(void)traverseParentMeaningHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphMeaningNode *)parentMeaningNode;
-(char)isVeryMeaningful;
-(id)_localizationKeyForMeaningLabel:(id)arg1 ;
-(long long)isVeryMeaningfulCachedValue;
-(void)setIsVeryMeaningfulCachedValue:(long long)arg1 ;
@end

