/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUMomentsControllerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<TUMomentsControllerDataSourceDelegate> delegate; 
@required
-(void)invalidate;
-(id<TUMomentsControllerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)endRequestWithTransactionID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)registerStreamToken:(long long)arg1 requesterID:(id)arg2 remoteIDSDestinations:(id)arg3 remoteMomentsAvailable:(char)arg4 completion:(/*^block*/id)arg5;
-(void)unregisterStreamToken:(long long)arg1 completion:(/*^block*/id)arg2;

@end
