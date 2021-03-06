/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, LSApplicationProxy, NSObject;

@interface FCNewsAvailabilityMonitor : NSObject {

	char _NewsIsAvailable;
	NSMutableArray* _blocks;
	LSApplicationProxy* _applicationProxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * blocks;                                    //@synthesize blocks=_blocks - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;                      //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (getter=isNewsAvailable,nonatomic,readonly) char NewsIsAvailable;              //@synthesize NewsIsAvailable=_NewsIsAvailable - In the implementation block
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)blocks;
-(void)_updateAvailability;
-(id)initWithApplicationProxy:(id)arg1 queue:(id)arg2 ;
-(id)initWithProcessVariant:(unsigned long long)arg1 queue:(id)arg2 ;
-(char)_isNewsAvailable;
-(LSApplicationProxy *)applicationProxy;
-(id)initWithProcessVariant:(unsigned long long)arg1 ;
-(char)isNewsAvailable;
-(void)setNewsIsAvailable:(char)arg1 ;
-(void)addNotificationBlock:(/*^block*/id)arg1 ;
-(void)setBlocks:(NSMutableArray *)arg1 ;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
@end

