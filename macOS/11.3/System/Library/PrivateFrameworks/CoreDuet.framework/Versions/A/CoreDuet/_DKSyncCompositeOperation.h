/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncOperation.h>

@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation {

	_DKSyncCompositeOperation* _parent;
	Ac _isReadyToStart;
	NSHashTable* _children;
	os_unfair_lock_s _lock;
	NSMutableArray* _errors;

}

@property (readonly) NSMutableArray * errors;              //@synthesize errors=_errors - In the implementation block
-(void)dealloc;
-(id)init;
-(void)cancel;
-(char)isReady;
-(char)isAsynchronous;
-(NSMutableArray *)errors;
-(id)initWithParent:(id)arg1 ;
-(void)endOperation;
-(void)childOperationWasAdded:(id)arg1 ;
-(void)setReadyToStart:(char)arg1 ;
-(void)_shutdownOperation;
-(void)childOperation:(id)arg1 didEndWithErrors:(id)arg2 ;
@end
