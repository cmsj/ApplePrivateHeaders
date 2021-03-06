/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/Versions/A/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject {

	NSMutableArray* _queue;
	NSMutableSet* _clientTypes;

}

@property (nonatomic,retain) NSMutableArray * queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * clientTypes;              //@synthesize clientTypes=_clientTypes - In the implementation block
-(id)init;
-(unsigned long long)count;
-(NSMutableArray *)queue;
-(void)remove:(id)arg1 ;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(void)add:(id)arg1 ;
-(void)removeAll;
-(void)removeRequestsOfClientType:(unsigned char)arg1 ;
-(char)isAdvertisingForClientType:(unsigned char)arg1 ;
-(id)allRequests;
-(NSMutableSet *)clientTypes;
-(void)setClientTypes:(NSMutableSet *)arg1 ;
@end

