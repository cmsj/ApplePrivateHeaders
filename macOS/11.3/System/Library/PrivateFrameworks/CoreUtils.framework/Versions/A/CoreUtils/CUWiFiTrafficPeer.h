/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUWiFiTrafficPeer : NSObject {

	char _active;
	unsigned _trafficFlags;
	NSString* _sessionID;
	SCD_Union_CU15 _peerIP;

}

@property (assign,nonatomic) char active;                                   //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* peerIP;              //@synthesize peerIP=_peerIP - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned trafficFlags;                         //@synthesize trafficFlags=_trafficFlags - In the implementation block
-(char)active;
-(void)setActive:(char)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setTrafficFlags:(unsigned)arg1 ;
-(unsigned)trafficFlags;
-(void)setPeerIP:(/*function pointer*/void*)arg1 ;
-(id)peerMACAddressData;
-(/*function pointer*/void*)peerIP;
@end

