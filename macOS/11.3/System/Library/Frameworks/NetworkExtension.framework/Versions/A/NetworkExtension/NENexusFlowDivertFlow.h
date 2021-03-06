/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NENexusFlow.h>

@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {

	NSUUID* _clientID;
	NWEndpoint* _internalEndpoint;
	NWParameters* _internalParameters;
	NEFlowRef _flowDivertFlow;

}

@property (retain) NSUUID * clientID;                              //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWEndpoint * internalEndpoint;                  //@synthesize internalEndpoint=_internalEndpoint - In the implementation block
@property (retain) NWParameters * internalParameters;              //@synthesize internalParameters=_internalParameters - In the implementation block
@property (assign) NEFlowRef flowDivertFlow;                       //@synthesize flowDivertFlow=_flowDivertFlow - In the implementation block
-(NEFlowRef)flowDivertFlow;
-(void)setFlowDivertFlow:(NEFlowRef)arg1 ;
-(NWEndpoint *)internalEndpoint;
-(NWParameters *)internalParameters;
-(id)initWithFlowDivertFlow:(NEFlowRef)arg1 ;
-(void)setInternalEndpoint:(NWEndpoint *)arg1 ;
-(void)setInternalParameters:(NWParameters *)arg1 ;
-(void)dealloc;
-(id)endpoint;
-(id)parameters;
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
-(id)clientIdentifier;
@end

