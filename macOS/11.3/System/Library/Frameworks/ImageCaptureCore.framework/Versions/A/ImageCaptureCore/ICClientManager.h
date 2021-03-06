/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSMutableArray;

@interface ICClientManager : NSObject {

	char _clientAdded;
	NSMutableArray* _clients;
	os_unfair_lock_s _clientsLock;
	id _delegate;

}

@property (nonatomic,retain) NSMutableArray * clients;              //@synthesize clients=_clients - In the implementation block
@property (assign,nonatomic) id delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(id)findClientWithPID:(id)arg1 ;
-(id)copyClientsArray;
-(void)addNotifications:(id)arg1 toClientWithPID:(id)arg2 ;
-(void)remNotifications:(id)arg1 toClientWithPID:(id)arg2 ;
-(void)setClientWithPID:(id)arg1 usingObjectHandle:(id)arg2 ;
-(id)clientConnectionsMonitoringNotification:(id)arg1 ;
-(id)clientConnectionsMonitoringObjectID:(id)arg1 ;
-(id)allClientConnections;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableArray *)clients;
-(void)setClients:(NSMutableArray *)arg1 ;
-(unsigned long long)removeClientWithPID:(id)arg1 ;
-(void)sendMessage:(id)arg1 withConnection:(id)arg2 ;
-(void)setClientWithPID:(id)arg1 usingDevice:(char)arg2 ;
-(int)clientUsingDevice;
-(unsigned long long)currentClientCount;
-(void)sendMessage:(id)arg1 forClientWithPID:(id)arg2 ;
-(void)addClientWithConnection:(id)arg1 ;
@end

