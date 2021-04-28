/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSQueryPerformerProtocol <NSObject>
@property (nonatomic,readonly) char isCancelled; 
@property (assign,nonatomic) SCD_Struct_CL1 statistics; 
@property (assign,nonatomic) double precision; 
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection; 
@required
+(id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;
+(unsigned long long)numberOfRegionsPerBatch;
+(double)defaultPrecision;
-(void)cancel;
-(SCD_Struct_CL1)statistics;
-(char)isCancelled;
-(void)setStatistics:(SCD_Struct_CL1)arg1;
-(double)precision;
-(void)setPrecision:(double)arg1;
-(id)regions;
-(void)submitWithHandler:(/*^block*/id)arg1;
-(NSObject*<OS_os_log>)loggingConnection;
-(char)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;
-(unsigned long long)cacheItems:(id)arg1;
-(void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg1;
-(void)logGeoLookupFailureResult;
-(void)setLoggingConnection:(id)arg1;

@end
