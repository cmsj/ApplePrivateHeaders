/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/Versions/A/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PCKeepAliveState : NSObject {

	unsigned char _state;
	unsigned char _subState;

}

@property (assign,nonatomic) unsigned char state;                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned char subState;              //@synthesize subState=_subState - In the implementation block
-(id)initWithKeepAliveState:(unsigned char)arg1 subState:(unsigned char)arg2 ;
-(void)setSubState:(unsigned char)arg1 ;
-(unsigned char)state;
-(void)setState:(unsigned char)arg1 ;
-(unsigned char)subState;
@end

