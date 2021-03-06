/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEIKEv2IKESA, NSError, NEIKEv2ChildSAConfiguration, NEIKEv2ChildSAProposal, NSArray, NSData, NSMutableData, NEIKEv2ESPSPI;

@interface NEIKEv2ChildSA : NSObject {

	SCD_Union_NE22* _dhECKey;
	char _shouldSendStateUpdate;
	char _isFirstChild;
	char _isInitiator;
	char _sequencePerTrafficClassSupported;
	unsigned short _incomingDatabaseReqID;
	unsigned short _outgoingDatabaseReqID;
	unsigned _childID;
	NEIKEv2IKESA* _ikeSA;
	unsigned long long _state;
	NSError* _error;
	NEIKEv2ChildSAConfiguration* _configuration;
	NEIKEv2ChildSAProposal* _chosenProposal;
	NSArray* _localTrafficSelectors;
	NSArray* _remoteTrafficSelectors;
	NSData* _localNonce;
	NSData* _remoteNonce;
	NSMutableData* _dhPublicKey;
	NSData* _dhRemotePublicKey;
	OpaqueSecDHContextRef _dhContext;
	unsigned long long _dhPublicKeySize;
	NSMutableData* _incomingEncryptionKey;
	NSMutableData* _incomingIntegrityKey;
	NSMutableData* _outgoingEncryptionKey;
	NSMutableData* _outgoingIntegrityKey;
	NEIKEv2ChildSAProposal* _initiatorRekeyProposal;
	NEIKEv2ChildSAProposal* _initiatorRekeyNonPFSProposal;
	NEIKEv2ChildSAProposal* _responderRekeyProposal;
	NEIKEv2ESPSPI* _rekeyedSPI;
	NEIKEv2ESPSPI* _rekeyedRemoteSPI;

}

@property (__weak) NEIKEv2IKESA * ikeSA;                                               //@synthesize ikeSA=_ikeSA - In the implementation block
@property (assign) unsigned childID;                                                   //@synthesize childID=_childID - In the implementation block
@property (retain) NEIKEv2ChildSAConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (assign) unsigned long long state;                                           //@synthesize state=_state - In the implementation block
@property (retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (assign) char shouldSendStateUpdate;                                         //@synthesize shouldSendStateUpdate=_shouldSendStateUpdate - In the implementation block
@property (assign) unsigned short incomingDatabaseReqID;                               //@synthesize incomingDatabaseReqID=_incomingDatabaseReqID - In the implementation block
@property (assign) unsigned short outgoingDatabaseReqID;                               //@synthesize outgoingDatabaseReqID=_outgoingDatabaseReqID - In the implementation block
@property (assign) char isFirstChild;                                                  //@synthesize isFirstChild=_isFirstChild - In the implementation block
@property (assign) char isInitiator;                                                   //@synthesize isInitiator=_isInitiator - In the implementation block
@property (readonly) char isRekeying; 
@property (retain) NEIKEv2ChildSAProposal * chosenProposal;                            //@synthesize chosenProposal=_chosenProposal - In the implementation block
@property (retain) NSArray * localTrafficSelectors;                                    //@synthesize localTrafficSelectors=_localTrafficSelectors - In the implementation block
@property (retain) NSArray * remoteTrafficSelectors;                                   //@synthesize remoteTrafficSelectors=_remoteTrafficSelectors - In the implementation block
@property (retain) NSArray * initiatorTrafficSelectors; 
@property (retain) NSArray * responderTrafficSelectors; 
@property (retain) NSData * localNonce;                                                //@synthesize localNonce=_localNonce - In the implementation block
@property (retain) NSData * remoteNonce;                                               //@synthesize remoteNonce=_remoteNonce - In the implementation block
@property (retain) NSData * initiatorNonce; 
@property (retain) NSData * responderNonce; 
@property (retain) NSMutableData * dhPublicKey;                                        //@synthesize dhPublicKey=_dhPublicKey - In the implementation block
@property (retain) NSData * dhRemotePublicKey;                                         //@synthesize dhRemotePublicKey=_dhRemotePublicKey - In the implementation block
@property (assign) OpaqueSecDHContextRef dhContext;                                    //@synthesize dhContext=_dhContext - In the implementation block
@property (assign) unsigned long long dhPublicKeySize;                                 //@synthesize dhPublicKeySize=_dhPublicKeySize - In the implementation block
@property (retain) NSMutableData * incomingEncryptionKey;                              //@synthesize incomingEncryptionKey=_incomingEncryptionKey - In the implementation block
@property (retain) NSMutableData * incomingIntegrityKey;                               //@synthesize incomingIntegrityKey=_incomingIntegrityKey - In the implementation block
@property (retain) NSMutableData * outgoingEncryptionKey;                              //@synthesize outgoingEncryptionKey=_outgoingEncryptionKey - In the implementation block
@property (retain) NSMutableData * outgoingIntegrityKey;                               //@synthesize outgoingIntegrityKey=_outgoingIntegrityKey - In the implementation block
@property (retain) NSMutableData * initiatorSendEncryptionKey; 
@property (retain) NSMutableData * initiatorSendIntegrityKey; 
@property (retain) NSMutableData * responderSendEncryptionKey; 
@property (retain) NSMutableData * responderSendIntegrityKey; 
@property (retain) NEIKEv2ChildSAProposal * initiatorRekeyProposal;                    //@synthesize initiatorRekeyProposal=_initiatorRekeyProposal - In the implementation block
@property (retain) NEIKEv2ChildSAProposal * initiatorRekeyNonPFSProposal;              //@synthesize initiatorRekeyNonPFSProposal=_initiatorRekeyNonPFSProposal - In the implementation block
@property (retain) NEIKEv2ChildSAProposal * responderRekeyProposal;                    //@synthesize responderRekeyProposal=_responderRekeyProposal - In the implementation block
@property (retain) NEIKEv2ESPSPI * rekeyedSPI;                                         //@synthesize rekeyedSPI=_rekeyedSPI - In the implementation block
@property (retain) NEIKEv2ESPSPI * rekeyedRemoteSPI;                                   //@synthesize rekeyedRemoteSPI=_rekeyedRemoteSPI - In the implementation block
@property (readonly) NSArray * configuredInitiatorTrafficSelectors; 
@property (readonly) NSArray * configuredResponderTrafficSelectors; 
@property (assign) char sequencePerTrafficClassSupported;                              //@synthesize sequencePerTrafficClassSupported=_sequencePerTrafficClassSupported - In the implementation block
+(unsigned short)nextDatabaseReqID;
-(unsigned)childID;
-(NEIKEv2ChildSAProposal *)chosenProposal;
-(void)setChosenProposal:(NEIKEv2ChildSAProposal *)arg1 ;
-(void)setChildID:(unsigned)arg1 ;
-(void)setShouldSendStateUpdate:(char)arg1 ;
-(void)setIncomingDatabaseReqID:(unsigned short)arg1 ;
-(void)setOutgoingDatabaseReqID:(unsigned short)arg1 ;
-(void)setIsFirstChild:(char)arg1 ;
-(void)setIkeSA:(NEIKEv2IKESA *)arg1 ;
-(void)setLocalTrafficSelectors:(NSArray *)arg1 ;
-(void)setRemoteTrafficSelectors:(NSArray *)arg1 ;
-(void)setLocalNonce:(NSData *)arg1 ;
-(void)setRemoteNonce:(NSData *)arg1 ;
-(void)setDhPublicKey:(NSMutableData *)arg1 ;
-(void)setDhRemotePublicKey:(NSData *)arg1 ;
-(void)setDhPublicKeySize:(unsigned long long)arg1 ;
-(OpaqueSecDHContextRef)dhContext;
-(void)setDhContext:(OpaqueSecDHContextRef)arg1 ;
-(void)setIncomingEncryptionKey:(NSMutableData *)arg1 ;
-(void)setIncomingIntegrityKey:(NSMutableData *)arg1 ;
-(void)setOutgoingEncryptionKey:(NSMutableData *)arg1 ;
-(void)setOutgoingIntegrityKey:(NSMutableData *)arg1 ;
-(NEIKEv2ChildSAProposal *)responderRekeyProposal;
-(NEIKEv2ChildSAProposal *)initiatorRekeyProposal;
-(NSData *)localNonce;
-(NSData *)remoteNonce;
-(NSMutableData *)outgoingEncryptionKey;
-(NSMutableData *)incomingEncryptionKey;
-(NSMutableData *)outgoingIntegrityKey;
-(NSMutableData *)incomingIntegrityKey;
-(NSArray *)localTrafficSelectors;
-(NSArray *)remoteTrafficSelectors;
-(id)initWithConfiguration:(id)arg1 childID:(unsigned)arg2 isFirstChild:(char)arg3 ikeSA:(id)arg4 ;
-(void)resetIKESA:(id)arg1 ;
-(void)sentStateUpdate;
-(char)shouldGenerateNewDHKeys;
-(void)setInitiatorNonce:(NSData *)arg1 ;
-(NSData *)initiatorNonce;
-(void)setResponderNonce:(NSData *)arg1 ;
-(NSData *)responderNonce;
-(ccec_full_ctx*)dhECPKeyForDesc:(int)arg1 ;
-(unsigned char*)dhCurveKeyForDesc:(int)arg1 ;
-(void)setInitiatorSendEncryptionKey:(NSMutableData *)arg1 ;
-(NSMutableData *)initiatorSendEncryptionKey;
-(void)setResponderSendEncryptionKey:(NSMutableData *)arg1 ;
-(NSMutableData *)responderSendEncryptionKey;
-(void)setInitiatorSendIntegrityKey:(NSMutableData *)arg1 ;
-(NSMutableData *)initiatorSendIntegrityKey;
-(void)setResponderSendIntegrityKey:(NSMutableData *)arg1 ;
-(NSMutableData *)responderSendIntegrityKey;
-(char)isRekeying;
-(NSArray *)configuredInitiatorTrafficSelectors;
-(NSArray *)configuredResponderTrafficSelectors;
-(void)setInitiatorTrafficSelectors:(NSArray *)arg1 ;
-(NSArray *)initiatorTrafficSelectors;
-(void)setResponderTrafficSelectors:(NSArray *)arg1 ;
-(NSArray *)responderTrafficSelectors;
-(NEIKEv2IKESA *)ikeSA;
-(unsigned short)incomingDatabaseReqID;
-(unsigned short)outgoingDatabaseReqID;
-(char)shouldSendStateUpdate;
-(char)isFirstChild;
-(NSMutableData *)dhPublicKey;
-(NSData *)dhRemotePublicKey;
-(unsigned long long)dhPublicKeySize;
-(void)setInitiatorRekeyProposal:(NEIKEv2ChildSAProposal *)arg1 ;
-(NEIKEv2ChildSAProposal *)initiatorRekeyNonPFSProposal;
-(void)setInitiatorRekeyNonPFSProposal:(NEIKEv2ChildSAProposal *)arg1 ;
-(void)setResponderRekeyProposal:(NEIKEv2ChildSAProposal *)arg1 ;
-(NEIKEv2ESPSPI *)rekeyedSPI;
-(void)setRekeyedSPI:(NEIKEv2ESPSPI *)arg1 ;
-(NEIKEv2ESPSPI *)rekeyedRemoteSPI;
-(void)setRekeyedRemoteSPI:(NEIKEv2ESPSPI *)arg1 ;
-(char)sequencePerTrafficClassSupported;
-(void)setSequencePerTrafficClassSupported:(char)arg1 ;
-(char)generateLocalDHValues;
-(char)generateLocalNonce;
-(char)generateLocalValues;
-(char)generateAllValues;
-(void)dealloc;
-(id)description;
-(unsigned long long)state;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)reset;
-(char)isInitiator;
-(void)setIsInitiator:(char)arg1 ;
-(NEIKEv2ChildSAConfiguration *)configuration;
-(void)setConfiguration:(NEIKEv2ChildSAConfiguration *)arg1 ;
-(void)setState:(unsigned long long)arg1 error:(id)arg2 ;
@end

