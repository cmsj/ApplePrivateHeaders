/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSTransactionObserver.h>

@class NSMutableArray, NSString;

@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver> {

	NSMutableArray* _willBeginBlocks;
	NSMutableArray* _didBeginBlocks;
	NSMutableArray* _didFinishWorkBlocks;
	NSMutableArray* _didCompleteBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transactionWillBegin:(id)arg1 ;
-(void)transactionDidBegin:(id)arg1 ;
-(void)transactionDidFinishWork:(id)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(void)addTransactionWillBeginBlock:(/*^block*/id)arg1 ;
-(void)addTransactionDidBeginBlock:(/*^block*/id)arg1 ;
-(void)addTransactionDidFinishWorkBlock:(/*^block*/id)arg1 ;
-(void)addTransactionDidCompleteBlock:(/*^block*/id)arg1 ;
@end

