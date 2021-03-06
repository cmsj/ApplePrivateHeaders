/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MAEdge.h>
#import <libobjc.A.dylib/PGGraphElement.h>

@class PGGraph, NSString;

@interface PGGraphEdge : MAEdge <PGGraphElement>

@property (readonly) PGGraph * graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filter;
-(id)propertyForKey:(id)arg1 ;
-(void)setWeight:(float)arg1 ;
-(unsigned long long)propertiesCount;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)keywordDescription;
-(void)concreteEdgeSuperAccess_setPropertyValue:(id)arg1 forKey:(id)arg2 ;
@end

