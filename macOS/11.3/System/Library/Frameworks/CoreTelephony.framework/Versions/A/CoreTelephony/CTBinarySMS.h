/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Versions/A/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, CTXPCServiceSubscriptionContext;

@interface CTBinarySMS : NSObject {

	int _portAddressingScheme;
	int _srcPort;
	int _dstPort;
	NSData* _payload;
	NSString* _destinationAddress;
	NSString* _smscAddress;
	CTXPCServiceSubscriptionContext* _context;

}

@property (assign,nonatomic) int portAddressingScheme;                             //@synthesize portAddressingScheme=_portAddressingScheme - In the implementation block
@property (assign,nonatomic) int srcPort;                                          //@synthesize srcPort=_srcPort - In the implementation block
@property (assign,nonatomic) int dstPort;                                          //@synthesize dstPort=_dstPort - In the implementation block
@property (nonatomic,copy) NSData * payload;                                       //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * destinationAddress;                          //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,copy) NSString * smscAddress;                                 //@synthesize smscAddress=_smscAddress - In the implementation block
@property (nonatomic,copy) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(char)isValid;
-(CTXPCServiceSubscriptionContext *)context;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(NSString *)destinationAddress;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(int)srcPort;
-(int)dstPort;
-(int)portAddressingScheme;
-(NSString *)smscAddress;
-(void)setPortAddressingScheme:(int)arg1 ;
-(void)setSrcPort:(int)arg1 ;
-(void)setDstPort:(int)arg1 ;
-(void)setSmscAddress:(NSString *)arg1 ;
@end

