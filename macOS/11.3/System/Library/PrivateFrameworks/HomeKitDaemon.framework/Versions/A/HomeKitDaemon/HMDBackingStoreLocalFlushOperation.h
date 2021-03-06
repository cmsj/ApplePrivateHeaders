/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class HMDBackingStoreLocal;

@interface HMDBackingStoreLocalFlushOperation : NSOperation {

	char _clearCloud;
	HMDBackingStoreLocal* _store;
	/*^block*/id _resultHandler;

}

@property (nonatomic,retain) HMDBackingStoreLocal * store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id resultHandler;                            //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) char clearCloud;                           //@synthesize clearCloud=_clearCloud - In the implementation block
-(HMDBackingStoreLocal *)store;
-(void)main;
-(void)setStore:(HMDBackingStoreLocal *)arg1 ;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(id)initWithStore:(id)arg1 clearCloud:(char)arg2 resultHandler:(/*^block*/id)arg3 ;
-(char)clearCloud;
-(void)setClearCloud:(char)arg1 ;
@end

