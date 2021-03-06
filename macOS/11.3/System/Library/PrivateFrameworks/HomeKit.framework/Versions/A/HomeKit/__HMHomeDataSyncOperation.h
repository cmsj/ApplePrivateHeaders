/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@class HMHomeManager;

@interface __HMHomeDataSyncOperation : HMFOperation {

	char _refresh;
	HMHomeManager* _manager;

}

@property (__weak,readonly) HMHomeManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (getter=isRefresh) char refresh;                        //@synthesize refresh=_refresh - In the implementation block
-(HMHomeManager *)manager;
-(void)main;
-(id)initWithHomeManager:(id)arg1 ;
-(void)setRefresh:(char)arg1 ;
-(id)initWithHomeManager:(id)arg1 timeout:(double)arg2 ;
-(char)isRefresh;
@end

