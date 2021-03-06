/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderJob.h>

@protocol NUPurgeableStorage, NUScalePolicy;
@class NUPurgeableStoragePool, NUImageHistogram, CIRenderTask;

@interface NUHistogramRenderJob : NURenderJob {

	NUPurgeableStoragePool* _storagePool;
	id<NUPurgeableStorage> _renderDestination;
	NUImageHistogram* _histogram;
	CIRenderTask* _renderTask;
	id<NUScalePolicy> _scalePolicy;

}
-(id)result;
-(char)complete:(out id*)arg1 ;
-(id)cacheKey;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(char)render:(out id*)arg1 ;
-(char)wantsOutputGeometry;
-(char)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithHistogramRequest:(id)arg1 ;
-(id)histogramRequest;
@end

