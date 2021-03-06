/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libIASUnifiedProgress.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IASUnifiedProgressConnectProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCConnection, NSString;

@interface IASUnifiedProgressManager : NSObject <IASUnifiedProgressConnectProtocol, NSXPCListenerDelegate> {

	NSXPCConnection* _progressAppConnection;

}

@property (retain) NSXPCConnection * progressAppConnection;              //@synthesize progressAppConnection=_progressAppConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(float)currentProgress;
-(void)clear;
-(id)_progressApp;
-(void)addPhaseNamed:(id)arg1 withProgress:(double)arg2 exitDelay:(int)arg3 ;
-(char)_isModernOS;
-(id)_progressAppProxy;
-(void)addPhaseNamed:(id)arg1 withProgress:(double)arg2 ;
-(char)currentlyHasProgressInfo;
-(char)currentlyShowingUI;
-(NSXPCConnection *)progressAppConnection;
-(void)setProgressAppConnection:(NSXPCConnection *)arg1 ;
@end

