/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/Versions/A/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class NSXPCConnection;

@interface CarbonComponentScannerXPCClient : NSObject {

	NSXPCConnection* _connection;

}
-(id)init;
-(id)xpcConnection;
-(void)handleConnectionError:(char)arg1 ;
-(AudioComponentVector*)initialScan:(id)arg1 ;
-(void)rescan:(id)arg1 added:(AudioComponentVector*)arg2 removed:(AudioComponentVector*)arg3 ;
@end
