/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOUSBHost.framework/Versions/A/IOUSBHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOUSBHost/IOUSBHost-Structs.h>
@class IOUSBHostControllerInterface;

@interface IOUSBHostCIPortStateMachine : NSObject {

	char _powered;
	char _connected;
	char _overcurrent;
	int _portState;
	unsigned _portStatus;
	int _linkState;
	int _speed;
	unsigned long long _portNumber;
	IOUSBHostControllerInterface* _controllerInterface;

}

@property (assign,nonatomic) unsigned long long portNumber;                                   //@synthesize portNumber=_portNumber - In the implementation block
@property (assign,nonatomic) int portState;                                                   //@synthesize portState=_portState - In the implementation block
@property (assign,nonatomic) unsigned portStatus;                                             //@synthesize portStatus=_portStatus - In the implementation block
@property (nonatomic,retain) IOUSBHostControllerInterface * controllerInterface;              //@synthesize controllerInterface=_controllerInterface - In the implementation block
@property (assign,nonatomic) char powered;                                                    //@synthesize powered=_powered - In the implementation block
@property (assign,nonatomic) char connected;                                                  //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) char overcurrent;                                                //@synthesize overcurrent=_overcurrent - In the implementation block
@property (nonatomic,readonly) int linkState;                                                 //@synthesize linkState=_linkState - In the implementation block
@property (nonatomic,readonly) int speed;                                                     //@synthesize speed=_speed - In the implementation block
-(int)speed;
-(char)connected;
-(void)setConnected:(char)arg1 ;
-(void)setPowered:(char)arg1 ;
-(void)setPortNumber:(unsigned long long)arg1 ;
-(unsigned long long)portNumber;
-(void)setPortState:(int)arg1 ;
-(void)setControllerInterface:(IOUSBHostControllerInterface *)arg1 ;
-(int)portState;
-(unsigned)portStatus;
-(void)setPortStatus:(unsigned)arg1 ;
-(char)processCommand:(const IOUSBHostCIMessage*)arg1 readonly:(char)arg2 commandResult:(int)arg3 error:(id*)arg4 ;
-(IOUSBHostControllerInterface *)controllerInterface;
-(char)powered;
-(char)updateLinkState:(int)arg1 speed:(int)arg2 inhibitLinkStateChange:(char)arg3 error:(id*)arg4 ;
-(char)overcurrent;
-(id)initWithInterface:(id)arg1 portNumber:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)inspectCommand:(const IOUSBHostCIMessage*)arg1 error:(id*)arg2 ;
-(char)respondToCommand:(const IOUSBHostCIMessage*)arg1 status:(int)arg2 error:(id*)arg3 ;
-(void)setOvercurrent:(char)arg1 ;
-(int)linkState;
@end

