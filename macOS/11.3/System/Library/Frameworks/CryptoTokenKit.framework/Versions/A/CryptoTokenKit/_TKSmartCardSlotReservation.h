/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface _TKSmartCardSlotReservation : NSObject {

	char _exclusive;
	NSNumber* _protocols;

}

@property (retain) NSNumber * protocols;              //@synthesize protocols=_protocols - In the implementation block
@property (assign) char exclusive;                    //@synthesize exclusive=_exclusive - In the implementation block
-(NSNumber *)protocols;
-(void)setExclusive:(char)arg1 ;
-(char)exclusive;
-(void)setProtocols:(NSNumber *)arg1 ;
@end

