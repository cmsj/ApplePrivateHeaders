/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Bootability.framework/Versions/A/Bootability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface BYManager : NSObject {

	NSString* _username;
	NSString* _password;
	NSData* _localAuthenticationContext;

}

@property (retain) NSString * username;                                   //@synthesize username=_username - In the implementation block
@property (retain) NSString * password;                                   //@synthesize password=_password - In the implementation block
@property (retain) NSData * localAuthenticationContext;                   //@synthesize localAuthenticationContext=_localAuthenticationContext - In the implementation block
@property (readonly) NSString * firstSystemVolumeMountPoint; 
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)_authenticationContext;
-(NSData *)localAuthenticationContext;
-(void)setLocalAuthenticationContext:(NSData *)arg1 ;
-(NSString *)firstSystemVolumeMountPoint;
-(char)makeVolumeBootable:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(char)prepareVolumeForMediumSecuritySoftwareUpdate:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(char)verifyManifest:(id)arg1 personalized:(char)arg2 restoreBundle:(id)arg3 error:(id*)arg4 ;
@end

