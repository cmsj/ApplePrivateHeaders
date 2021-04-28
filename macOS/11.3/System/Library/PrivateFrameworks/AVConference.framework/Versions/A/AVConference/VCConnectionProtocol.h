/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSString;


@protocol VCConnectionProtocol <NSObject>
@property (readonly) char isLocalOnWiFi; 
@property (readonly) char isRemoteOnWiFi; 
@property (readonly) char isLocalOnCellular; 
@property (readonly) char isRemoteOnCellular; 
@property (readonly) char isLocalOn5G; 
@property (readonly) char isRemoteOn5G; 
@property (readonly) char isLocalExpensive; 
@property (readonly) char isRemoteExpensive; 
@property (readonly) char isLocalConstrained; 
@property (readonly) char isRemoteConstrained; 
@property (readonly) char isLocalDelegated; 
@property (readonly) char isRemoteDelegated; 
@property (readonly) char isIPv6; 
@property (assign) int connectionMTU; 
@property (readonly) int connectionId; 
@property (readonly) char isRelay; 
@property (readonly) char isVPN; 
@property (readonly) char serverIsDegraded; 
@property (readonly) NSUUID * connectionUUID; 
@property (readonly) int localConnectionType; 
@property (readonly) int remoteConnectionType; 
@property (assign) int localCellTech; 
@property (assign) int remoteCellTech; 
@property (assign) int priority; 
@property (readonly) unsigned type; 
@property (readonly) NSString * localInterfaceTypeString; 
@property (readonly) NSString * remoteInterfaceTypeString; 
@property (assign) unsigned uplinkBitrateCap; 
@property (assign) unsigned downlinkBitrateCap; 
@required
-(unsigned)type;
-(void)setPriority:(int)arg1;
-(int)priority;
-(int)remoteConnectionType;
-(char)serverIsDegraded;
-(NSUUID *)connectionUUID;
-(int)connectionId;
-(char)isRelay;
-(char)isLocalExpensive;
-(char)isRemoteExpensive;
-(char)isIPv6;
-(int)localCellTech;
-(int)remoteCellTech;
-(char)isLocalOnWiFi;
-(char)isRemoteOnWiFi;
-(char)isLocalOnCellular;
-(char)isRemoteOnCellular;
-(char)isSameAsConnection:(id)arg1;
-(char)isOnSameInterfacesWithConnection:(id)arg1;
-(void)getSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1;
-(char)matchesSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1;
-(long long)compare:(id)arg1 isPrimary:(char)arg2 selectionPolicy:(SCD_Struct_VC93*)arg3;
-(char)isLocalOn5G;
-(char)isRemoteOn5G;
-(char)isLocalConstrained;
-(char)isRemoteConstrained;
-(char)isLocalDelegated;
-(char)isRemoteDelegated;
-(int)connectionMTU;
-(void)setConnectionMTU:(int)arg1;
-(char)isVPN;
-(int)localConnectionType;
-(void)setLocalCellTech:(int)arg1;
-(void)setRemoteCellTech:(int)arg1;
-(NSString *)localInterfaceTypeString;
-(NSString *)remoteInterfaceTypeString;
-(unsigned)uplinkBitrateCap;
-(void)setUplinkBitrateCap:(unsigned)arg1;
-(unsigned)downlinkBitrateCap;
-(void)setDownlinkBitrateCap:(unsigned)arg1;

@end
