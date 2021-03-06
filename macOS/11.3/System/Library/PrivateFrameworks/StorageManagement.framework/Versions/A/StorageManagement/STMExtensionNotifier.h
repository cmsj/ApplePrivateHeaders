/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StorageManagement.framework/Versions/A/StorageManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol STMExtensionNotifierDelegate, OS_dispatch_queue;
@class NSObject;

@interface STMExtensionNotifier : NSObject {

	id<STMExtensionNotifierDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialAccessQueue;
	id _matchingContext;

}

@property (retain) NSObject*<OS_dispatch_queue> serialAccessQueue;              //@synthesize serialAccessQueue=_serialAccessQueue - In the implementation block
@property (retain) id matchingContext;                                          //@synthesize matchingContext=_matchingContext - In the implementation block
@property (__weak) id<STMExtensionNotifierDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<STMExtensionNotifierDelegate>)delegate;
-(void)setDelegate:(id<STMExtensionNotifierDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)handleError:(id)arg1 ;
-(id)matchingContext;
-(void)setMatchingContext:(id)arg1 ;
-(void)beginMatchingExtensions;
-(void)setSerialAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)stopMatchingExtensions;
-(NSObject*<OS_dispatch_queue>)serialAccessQueue;
-(void)handleMatchingExtensions:(id)arg1 ;
-(id)extensionMatchingAtrributes;
-(void)handleMatchingResponse:(id)arg1 error:(id)arg2 ;
@end

