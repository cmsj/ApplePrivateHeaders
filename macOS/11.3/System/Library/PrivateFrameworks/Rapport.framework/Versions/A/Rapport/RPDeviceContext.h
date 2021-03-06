/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Versions/A/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RPDevice, RPLegacyDeviceDiscovery, RPLegacySession;

@interface RPDeviceContext : NSObject {

	char _reported;
	int _state;
	RPDevice* _device;
	RPLegacyDeviceDiscovery* _discovery;
	RPLegacySession* _session;

}

@property (nonatomic,retain) RPDevice * device;                                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) RPLegacyDeviceDiscovery * discovery;              //@synthesize discovery=_discovery - In the implementation block
@property (assign,nonatomic) char reported;                                    //@synthesize reported=_reported - In the implementation block
@property (nonatomic,retain) RPLegacySession * session;                        //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) int state;                                        //@synthesize state=_state - In the implementation block
-(void)invalidate;
-(int)state;
-(void)setState:(int)arg1 ;
-(RPDevice *)device;
-(RPLegacySession *)session;
-(char)reported;
-(void)setSession:(RPLegacySession *)arg1 ;
-(void)setDevice:(RPDevice *)arg1 ;
-(RPLegacyDeviceDiscovery *)discovery;
-(void)setDiscovery:(RPLegacyDeviceDiscovery *)arg1 ;
-(void)setReported:(char)arg1 ;
-(void)pairVerify;
-(void)systemInfoResponse:(id)arg1 error:(id)arg2 ;
@end

