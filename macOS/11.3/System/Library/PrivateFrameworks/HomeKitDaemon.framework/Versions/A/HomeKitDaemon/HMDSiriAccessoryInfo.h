/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HMDSiriAccessoryInfo : NSObject {

	char _supportsDragonSiri;
	id _targetsAccessory;

}

@property (assign,nonatomic,__weak) id targetsAccessory;              //@synthesize targetsAccessory=_targetsAccessory - In the implementation block
@property (assign,nonatomic) char supportsDragonSiri;                 //@synthesize supportsDragonSiri=_supportsDragonSiri - In the implementation block
+(id)infoWithTargetableAccessory:(id)arg1 ;
-(void)setTargetsAccessory:(id)arg1 ;
-(id)targetsAccessory;
-(char)supportsDragonSiri;
-(char)isActiveAndSupportsDragonSiri;
-(void)setSupportsDragonSiri:(char)arg1 ;
@end

