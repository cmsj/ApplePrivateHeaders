/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/Versions/A/MetricKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKitServices/MXService.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MXHangTracerService : MXService {

	NSMutableArray* _hangTracerDataPaths;
	NSMutableArray* _unarchivedHangTracerData;
	NSObject*<OS_os_log> _MXHangTracerServiceLogHandle;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (retain) NSMutableArray * hangTracerDataPaths;                             //@synthesize hangTracerDataPaths=_hangTracerDataPaths - In the implementation block
@property (retain) NSMutableArray * unarchivedHangTracerData;                        //@synthesize unarchivedHangTracerData=_unarchivedHangTracerData - In the implementation block
@property (retain) NSObject*<OS_os_log> MXHangTracerServiceLogHandle;                //@synthesize MXHangTracerServiceLogHandle=_MXHangTracerServiceLogHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
+(id)sharedHangTracerService;
-(id)init;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)startService;
-(char)stopService;
-(char)diagnosticsSupported;
-(char)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(char)_updateService;
-(void)unarchiveHangTracerDataForDateString:(id)arg1 ;
-(NSMutableArray *)hangTracerDataPaths;
-(void)setHangTracerDataPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unarchivedHangTracerData;
-(void)setUnarchivedHangTracerData:(NSMutableArray *)arg1 ;
-(NSObject*<OS_os_log>)MXHangTracerServiceLogHandle;
-(void)setMXHangTracerServiceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

