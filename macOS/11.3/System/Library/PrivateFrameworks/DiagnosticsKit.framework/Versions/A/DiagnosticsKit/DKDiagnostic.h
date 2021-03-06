/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/Versions/A/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class DKMutableDiagnosticResult;


@protocol DKDiagnostic <NSObject>
@property (nonatomic,retain) DKMutableDiagnosticResult * result; 
@property (assign,getter=isFinished,nonatomic) char finished; 
@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@optional
-(void)cancel;
-(void)teardown;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2;

@required
-(DKMutableDiagnosticResult *)result;
-(void)setResult:(id)arg1;
-(void)start;
-(char)isCancelled;
-(void)setFinished:(char)arg1;
-(char)isFinished;

@end

