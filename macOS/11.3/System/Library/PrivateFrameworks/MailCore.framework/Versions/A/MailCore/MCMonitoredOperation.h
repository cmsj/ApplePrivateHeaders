/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MCActivityMonitor, NSString;

@interface MCMonitoredOperation : NSOperation {

	MCActivityMonitor* _parentMonitor;
	MCActivityMonitor* _monitor;

}

@property (nonatomic,retain) MCActivityMonitor * parentMonitor;              //@synthesize parentMonitor=_parentMonitor - In the implementation block
@property (nonatomic,retain) MCActivityMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,copy,readonly) NSString * activityString; 
-(void)dealloc;
-(id)init;
-(void)main;
-(MCActivityMonitor *)monitor;
-(void)setMonitor:(MCActivityMonitor *)arg1 ;
-(NSString *)activityString;
-(void)executeOperation;
-(void)setParentMonitor:(MCActivityMonitor *)arg1 ;
-(MCActivityMonitor *)parentMonitor;
@end

