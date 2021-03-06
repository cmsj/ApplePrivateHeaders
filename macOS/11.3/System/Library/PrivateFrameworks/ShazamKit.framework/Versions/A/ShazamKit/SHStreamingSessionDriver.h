/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/Versions/A/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SHSessionDriver.h>

@protocol SHSessionDriverDelegate;
@class SHSignature, SHSignatureBuffer, SHSignatureMetrics, NSString;

@interface SHStreamingSessionDriver : NSObject <SHSessionDriver> {

	char _waiting;
	id<SHSessionDriverDelegate> _sessionDelegate;
	double _currentRequiredLength;
	double _maximumSignatureLength;
	double _minimumSignatureLength;
	SHSignatureBuffer* _signatureBuffer;
	SHSignatureMetrics* _metrics;

}

@property (assign) char waiting;                                             //@synthesize waiting=_waiting - In the implementation block
@property (assign) double currentRequiredLength;                             //@synthesize currentRequiredLength=_currentRequiredLength - In the implementation block
@property (assign) double maximumSignatureLength;                            //@synthesize maximumSignatureLength=_maximumSignatureLength - In the implementation block
@property (assign) double minimumSignatureLength;                            //@synthesize minimumSignatureLength=_minimumSignatureLength - In the implementation block
@property (retain) SHSignatureBuffer * signatureBuffer;                      //@synthesize signatureBuffer=_signatureBuffer - In the implementation block
@property (retain) SHSignatureMetrics * metrics;                             //@synthesize metrics=_metrics - In the implementation block
@property (__weak) id<SHSessionDriverDelegate> sessionDelegate;              //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (readonly) SHSignature * matchingSignature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SHSignatureMetrics *)metrics;
-(void)setMetrics:(SHSignatureMetrics *)arg1 ;
-(void)setSessionDelegate:(id<SHSessionDriverDelegate>)arg1 ;
-(id<SHSessionDriverDelegate>)sessionDelegate;
-(void)match;
-(double)minimumSignatureLength;
-(double)maximumSignatureLength;
-(SHSignatureBuffer *)signatureBuffer;
-(void)setWaiting:(char)arg1 ;
-(char)waiting;
-(SHSignature *)matchingSignature;
-(double)currentRequiredLength;
-(void)setCurrentRequiredLength:(double)arg1 ;
-(char)isCurrentSignature:(id)arg1 ;
-(double)clampTimeInterval:(double)arg1 ;
-(void)startResetTimerForIntermission:(double)arg1 requiredSignatureLength:(double)arg2 ;
-(void)matcher:(id)arg1 didFindMatch:(id)arg2 ;
-(void)matcher:(id)arg1 didNotFindMatch:(id)arg2 ;
-(void)matcher:(id)arg1 didFail:(id)arg2 ;
-(void)matcher:(id)arg1 didFinishWithOutcome:(long long)arg2 ;
-(void)flow:(id)arg1 time:(id)arg2 ;
-(id)initWithMinimumSignatureLength:(double)arg1 maximumSignatureLength:(double)arg2 ;
-(void)setMaximumSignatureLength:(double)arg1 ;
-(void)setMinimumSignatureLength:(double)arg1 ;
-(void)setSignatureBuffer:(SHSignatureBuffer *)arg1 ;
@end

