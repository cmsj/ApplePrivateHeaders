/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCEStartEvent, NSString;

@interface NFAWDHCEStartEvent : NSObject <NFAWDEventProtocol> {

	unsigned _messageSize;
	unsigned _messageType;
	unsigned _type;
	AWDNFCHCEStartEvent* _metric;

}

@property (assign,nonatomic) unsigned messageSize;                      //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) unsigned messageType;                      //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) AWDNFCHCEStartEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(id)init;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(AWDNFCHCEStartEvent *)metric;
-(void)setMetric:(AWDNFCHCEStartEvent *)arg1 ;
-(void)setMessageType:(unsigned)arg1 ;
-(unsigned)messageType;
-(unsigned)messageSize;
-(void)setMessageSize:(unsigned)arg1 ;
@end
