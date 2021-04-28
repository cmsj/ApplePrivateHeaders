/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSHistoryConnectionProtocol
@required
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1;
-(void)queryMemoryFootprint:(/*^block*/id)arg1;
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(/*^block*/id)arg1;
-(void)connectWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)initializeCloudHistoryWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)releaseCloudHistory:(/*^block*/id)arg1;
-(void)ensureConnected:(/*^block*/id)arg1;
-(void)beginHistoryAccessSession:(/*^block*/id)arg1;
-(void)getServiceInfo:(/*^block*/id)arg1;
-(void)beginURLCompletionSession:(/*^block*/id)arg1;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1;

@end
