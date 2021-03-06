/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUMomentsControllerDataSourceDelegate <NSObject>
@required
-(void)dataSource:(id)arg1 didUpdateCapabilities:(id)arg2 forVideoStreamToken:(long long)arg3;
-(void)dataSource:(id)arg1 willCaptureRemoteRequestFromRequesterID:(id)arg2;
-(void)dataSource:(id)arg1 didReceiveLocallyRequestedMomentDescriptor:(id)arg2;
-(void)serverDiedForDataSource:(id)arg1;

@end

