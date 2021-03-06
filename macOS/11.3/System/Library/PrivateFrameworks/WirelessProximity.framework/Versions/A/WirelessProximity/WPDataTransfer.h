/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/Versions/A/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSUUID;

@interface WPDataTransfer : NSObject {

	char _receivedFirstPacket;
	unsigned short _currentDataSize;
	NSMutableData* _currentReceivedData;
	NSUUID* _peerUUID;

}

@property (nonatomic,retain) NSMutableData * currentReceivedData;              //@synthesize currentReceivedData=_currentReceivedData - In the implementation block
@property (assign,nonatomic) unsigned short currentDataSize;                   //@synthesize currentDataSize=_currentDataSize - In the implementation block
@property (assign,nonatomic) char receivedFirstPacket;                         //@synthesize receivedFirstPacket=_receivedFirstPacket - In the implementation block
@property (nonatomic,retain) NSUUID * peerUUID;                                //@synthesize peerUUID=_peerUUID - In the implementation block
-(void)setCurrentReceivedData:(NSMutableData *)arg1 ;
-(void)setReceivedFirstPacket:(char)arg1 ;
-(char)receivedFirstPacket;
-(void)setCurrentDataSize:(unsigned short)arg1 ;
-(unsigned short)currentDataSize;
-(NSUUID *)peerUUID;
-(NSMutableData *)currentReceivedData;
-(id)initDataTransferForPeer:(id)arg1 ;
-(void)resetTransfer;
-(char)addNewData:(id)arg1 ;
-(void)setPeerUUID:(NSUUID *)arg1 ;
@end

