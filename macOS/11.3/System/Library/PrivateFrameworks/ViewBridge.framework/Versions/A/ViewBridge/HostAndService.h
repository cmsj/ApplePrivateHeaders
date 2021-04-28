/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ViewBridge/ViewBridge-Structs.h>
@class ViewHost, ViewService, NSString;

@interface HostAndService : NSObject {

	ViewHost* _viewHost;
	ViewService* _viewService;
	NSString* _remoteViewIdentifier;
	unsigned _keyFocusTheftID;

}

@property (assign) ViewHost * viewHost;                          //@synthesize viewHost=_viewHost - In the implementation block
@property (assign) ViewService * viewService;                    //@synthesize viewService=_viewService - In the implementation block
@property (retain) NSString * remoteViewIdentifier;              //@synthesize remoteViewIdentifier=_remoteViewIdentifier - In the implementation block
@property (readonly) unsigned keyFocusTheftID;                   //@synthesize keyFocusTheftID=_keyFocusTheftID - In the implementation block
+(void)determineKeyFocus:(id)arg1 because:(const char*)arg2 ;
-(char)stoleKeyFocus;
-(void)setRemoteViewIdentifier:(NSString *)arg1 ;
-(ViewHost *)viewHost;
-(char)event:(CGEventRef)arg1 isCloseEnoughTo:(CGEventRef)arg2 ;
-(unsigned)keyFocusTheftID;
-(void)releaseKeyFocus:(const char*)arg1 ;
-(void)stealKeyFocus:(const char*)arg1 wantsAggressiveKeyboardFocusTheftCancellation:(char)arg2 ;
-(char)lostKeyFocus;
-(CGEventRef)eventInProgress:(id)arg1 ;
-(void)setViewHost:(ViewHost *)arg1 ;
-(void)dealloc;
-(id)description;
-(ViewService *)viewService;
-(void)setViewService:(ViewService *)arg1 ;
-(NSString *)remoteViewIdentifier;
@end
