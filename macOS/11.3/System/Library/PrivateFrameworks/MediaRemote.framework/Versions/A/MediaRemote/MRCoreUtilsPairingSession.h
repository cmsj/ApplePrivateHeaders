/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRCryptoPairingSession.h>

@protocol OS_dispatch_queue;
@class MRPasscodeCredentials, NSObject, NSData, NSMutableData, MRDeviceInfo, NSArray, NSMutableDictionary, NSString;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession {

	MRPasscodeCredentials* _credentials;
	PairingSessionPrivateRef _pairingSession;
	SCD_Struct_MR18* _pairingDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	char _hasExchangedMessage;
	unsigned _pairingFlags;
	unsigned long long _state;
	NSData* _inputKey;
	NSMutableData* _inputNonce;
	NSData* _outputKey;
	NSMutableData* _outputNonce;

}

@property (nonatomic,retain) NSData * inputKey;                                             //@synthesize inputKey=_inputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * inputNonce;                                    //@synthesize inputNonce=_inputNonce - In the implementation block
@property (nonatomic,retain) NSData * outputKey;                                            //@synthesize outputKey=_outputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * outputNonce;                                   //@synthesize outputNonce=_outputNonce - In the implementation block
@property (nonatomic,readonly) MRDeviceInfo * pairedPeerDevice; 
@property (nonatomic,readonly) NSArray * pairedPeerDevices; 
@property (nonatomic,readonly) NSMutableDictionary * mediaRemotePairedDevices; 
@property (nonatomic,readonly) NSString * peerIdentifier; 
@property (nonatomic,readonly) unsigned long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) char hasExchangedMessage;                                    //@synthesize hasExchangedMessage=_hasExchangedMessage - In the implementation block
@property (assign,nonatomic) unsigned pairingFlags;                                         //@synthesize pairingFlags=_pairingFlags - In the implementation block
-(void)dealloc;
-(char)isValid;
-(void)open;
-(void)close;
-(unsigned long long)state;
-(id)pairedDevices;
-(NSString *)peerIdentifier;
-(NSData *)outputKey;
-(char)isPaired;
-(void)setPairingFlags:(unsigned)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 device:(id)arg2 ;
-(id)removePeer;
-(id)updatePeer;
-(NSArray *)pairedPeerDevices;
-(NSMutableDictionary *)mediaRemotePairedDevices;
-(id)initializePairingSession:(PairingSessionPrivateRef)arg1 ;
-(char)shouldAutoRetryPairingExchange:(id)arg1 ;
-(id)addPeer;
-(MRDeviceInfo *)pairedPeerDevice;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(char)deleteIdentityWithError:(id*)arg1 ;
-(char)hasExchangedMessage;
-(void)openInState:(unsigned long long)arg1 ;
-(void)setInputKey:(NSData *)arg1 ;
-(void)setInputNonce:(NSMutableData *)arg1 ;
-(void)setOutputKey:(NSData *)arg1 ;
-(void)setOutputNonce:(NSMutableData *)arg1 ;
-(unsigned)pairingFlags;
-(NSData *)inputKey;
-(NSMutableData *)inputNonce;
-(NSMutableData *)outputNonce;
@end

