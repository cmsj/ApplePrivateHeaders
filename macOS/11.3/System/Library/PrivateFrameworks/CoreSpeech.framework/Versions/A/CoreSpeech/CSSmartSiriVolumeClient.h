/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSSmartSiriVolumeServiceDelegate.h>

@protocol CSSmartSiriVolumeClientDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface CSSmartSiriVolumeClient : NSObject <CSSmartSiriVolumeServiceDelegate> {

	id<CSSmartSiriVolumeClientDelegate> _delegate;
	NSXPCConnection* _ssvConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * ssvConnection;                                  //@synthesize ssvConnection=_ssvConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CSSmartSiriVolumeClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<CSSmartSiriVolumeClientDelegate>)delegate;
-(void)setDelegate:(id<CSSmartSiriVolumeClientDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_getRemoteServiceProxyObject;
-(void)_createClientConnection;
-(void)didTTSVolumeChangeForReason:(unsigned long long)arg1 ;
-(NSXPCConnection *)ssvConnection;
-(void)setSsvConnection:(NSXPCConnection *)arg1 ;
-(id)getVolumeForTTSType:(unsigned long long)arg1 withContext:(id)arg2 ;
@end

