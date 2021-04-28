/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMLTestFramework.framework/Versions/A/CoreMLTestFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface _MLTModelComparatorConfiguration : NSObject {

	unsigned _seed;
	unsigned long long _monteCarloCount;
	NSArray* _imageInputs;
	NSString* _modelAPath;
	NSString* _modelBPath;
	long long _modelAComputeUnit;
	long long _modelBComputeUnit;

}

@property (assign,nonatomic) unsigned seed;                                   //@synthesize seed=_seed - In the implementation block
@property (assign,nonatomic) unsigned long long monteCarloCount;              //@synthesize monteCarloCount=_monteCarloCount - In the implementation block
@property (nonatomic,retain) NSArray * imageInputs;                           //@synthesize imageInputs=_imageInputs - In the implementation block
@property (nonatomic,retain) NSString * modelAPath;                           //@synthesize modelAPath=_modelAPath - In the implementation block
@property (nonatomic,retain) NSString * modelBPath;                           //@synthesize modelBPath=_modelBPath - In the implementation block
@property (assign) long long modelAComputeUnit;                               //@synthesize modelAComputeUnit=_modelAComputeUnit - In the implementation block
@property (assign) long long modelBComputeUnit;                               //@synthesize modelBComputeUnit=_modelBComputeUnit - In the implementation block
-(id)init;
-(unsigned)seed;
-(void)setSeed:(unsigned)arg1 ;
-(unsigned long long)monteCarloCount;
-(void)setMonteCarloCount:(unsigned long long)arg1 ;
-(NSArray *)imageInputs;
-(void)setImageInputs:(NSArray *)arg1 ;
-(NSString *)modelAPath;
-(void)setModelAPath:(NSString *)arg1 ;
-(NSString *)modelBPath;
-(void)setModelBPath:(NSString *)arg1 ;
-(long long)modelAComputeUnit;
-(void)setModelAComputeUnit:(long long)arg1 ;
-(long long)modelBComputeUnit;
-(void)setModelBComputeUnit:(long long)arg1 ;
@end
