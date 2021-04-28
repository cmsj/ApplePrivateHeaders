/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAnisetteProvisioningClientProtocol <NSObject>
@required
-(void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(char)arg2 withCompletion:(/*^block*/id)arg3;
-(void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)eraseAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)provisionAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end
