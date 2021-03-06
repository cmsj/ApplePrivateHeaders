/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleLOM.framework/Versions/A/AppleLOM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class LOMDeviceServer, NSObject, NSString;

@interface LOMDeviceConnection : NSObject {

	LOMDeviceServer* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _serviceName;

}

@property (assign,nonatomic,__weak) LOMDeviceServer * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (readonly) NSString * serviceName;                                 //@synthesize serviceName=_serviceName - In the implementation block
-(id)description;
-(LOMDeviceServer *)delegate;
-(void)setDelegate:(LOMDeviceServer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(id)initWithServiceName:(id)arg1 ;
-(char)activate;
-(NSString *)serviceName;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)handleRequest:(id)arg1 ;
@end

