/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/Versions/A/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject {

	int _synCount;
	int _ackCount;
	int _residentCount;
	CLSilo* _silo;
	Class _svcClass;

}

@property (nonatomic,readonly) CLSilo * silo;                //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) Class svcClass;               //@synthesize svcClass=_svcClass - In the implementation block
@property (assign,nonatomic) int residentCount;              //@synthesize residentCount=_residentCount - In the implementation block
@property (nonatomic,readonly) int synCount;                 //@synthesize synCount=_synCount - In the implementation block
@property (nonatomic,readonly) int ackCount;                 //@synthesize ackCount=_ackCount - In the implementation block
-(id)initTrackingServiceClass:(Class)arg1 ;
-(void)syn;
-(Class)svcClass;
-(int)residentCount;
-(void)setResidentCount:(int)arg1 ;
-(int)synCount;
-(int)ackCount;
-(void)ack;
-(CLSilo *)silo;
@end

