/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/Versions/A/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPSStateRequest : PBRequest <NSCopying> {

	long long _originalLibrarySize;
	NSString* _backupDeviceID;
	NSString* _backupDeviceUDID;
	NSString* _backupDeviceUUID;
	NSString* _iCPLDeviceID;
	NSString* _mPSDeviceID;
	SCD_Struct_MP7 _has;

}

@property (nonatomic,readonly) char hasMPSDeviceID; 
@property (nonatomic,retain) NSString * mPSDeviceID;                     //@synthesize mPSDeviceID=_mPSDeviceID - In the implementation block
@property (nonatomic,readonly) char hasICPLDeviceID; 
@property (nonatomic,retain) NSString * iCPLDeviceID;                    //@synthesize iCPLDeviceID=_iCPLDeviceID - In the implementation block
@property (nonatomic,readonly) char hasBackupDeviceID; 
@property (nonatomic,retain) NSString * backupDeviceID;                  //@synthesize backupDeviceID=_backupDeviceID - In the implementation block
@property (nonatomic,readonly) char hasBackupDeviceUUID; 
@property (nonatomic,retain) NSString * backupDeviceUUID;                //@synthesize backupDeviceUUID=_backupDeviceUUID - In the implementation block
@property (nonatomic,readonly) char hasBackupDeviceUDID; 
@property (nonatomic,retain) NSString * backupDeviceUDID;                //@synthesize backupDeviceUDID=_backupDeviceUDID - In the implementation block
@property (assign,nonatomic) char hasOriginalLibrarySize; 
@property (assign,nonatomic) long long originalLibrarySize;              //@synthesize originalLibrarySize=_originalLibrarySize - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasMPSDeviceID;
-(char)hasICPLDeviceID;
-(char)hasBackupDeviceID;
-(char)hasBackupDeviceUUID;
-(char)hasBackupDeviceUDID;
-(void)setOriginalLibrarySize:(long long)arg1 ;
-(void)setHasOriginalLibrarySize:(char)arg1 ;
-(char)hasOriginalLibrarySize;
-(NSString *)mPSDeviceID;
-(void)setMPSDeviceID:(NSString *)arg1 ;
-(NSString *)iCPLDeviceID;
-(void)setICPLDeviceID:(NSString *)arg1 ;
-(NSString *)backupDeviceID;
-(void)setBackupDeviceID:(NSString *)arg1 ;
-(NSString *)backupDeviceUUID;
-(void)setBackupDeviceUUID:(NSString *)arg1 ;
-(NSString *)backupDeviceUDID;
-(void)setBackupDeviceUDID:(NSString *)arg1 ;
-(long long)originalLibrarySize;
@end

