/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDSiriAccessoryMonitorDelegate;
@class NSMapTable;

@interface HMDSiriAccessoryMonitor : NSObject {

	id<HMDSiriAccessoryMonitorDelegate> _delegate;
	NSMapTable* _accessories;

}

@property (nonatomic,__weak,readonly) id<HMDSiriAccessoryMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMapTable * accessories;                                           //@synthesize accessories=_accessories - In the implementation block
-(id<HMDSiriAccessoryMonitorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(NSMapTable *)accessories;
-(void)setAccessories:(NSMapTable *)arg1 ;
-(id)_getInfoForAccessory:(id)arg1 ;
-(char)hasAnyActiveTargetingAccessories;
-(id)_accessoriesTargetingAccessory:(id)arg1 ;
-(void)_addAccessory:(id)arg1 withTarget:(id)arg2 ;
-(void)_removeAccessory:(id)arg1 ;
-(void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2 ;
-(void)accessory:(id)arg1 setSupportsDragonSiri:(char)arg2 ;
@end

