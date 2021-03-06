/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CKDClientProxy, CKDClientContext;

@interface CKDProxySetupOperation : NSOperation {

	char _isFinished;
	char _isExecuting;
	CKDClientProxy* _proxy;
	CKDClientContext* _context;

}

@property (assign,nonatomic,__weak) CKDClientProxy * proxy;                  //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char isExecuting;                               //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) char isFinished;                                //@synthesize isFinished=_isFinished - In the implementation block
+(id)operationWithProxy:(id)arg1 context:(id)arg2 ;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(char)isAsynchronous;
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientProxy *)proxy;
-(void)setIsFinished:(char)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(void)_setIsExecuting:(char)arg1 ;
-(void)_setIsFinished:(char)arg1 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(id)initWithProxy:(id)arg1 context:(id)arg2 ;
-(void)_markFinished;
@end

