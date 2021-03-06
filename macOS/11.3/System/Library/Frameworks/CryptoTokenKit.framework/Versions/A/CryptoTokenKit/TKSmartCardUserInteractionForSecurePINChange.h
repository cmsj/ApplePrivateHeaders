/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKSmartCardUserInteractionForPINOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TKSmartCardSlot, TKSmartCardPINFormat, NSData;

@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation <NSSecureCoding> {

	unsigned long long _PINConfirmation;
	TKSmartCardSlot* _slot;
	TKSmartCardPINFormat* _PINFormat;
	NSData* _APDU;
	long long _currentPINByteOffset;
	long long _newPINByteOffset;

}

@property (__weak) TKSmartCardSlot * slot;                          //@synthesize slot=_slot - In the implementation block
@property (retain) TKSmartCardPINFormat * PINFormat;                //@synthesize PINFormat=_PINFormat - In the implementation block
@property (retain) NSData * APDU;                                   //@synthesize APDU=_APDU - In the implementation block
@property (assign) long long currentPINByteOffset;                  //@synthesize currentPINByteOffset=_currentPINByteOffset - In the implementation block
@property (assign) long long newPINByteOffset;                      //@synthesize newPINByteOffset=_newPINByteOffset - In the implementation block
@property (assign) unsigned long long PINConfirmation;              //@synthesize PINConfirmation=_PINConfirmation - In the implementation block
+(char)supportsSecureCoding;
-(void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 currentPINByteOffset:(long long)arg4 newPINByteOffset:(long long)arg5 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(void)setAPDU:(NSData *)arg1 ;
-(void)setCurrentPINByteOffset:(long long)arg1 ;
-(void)setNewPINByteOffset:(long long)arg1 ;
-(void)setPINConfirmation:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TKSmartCardSlot *)slot;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(NSData *)APDU;
-(TKSmartCardPINFormat *)PINFormat;
-(long long)currentPINByteOffset;
-(long long)newPINByteOffset;
-(unsigned long long)PINConfirmation;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
@end

