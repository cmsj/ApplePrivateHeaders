/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterFlow.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWEndpoint, NSString, NSUUID;

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying> {

	long long _generateIdentifierOnce;
	int _socketFamily;
	int _socketType;
	int _socketProtocol;
	NWEndpoint* _remoteEndpoint;
	NSString* _remoteHostname;
	NWEndpoint* _localEndpoint;
	NSUUID* _uuid;
	NSUUID* _euuid;
	unsigned long long _socketID;
	NSUUID* _socketUUID;

}

@property (nonatomic,copy) NSUUID * uuid;                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSUUID * euuid;                   //@synthesize euuid=_euuid - In the implementation block
@property (copy) NWEndpoint * localEndpoint;                 //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (copy) NWEndpoint * remoteEndpoint;                //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (copy) NSString * remoteHostname;                  //@synthesize remoteHostname=_remoteHostname - In the implementation block
@property (assign) int socketFamily;                         //@synthesize socketFamily=_socketFamily - In the implementation block
@property (assign) int socketType;                           //@synthesize socketType=_socketType - In the implementation block
@property (assign) int socketProtocol;                       //@synthesize socketProtocol=_socketProtocol - In the implementation block
@property (assign) unsigned long long socketID;              //@synthesize socketID=_socketID - In the implementation block
@property (readonly) NSUUID * socketUUID;                    //@synthesize socketUUID=_socketUUID - In the implementation block
+(char)writeMessageWithControlSocket:(int)arg1 drop:(char)arg2 socketID:(unsigned long long)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7 statsReportFrequency:(long long)arg8 ;
+(char)supportsSecureCoding;
-(unsigned long long)socketID;
-(char)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5 ;
-(char)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(char)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5 ;
-(id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char)arg6 euuid:(unsigned char)arg7 socketID:(unsigned long long)arg8 ;
-(int)socketProtocol;
-(void)setRemoteHostname:(NSString *)arg1 ;
-(void)setSocketID:(unsigned long long)arg1 ;
-(void)setEuuid:(NSUUID *)arg1 ;
-(void)setSocketFamily:(int)arg1 ;
-(void)setSocketType:(int)arg1 ;
-(void)setSocketProtocol:(int)arg1 ;
-(int)socketFamily;
-(void)writeXPCMessage:(id)arg1 drop:(char)arg2 inboundPassOffset:(unsigned long long)arg3 inboundPeekOffset:(unsigned long long)arg4 outboundPassOffset:(unsigned long long)arg5 outboundPeekOffset:(unsigned long long)arg6 statsReportFrequency:(long long)arg7 ;
-(void)writeCurrentVerdictWithMessage:(id)arg1 controlSocket:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)identifier;
-(int)socketType;
-(id)identifierString;
-(NWEndpoint *)localEndpoint;
-(void)setLocalAddress:(sockaddr*)arg1 ;
-(void)setRemoteAddress:(sockaddr*)arg1 ;
-(NWEndpoint *)remoteEndpoint;
-(void)setRemoteEndpoint:(NWEndpoint *)arg1 ;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(NSUUID *)euuid;
-(NSString *)remoteHostname;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSUUID *)socketUUID;
@end

