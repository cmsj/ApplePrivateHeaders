/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAP2UnpairedAccessoryServerPrivate <HAP2AccessoryServerPrivate,HAP2UnpairedAccessoryServer>
@property (nonatomic,readonly) id<HAP2AccessoryServerPairingDriver> pairingDriver; 
@required
-(id<HAP2AccessoryServerPairingDriver>)pairingDriver;
-(void)becomePairedWithAccessoryServer:(id)arg1;
-(void)mergeWithNewlyDiscoveredUnpairedAccessoryServer:(id)arg1;

@end

