/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLBatchProvider.h>

@protocol MLBatchProvider;
@class NSArray;

@interface MLIndexedBatchProvider : NSObject <MLBatchProvider> {

	id<MLBatchProvider> _fullBatch;
	NSArray* _indices;

}

@property (nonatomic,retain) id<MLBatchProvider> fullBatch;              //@synthesize fullBatch=_fullBatch - In the implementation block
@property (nonatomic,retain) NSArray * indices;                          //@synthesize indices=_indices - In the implementation block
@property (nonatomic,readonly) long long count; 
-(long long)count;
-(id)featuresAtIndex:(long long)arg1 ;
-(NSArray *)indices;
-(id<MLBatchProvider>)fullBatch;
-(void)setFullBatch:(id<MLBatchProvider>)arg1 ;
-(id)initWithBatch:(id)arg1 indices:(id)arg2 error:(id*)arg3 ;
-(void)setIndices:(NSArray *)arg1 ;
@end

