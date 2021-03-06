/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAP2Storage <NSObject>
@property (assign,nonatomic,__weak) id<HAP2StorageDelegate> delegate; 
@optional
-(void)startUpWithCompletion:(/*^block*/id)arg1;
-(void)shutDownWithCompletion:(/*^block*/id)arg1;

@required
-(id<HAP2StorageDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)hasKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchControllerKeysWithCompletion:(/*^block*/id)arg1;
-(void)saveKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeCacheForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)saveCacheForIdentifier:(id)arg1 data:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchCacheForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchKeysForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeControllerKeyWithCompletion:(/*^block*/id)arg1;
-(void)saveControllerIdentity:(id)arg1 completion:(/*^block*/id)arg2;

@end

