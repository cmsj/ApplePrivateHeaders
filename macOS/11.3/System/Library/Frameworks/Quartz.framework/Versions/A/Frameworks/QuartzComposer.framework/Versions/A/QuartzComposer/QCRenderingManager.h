/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSDictionary, QCPatch;

@interface QCRenderingManager : NSObject {

	QCExecutionArray* _patches;
	QCExecutionStride* _iterationStride;
	QCIterationStack* _iterationStack;
	double _nextIdleTime;
	double _previousExecutionTime;
	NSDictionary* _previousArguments;
	unsigned long long _previousPatchCount;
	unsigned long long _subpatchesCount;
	unsigned long long _iteration;
	unsigned long long* _indices;
	unsigned long long _indicesCapacity;
	char _canReset;
	CGRect _dirtyRect;
	CGRect _previousDirtyRect;
	CGRect _dod;
	QCPatch* _rootPatch;
	char _needsRender;
	char _isIterator;
	void** _unused[4];

}
+(void)initialize;
-(void)finalize;
-(void)dealloc;
-(void)_reset;
-(unsigned long long)_currentIteration;
-(id)initWithPatch:(id)arg1 ;
-(double)nextExecutionTime:(double)arg1 arguments:(id)arg2 ;
-(char)renderAtTime:(double)arg1 arguments:(id)arg2 ;
-(char)addPatch:(id)arg1 context:(id)arg2 time:(double)arg3 arguments:(id)arg4 nextExecutionTime:(double)arg5 ;
-(void)_nextFrame;
-(id)_renderTree;
-(void)finalize_QCRenderingManager;
-(void)_nextIteration;
-(char)needsRender;
-(double)nextIdleTime;
-(unsigned long long)currentIteration;
@end

