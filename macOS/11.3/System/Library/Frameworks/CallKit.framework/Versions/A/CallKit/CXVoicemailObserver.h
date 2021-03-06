/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXVoicemailObserverDataSourceDelegate.h>

@protocol CXVoicemailObserverDelegate, OS_dispatch_queue, CXVoicemailObserverDataSource;
@class NSObject, NSArray, NSString;

@interface CXVoicemailObserver : NSObject <CXVoicemailObserverDataSourceDelegate> {

	id<CXVoicemailObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _queue;
	id<CXVoicemailObserverDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<CXVoicemailObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<CXVoicemailObserverDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSArray * voicemails; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<CXVoicemailObserverDelegate>)delegate;
-(void)setDelegate:(id<CXVoicemailObserverDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CXVoicemailObserverDataSource>)dataSource;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(void)dataSourceVoicemailsChanged:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 queue:(id)arg2 ;
-(NSArray *)voicemails;
@end

