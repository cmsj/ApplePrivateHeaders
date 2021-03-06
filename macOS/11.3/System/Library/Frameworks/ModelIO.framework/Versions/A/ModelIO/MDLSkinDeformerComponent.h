/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSData;


@protocol MDLSkinDeformerComponent <MDLComponent>
@property (nonatomic,readonly) NSArray * jointPaths; 
@property (nonatomic,readonly) NSData * jointBindTransforms; 
@property (nonatomic,readonly) SCD_Struct_MD1 meshBindTransform; 
@required
-(NSArray *)jointPaths;
-(NSData *)jointBindTransforms;
-(SCD_Struct_MD1)meshBindTransform;
-(unsigned long long)copyJointBindTransformsInto:(/*function pointer*/void**)arg1 maxCount:(unsigned long long)arg2;

@end

