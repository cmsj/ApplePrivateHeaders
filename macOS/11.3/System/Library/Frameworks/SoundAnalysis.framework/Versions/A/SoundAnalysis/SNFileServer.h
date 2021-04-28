/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CUFileServer, NSObject, RPCompanionLinkClient, NSString;

@interface SNFileServer : NSObject {

	CUFileServer* _server;
	NSObject*<OS_dispatch_queue> _queue;
	RPCompanionLinkClient* _link;
	NSString* _rootDirectory;

}

@property (nonatomic,retain) CUFileServer * server;                           //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RPCompanionLinkClient * link;                    //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) NSString * rootDirectory;                        //@synthesize rootDirectory=_rootDirectory - In the implementation block
+(id)createDefaultServer;
-(void)setServer:(CUFileServer *)arg1 ;
-(CUFileServer *)server;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setLink:(RPCompanionLinkClient *)arg1 ;
-(RPCompanionLinkClient *)link;
-(NSString *)rootDirectory;
-(id)initWithRootDirectory:(id)arg1 ;
-(void)setRootDirectory:(NSString *)arg1 ;
@end
