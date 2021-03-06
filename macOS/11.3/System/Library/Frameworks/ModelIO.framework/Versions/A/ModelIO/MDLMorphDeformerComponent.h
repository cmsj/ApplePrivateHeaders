/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, MDLAnimatedScalarArray;


@protocol MDLMorphDeformerComponent <MDLComponent>
@property (nonatomic,readonly) NSArray * targetShapes; 
@property (nonatomic,readonly) NSArray * shapeSetTargetWeights; 
@property (nonatomic,readonly) NSArray * shapeSetTargetCounts; 
@property (nonatomic,readonly) MDLAnimatedScalarArray * weights; 
@required
-(MDLAnimatedScalarArray *)weights;
-(NSArray *)shapeSetTargetCounts;
-(NSArray *)targetShapes;
-(NSArray *)shapeSetTargetWeights;

@end

