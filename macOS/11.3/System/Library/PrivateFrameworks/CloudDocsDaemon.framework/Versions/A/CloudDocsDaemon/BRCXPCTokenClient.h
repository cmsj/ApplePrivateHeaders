/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCXPCClient.h>
#import <libobjc.A.dylib/BRTokenProtocol.h>

@class NSString;

@interface BRCXPCTokenClient : BRCXPCClient <BRTokenProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)currentAccountCopyTokenWithBundleID:(id)arg1 version:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getPrimaryiCloudAccountStatus:(/*^block*/id)arg1 ;
-(oneway void)checkinUbiquityContainers:(id)arg1 forBundleID:(id)arg2 ;
-(void)prepareFileProvidersWithReply:(/*^block*/id)arg1 ;
@end

