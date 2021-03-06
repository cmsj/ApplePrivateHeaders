/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Versions/A/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, NSMutableArray;

@interface PCSCKKSOperation : NSOperation {

	char executing;
	char finished;
	char cancelled;
	NSError* _error;
	NSMutableArray* _successDependencies;

}

@property (retain) NSMutableArray * successDependencies;              //@synthesize successDependencies=_successDependencies - In the implementation block
@property (getter=isExecuting) char executing; 
@property (getter=isFinished) char finished; 
@property (getter=isCancelled) char cancelled; 
@property (retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
+(id)operation:(id)arg1 block:(/*^block*/id)arg2 ;
-(char)checkDependencies;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(char)isCancelled;
-(void)setFinished:(char)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)setCancelled:(char)arg1 ;
-(char)startOperation;
-(void)setExecuting:(char)arg1 ;
-(void)completeOperation;
-(void)addSuccessDependency:(id)arg1 ;
-(NSMutableArray *)successDependencies;
-(void)setSuccessDependencies:(NSMutableArray *)arg1 ;
@end

