/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
@class NSXPCConnection, NSString;

@interface SUManualProductAdopter : NSObject {

	NSXPCConnection* _connection;
	NSString* _archivePath;
	NSString* _displayName;
	NSString* _displayVersion;
	AuthorizationOpaqueRefRef _authRef;
	char _allowDevSigned;
	char _didFail;
	char _shouldStashCredentials;

}

@property (copy) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * displayVersion;              //@synthesize displayVersion=_displayVersion - In the implementation block
@property (assign) char allowDevSigned;                  //@synthesize allowDevSigned=_allowDevSigned - In the implementation block
+(char)restartNow;
-(char)allowDevSigned;
-(void)_setProgressPhases:(id)arg1 ;
-(char)_bridgeOSUpdatePrepared;
-(void)dealloc;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayVersion;
-(char)authorize:(AuthorizationOpaqueRefRef)arg1 ;
-(void)setDisplayVersion:(NSString *)arg1 ;
-(id)initWithManualProductArchiveAtPath:(id)arg1 error:(id*)arg2 ;
-(void)setAllowDevSigned:(char)arg1 ;
-(char)adoptReturningError:(id*)arg1 ;
-(char)installAfterLogoutRestartingNow:(char)arg1 ;
-(char)installRestartingNow;
@end
