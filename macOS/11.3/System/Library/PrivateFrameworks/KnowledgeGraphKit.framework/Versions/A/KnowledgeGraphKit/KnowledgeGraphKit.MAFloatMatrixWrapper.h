/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface KnowledgeGraphKit.MAFloatMatrixWrapper : NSObject <NSCopying, NSMutableCopying> {

	 _floatMatrix;

}

@property (readonly,nonatomic) long long count; 
@property (readonly,nonatomic) long long rows; 
@property (readonly,nonatomic) long long columns; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long hash; 
+(id)wrapperWithData:(id)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
+(id)repeatingWithElement:(float)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
+(id)zerosWithRows:(long long)arg1 columns:(long long)arg2 ;
+(id)onesWithRows:(long long)arg1 columns:(long long)arg2 ;
-(id)copyWithZone:(void*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(long long)count;
-(id)data;
-(id)array;
-(long long)rows;
-(long long)columns;
-(float)mean;
-(char)isApproximatelyEqualTo:(id)arg1 ;
-(float)sum;
-(char)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2 ;
-(float)sumOfSquares;
-(id)initWithFloats:(const float*)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
-(float)floatAtRow:(long long)arg1 column:(long long)arg2 ;
-(id)row:(long long)arg1 ;
-(id)matrixBySubtractingMatrix:(id)arg1 ;
-(id)matrixBySubtractingScalar:(float)arg1 ;
-(id)matrixByAddingScalar:(float)arg1 ;
-(id)sumAlongAxis:(unsigned long long)arg1 ;
-(id)meanAlongAxis:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithRows:(id)arg1 ;
@end

