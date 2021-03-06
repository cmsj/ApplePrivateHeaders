/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SkyLight.framework/Versions/A/SkyLight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface SLSessionOwner : NSObject {

	unsigned _port;
	NSNumber* _auditSessionID;
	NSNumber* _sessionID;

}

@property (assign,nonatomic) unsigned port;                            //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSNumber * auditSessionID;                //@synthesize auditSessionID=_auditSessionID - In the implementation block
@property (nonatomic,retain) NSNumber * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
+(id)sessionOwnerWithPort:(unsigned)arg1 auditSessionID:(int)arg2 cgSessionID:(unsigned)arg3 ;
+(id)sessionOwnerWithXPCSerialization:(id)arg1 ;
+(id)sessionOwnerBySettingLoginwindowConnection:(unsigned)arg1 ;
+(id)sessionOwnerForNewSessionWithAuditSessionID:(id)arg1 launchData:(id)arg2 ;
+(id)sessionOwnerForNewSessionWithAuditSessionID:(id)arg1 ;
-(void)dealloc;
-(char)isValid;
-(unsigned)port;
-(void)setPort:(unsigned)arg1 ;
-(NSNumber *)auditSessionID;
-(NSNumber *)sessionID;
-(id)initWithPort:(unsigned)arg1 auditSessionID:(int)arg2 cgSessionID:(unsigned)arg3 ;
-(id)initWithXPCSerialization:(id)arg1 ;
-(id)createXPCSerializationAndInvalidate;
-(void)setAuditSessionID:(NSNumber *)arg1 ;
-(void)setSessionID:(NSNumber *)arg1 ;
@end

