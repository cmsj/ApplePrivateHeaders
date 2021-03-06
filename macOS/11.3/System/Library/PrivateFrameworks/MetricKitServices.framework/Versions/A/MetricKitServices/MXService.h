/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/Versions/A/MetricKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MXService : NSObject {

	char _isStarted;
	long long _sourceID;

}

@property (readonly) char isStarted;                  //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) long long sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
-(id)init;
-(char)isStarted;
-(long long)sourceID;
-(char)startService;
-(char)stopService;
-(char)metricsSupported;
-(char)metricsAvailableForDate:(id)arg1 ;
-(char)diagnosticsSupported;
-(char)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getMetricsForClient:(id)arg1 dateString:(id)arg2 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(id)initWithSourceID:(long long)arg1 ;
-(id)pruneSourceData:(id)arg1 ;
@end

