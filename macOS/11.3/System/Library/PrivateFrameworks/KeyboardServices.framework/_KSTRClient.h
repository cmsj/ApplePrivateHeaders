/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_KSTextReplacementServiceProtocol.h>

@class _KSTextReplacementServer, NSString;

@interface _KSTRClient : NSObject <_KSTextReplacementServiceProtocol> {

	_KSTextReplacementServer* _owner;
	char _hasReadAccess;
	long long _generation;

}

@property (assign,nonatomic) long long generation;                  //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) char hasReadAccess;                  //@synthesize hasReadAccess=_hasReadAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)generation;
-(void)cancel;
-(id)initWithOwner:(id)arg1 ;
-(void)removeAllEntries;
-(void)setGeneration:(long long)arg1 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)requestSyncWithReply:(/*^block*/id)arg1 ;
-(void)cancelPendingUpdatesWithReply:(/*^block*/id)arg1 ;
-(void)queryTextReplacementEntriesWithReply:(/*^block*/id)arg1 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)hasReadAccess;
-(id)initWithOwner:(id)arg1 forConnection:(id)arg2 ;
@end

