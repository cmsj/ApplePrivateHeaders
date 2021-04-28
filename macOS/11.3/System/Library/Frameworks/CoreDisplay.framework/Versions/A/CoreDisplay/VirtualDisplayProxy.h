/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreDisplay.framework/Versions/A/CoreDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDisplay/CoreDisplay-Structs.h>
@class VirtualDisplayListener;

@interface VirtualDisplayProxy : NSObject {

	VirtualDisplayListener* _listener;
	unsigned _proxyRPC_port;
	unsigned _clientHandler_port;
	CGSize _sizeInMillimeters;
	unsigned _maxPixelsWide;
	unsigned _maxPixelsHigh;
	unsigned _displayID;

}

@property (nonatomic,readonly) unsigned displayID;              //@synthesize displayID=_displayID - In the implementation block
-(void)dealloc;
-(unsigned)displayID;
-(id)initWithListener:(id)arg1 options:(id)arg2 clientHandler_port:(unsigned)arg3 proxyRPC_port:(unsigned*)arg4 ;
-(int)applyProxySettings:(id)arg1 ;
-(int)terminateProxy;
@end
