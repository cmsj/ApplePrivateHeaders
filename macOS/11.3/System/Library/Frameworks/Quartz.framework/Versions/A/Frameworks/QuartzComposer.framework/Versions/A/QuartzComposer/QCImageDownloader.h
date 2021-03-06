/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCDownloadPatch.h>

@class QCStringPort, QCImagePort, QCNumberPort, QCBooleanPort, QCCache;

@interface QCImageDownloader : QCDownloadPatch {

	QCStringPort* inputURL;
	QCImagePort* outputImage;
	QCNumberPort* outputProgress;
	QCBooleanPort* outputSignal;
	char _synchronousMode;
	unsigned long long _maxCacheSize;
	char _colorCorrection;
	QCBooleanPort* _signalPort;
	QCCache* _cache;
	unsigned _target;
	unsigned long long _mipmapLevels;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(id)serializedStateKeysWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(char)synchronousMode;
-(void)setSynchronousMode:(char)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)cleanup:(id)arg1 ;
-(id)createResourceWithDownloadedData:(id)arg1 sourceURL:(id)arg2 ;
-(void)setColorCorrection:(char)arg1 ;
-(unsigned long long)maximumCacheSize;
-(void)setMaximumCacheSize:(unsigned long long)arg1 ;
-(void)_addImageToCache:(id)arg1 ;
@end

