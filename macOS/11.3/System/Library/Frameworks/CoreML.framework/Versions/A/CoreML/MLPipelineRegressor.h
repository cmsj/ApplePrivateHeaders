/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLRegressor.h>

@class MLPipeline;

@interface MLPipelineRegressor : MLRegressor {

	MLPipeline* _engine;

}

@property (retain) MLPipeline * engine;                  //@synthesize engine=_engine - In the implementation block
@property (readonly) MLPipeline * pipeline; 
-(MLPipeline *)engine;
-(void)setEngine:(MLPipeline *)arg1 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLPipeline *)pipeline;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
@end

