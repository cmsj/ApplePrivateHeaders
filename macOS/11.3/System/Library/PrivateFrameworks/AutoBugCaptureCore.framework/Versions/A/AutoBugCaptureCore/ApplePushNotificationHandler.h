/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSData, NSObject, NSString;

@interface ApplePushNotificationHandler : NSObject <APSConnectionDelegate> {

	char _apsEnabled;
	char _apsDevEnvironment;
	APSConnection* _apsConnection;
	NSData* _apsToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                     //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,readonly) NSData * apsToken;                               //@synthesize apsToken=_apsToken - In the implementation block
@property (nonatomic,readonly) char apsEnabled;                                 //@synthesize apsEnabled=_apsEnabled - In the implementation block
@property (nonatomic,readonly) char apsDevEnvironment;                          //@synthesize apsDevEnvironment=_apsDevEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)activate;
+(void)deactivate;
+(unsigned long long)currentEnvironment;
+(char)apnsEnabled;
+(id)apnsTokenString;
+(char)shouldEnableAPNS;
+(id)stringFromData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(char)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(APSConnection *)apsConnection;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(char)apsEnabled;
-(void)_createApsConnection;
-(void)_shutdownApsConnection;
-(char)apsDevEnvironment;
-(void)_parseUserInfo:(id)arg1 apnsIdentifier:(unsigned long long)arg2 ;
-(void)_parseAPSIncomingMessage:(id)arg1 ;
-(NSData *)apsToken;
@end

