/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
#import <libobjc.A.dylib/PCConnectionManagerDelegate.h>

@class PCConnectionManager, NSString;

@interface KeepAliveManager : NSObject <PCConnectionManagerDelegate> {

	PCConnectionManager* _manager;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _keepAliveId;
	ImsKeepAliveDelegate* _delegate;
	BOOL _enableWakeUpOnWifi;
	BOOL _keepAliveStarted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithIdentifier:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>)arg1 maxInterval:(double)arg2 enableWakeUp:(BOOL)arg3 delegate:(ImsKeepAliveDelegate*)arg4 ;
-(void)startKeepAlive;
-(void)stopKeepAlive;
-(void)growKeepAliveInterval;
-(void)shrinkKeepAliveInterval;
-(void)startWakeUpOnWifi;
-(void)stopWakeUpOnWifi;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
@end
