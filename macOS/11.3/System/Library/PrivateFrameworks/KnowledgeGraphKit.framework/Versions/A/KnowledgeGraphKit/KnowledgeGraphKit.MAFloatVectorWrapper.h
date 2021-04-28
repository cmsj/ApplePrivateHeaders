/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface KnowledgeGraphKit.MAFloatVectorWrapper : NSObject <NSCopying, NSMutableCopying> {

	 _floatVector;

}

@property (readonly,nonatomic) long long count; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) long long hash; 
+(id)zerosOfCount:(long long)arg1 ;
+(id)onesOfCount:(long long)arg1 ;
+(id)repeatingFloat:(float)arg1 count:(long long)arg2 ;
-(id)copyWithZone:(void*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(long long)count;
-(id)data;
-(id)array;
-(float)mean;
-(float)standardDeviation;
-(float)floatAtIndex:(long long)arg1 ;
-(char)isApproximatelyEqualTo:(id)arg1 ;
-(float)sum;
-(id)initWithFloats:(const float*)arg1 count:(long long)arg2 ;
-(id)vectorBySubtractingVector:(id)arg1 ;
-(id)sliceFromStart:(long long)arg1 toEnd:(long long)arg2 ;
-(id)vectorByDividingByScalar:(float)arg1 ;
-(id)vectorByElementwiseRaisingToExponent:(float)arg1 ;
-(id)vectorByMultiplyingByScalar:(float)arg1 ;
-(id)vectorByAddingScalar:(float)arg1 ;
-(char)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2 ;
-(id)vectorByAddingVector:(id)arg1 ;
-(id)vectorBySubtractingScalar:(float)arg1 ;
-(id)vectorByElementwiseMultiplyingByWrapper:(id)arg1 ;
-(float)dotProductWithWrapper:(id)arg1 ;
-(float)sumOfSquares;
-(id)naturalLogarithm;
-(id)naturalLogarithmIfPositive;
-(id)init;
-(id)initWithArray:(id)arg1 ;
@end
