/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/Versions/A/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUARP/CoreUARP-Structs.h>
@interface UARPStats : NSObject {

	unsigned _packetsNoVersionAgreement;
	unsigned _packetsMissed;
	unsigned _packetsDuplicate;
	unsigned _packetsOutOfOrder;

}

@property (readonly) unsigned packetsNoVersionAgreement;              //@synthesize packetsNoVersionAgreement=_packetsNoVersionAgreement - In the implementation block
@property (readonly) unsigned packetsMissed;                          //@synthesize packetsMissed=_packetsMissed - In the implementation block
@property (readonly) unsigned packetsDuplicate;                       //@synthesize packetsDuplicate=_packetsDuplicate - In the implementation block
@property (readonly) unsigned packetsOutOfOrder;                      //@synthesize packetsOutOfOrder=_packetsOutOfOrder - In the implementation block
-(id)initWithStatistics:(UARPStatistics*)arg1 ;
-(unsigned)packetsNoVersionAgreement;
-(unsigned)packetsMissed;
-(unsigned)packetsDuplicate;
-(unsigned)packetsOutOfOrder;
@end

