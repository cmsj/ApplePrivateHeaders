/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDApplicationID, CKContainerID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying> {

	char _useZoneWidePCS;
	char _bypassPCSEncryption;
	char _forceEnableReadOnlyManatee;
	char _wantsSiloedContext;
	CKDApplicationID* _applicationID;
	CKContainerID* _containerID;
	NSString* _applicationContainerPath;
	NSString* _personaID;
	NSString* _containerEncryptionServiceName;
	unsigned long long _mmcsEncryptionSupport;

}

@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;               //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,readonly) CKDApplicationID * applicationID;                     //@synthesize applicationID=_applicationID - In the implementation block
@property (nonatomic,readonly) CKContainerID * containerID;                          //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * applicationContainerPath;                  //@synthesize applicationContainerPath=_applicationContainerPath - In the implementation block
@property (nonatomic,readonly) NSString * personaID;                                 //@synthesize personaID=_personaID - In the implementation block
@property (assign,nonatomic) char useZoneWidePCS;                                    //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (assign,nonatomic) char bypassPCSEncryption;                               //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) char forceEnableReadOnlyManatee;                        //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (nonatomic,retain) NSString * containerEncryptionServiceName;              //@synthesize containerEncryptionServiceName=_containerEncryptionServiceName - In the implementation block
@property (assign,nonatomic) char wantsSiloedContext;                                //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKContainerID *)containerID;
-(void)setUseZoneWidePCS:(char)arg1 ;
-(id)CKPropertiesDescription;
-(char)wantsSiloedContext;
-(char)useZoneWidePCS;
-(unsigned long long)mmcsEncryptionSupport;
-(NSString *)containerEncryptionServiceName;
-(char)bypassPCSEncryption;
-(char)forceEnableReadOnlyManatee;
-(void)setWantsSiloedContext:(char)arg1 ;
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(void)setContainerEncryptionServiceName:(NSString *)arg1 ;
-(void)setBypassPCSEncryption:(char)arg1 ;
-(void)setForceEnableReadOnlyManatee:(char)arg1 ;
-(CKDApplicationID *)applicationID;
-(NSString *)personaID;
-(id)initWithApplicationID:(id)arg1 containerID:(id)arg2 personaID:(id)arg3 ;
-(NSString *)applicationContainerPath;
-(id)initWithApplicationID:(id)arg1 applicationContainerPath:(id)arg2 containerID:(id)arg3 personaID:(id)arg4 ;
-(id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2 personaID:(id)arg3 ;
@end

