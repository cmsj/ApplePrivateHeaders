/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICFlowControl.h>

@interface _PIVideoStabilizeFlowControl : NSObject <ICFlowControl> {

	/*^block*/id _progressHandler;
	double _rangeMin;
	double _rangeMax;
	/*^block*/id _shouldCancelHandler;

}

@property (nonatomic,copy) id progressHandler;                  //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) double rangeMin;                   //@synthesize rangeMin=_rangeMin - In the implementation block
@property (assign,nonatomic) double rangeMax;                   //@synthesize rangeMax=_rangeMax - In the implementation block
@property (nonatomic,copy) id shouldCancelHandler;              //@synthesize shouldCancelHandler=_shouldCancelHandler - In the implementation block
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(double)rangeMin;
-(double)rangeMax;
-(BOOL)ICShouldBeCanceled;
-(void)ICReportProgress:(float)arg1 ;
-(void)setRangeMin:(double)arg1 ;
-(void)setRangeMax:(double)arg1 ;
-(id)shouldCancelHandler;
-(void)setShouldCancelHandler:(id)arg1 ;
@end

