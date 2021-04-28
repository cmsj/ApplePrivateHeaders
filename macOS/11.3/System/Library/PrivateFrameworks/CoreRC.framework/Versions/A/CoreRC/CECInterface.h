/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreRCInterface.h>

@protocol CECInterfaceDelegate;
@class NSDictionary;

@interface CECInterface : CoreRCInterface {

	char _promiscMode;
	char _hibernating;
	unsigned short _addressMask;
	id<CECInterfaceDelegate> _delegate;
	CECFrame _lastReceivedFrame;

}

@property (nonatomic,readonly) CECFrame lastReceivedFrame;                    //@synthesize lastReceivedFrame=_lastReceivedFrame - In the implementation block
@property (assign,nonatomic) id<CECInterfaceDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned short addressMask;                    //@synthesize addressMask=_addressMask - In the implementation block
@property (nonatomic,readonly) char hasMultipleLogicalAddresses; 
@property (nonatomic,readonly) char promiscMode;                              //@synthesize promiscMode=_promiscMode - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (nonatomic,readonly) char hibernating;                              //@synthesize hibernating=_hibernating - In the implementation block
-(id)init;
-(id<CECInterfaceDelegate>)delegate;
-(void)setDelegate:(id<CECInterfaceDelegate>)arg1 ;
-(NSDictionary *)properties;
-(char)sendMessage:(id)arg1 error:(id*)arg2 ;
-(char)errorIsNack:(id)arg1 ;
-(char)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(char)pingTo:(unsigned char)arg1 acknowledged:(char*)arg2 error:(id*)arg3 ;
-(unsigned short)addressMask;
-(char)promiscMode;
-(void)receivedFrame:(CECFrame)arg1 ;
-(char)setHardwareAddressMask:(unsigned short)arg1 error:(id*)arg2 ;
-(char)setAddressMask:(unsigned short)arg1 error:(id*)arg2 ;
-(char)hasMultipleLogicalAddresses;
-(char)setPromiscMode:(char)arg1 error:(id*)arg2 ;
-(char)sendFrame:(CECFrame)arg1 error:(id*)arg2 ;
-(void)hibernationChanged:(char)arg1 ;
-(void)didChangeProperties;
-(char)allocateCECAddress:(unsigned char*)arg1 forDeviceType:(unsigned char)arg2 error:(id*)arg3 ;
-(char)deallocateCECAddress:(unsigned char)arg1 error:(id*)arg2 ;
-(char)hibernating;
-(CECFrame)lastReceivedFrame;
-(char)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
@end
