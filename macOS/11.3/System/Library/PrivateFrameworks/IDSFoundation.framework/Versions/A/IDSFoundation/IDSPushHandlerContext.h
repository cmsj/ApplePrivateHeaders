/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface IDSPushHandlerContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _topics;
	NSSet* _commands;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSSet * topics;                                      //@synthesize topics=_topics - In the implementation block
@property (nonatomic,copy) NSSet * commands;                                    //@synthesize commands=_commands - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(NSSet *)commands;
-(void)setCommands:(NSSet *)arg1 ;
-(void)setTopics:(NSSet *)arg1 ;
-(NSSet *)topics;
-(id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3 ;
@end

