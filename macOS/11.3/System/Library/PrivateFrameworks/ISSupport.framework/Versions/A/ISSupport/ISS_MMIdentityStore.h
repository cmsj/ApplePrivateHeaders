/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ISSupport/ISS_MMCredential.h>

@class NSMutableDictionary, NSString;

@interface ISS_MMIdentityStore : NSObject <ISS_MMCredential> {

	NSMutableDictionary* _credential_info;
	NSString* _app_id;
	NSString* _app_name;
	NSString* _app_prefix;

}
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)name;
-(id)password;
-(id)owner;
-(id)applicationName;
-(void)setApplicationName:(id)arg1 ;
-(void)setApplicationID:(id)arg1 ;
-(void)_setPassword:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(id)applicationID;
-(id)_userAgent;
-(void)_setOwner:(id)arg1 ;
-(id)initWithName:(id)arg1 password:(id)arg2 owner:(id)arg3 applicationID:(id)arg4 ;
-(void)_setApplicationID:(id)arg1 ;
-(id)_applicationPrefix;
-(void)_setApplicationPrefix:(id)arg1 ;
-(void)setManagedName:(id)arg1 ;
-(id)managedName;
-(void)_setDiskHost:(id)arg1 port:(int)arg2 scheme:(id)arg3 ;
-(id)_diskURL;
-(id)_credentialInfo;
@end

