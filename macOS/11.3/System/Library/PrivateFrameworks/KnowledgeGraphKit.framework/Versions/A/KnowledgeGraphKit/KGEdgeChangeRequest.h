/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KGEdge;
@class NSNumber, NSDictionary;

@interface KGEdgeChangeRequest : NSObject {

	id<KGEdge> _edge;
	NSNumber* _weight;
	NSDictionary* _properties;
	long long _mutationType;

}

@property (nonatomic,readonly) id<KGEdge> edge;                     //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) long long mutationType;              //@synthesize mutationType=_mutationType - In the implementation block
@property (nonatomic,retain) NSNumber * weight;                     //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy) NSDictionary * properties;               //@synthesize properties=_properties - In the implementation block
+(id)changeRequestForEdge:(id)arg1 ;
+(id)removeRequestForEdge:(id)arg1 ;
-(NSNumber *)weight;
-(void)setWeight:(NSNumber *)arg1 ;
-(id<KGEdge>)edge;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(long long)mutationType;
-(id)initWithMutationType:(long long)arg1 ;
@end

