/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray;

@interface CAWindowServer : NSObject {

	CAWindowServerImpl* _impl;
	char _mirroringEnabled;

}

@property (readonly) NSArray * displays; 
@property (getter=isMirroringEnabled) char mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign) unsigned rendererFlags; 
@property (getter=isSecure) char secure; 
+(id)serverIfRunning;
+(id)server;
+(id)context;
+(id)contextWithOptions:(id)arg1 ;
+(id)serverWithOptions:(id)arg1 ;
+(void)stopServer;
-(unsigned)rendererFlags;
-(void)removeAllDisplays;
-(id)displayWithName:(id)arg1 ;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(id)displayWithUniqueId:(id)arg1 ;
-(void)_detectDisplays;
-(id)secureModeViolations;
-(id)insecureProcessIds;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskNamePortOfContextId:(unsigned)arg1 ;
-(char)isMirroringEnabled;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)_init;
-(NSArray *)displays;
-(void)removeDisplay:(id)arg1 ;
-(void)addDisplay:(id)arg1 ;
-(void)setRendererFlags:(unsigned)arg1 ;
-(char)isSecure;
-(void)setSecure:(char)arg1 ;
-(void)setMirroringEnabled:(char)arg1 ;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
@end

