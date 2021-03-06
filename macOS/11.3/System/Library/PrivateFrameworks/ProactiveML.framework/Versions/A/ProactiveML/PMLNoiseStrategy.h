/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMLNoiseStrategy <NSObject,PMLPlistAndChunksSerializableProtocol>
@required
-(void)addNoiseToSparseVector:(id)arg1;
-(void)addNoiseToSparseMatrix:(id)arg1;
-(char)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(char)arg2 scaleFactor:(float*)arg3;

@end

