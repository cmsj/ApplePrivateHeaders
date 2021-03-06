/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@class NSString, IFSessionState, IFInstallElement, NSError, IFPerformanceElement, NSNumber;

@interface IFInstallQueueElement : NSObject {

	NSString* _type;
	double _weight;
	IFSessionState* _sessionState;
	IFInstallElement* _installElement;
	id _clientMessagingDelegate;
	NSError* _result;
	long long _resultStatus;
	IFPerformanceElement* _perf;
	NSNumber* _crashAtProgress;

}
+(char)canRunForPackage:(id)arg1 ;
-(long long)run;
-(void)dealloc;
-(id)init;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)result;
-(void)setResult:(id)arg1 ;
-(timeval)startTime;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(void)stopTimer;
-(void)startTimer;
-(void)setSessionState:(id)arg1 ;
-(double)elapsedTime;
-(id)logDescription;
-(double)estimatedTotalTime;
-(void)setCrashAtProgress:(id)arg1 ;
-(void)setInstallElement:(id)arg1 ;
-(void)setClientMessagingDelegate:(id)arg1 ;
-(double)progressPart;
-(void)setPartialProgress:(double)arg1 ;
-(void)setProgressPart:(double)arg1 ;
-(void)sendClientStatusMessage:(id)arg1 ofType:(id)arg2 ;
-(void)sendClientError:(id)arg1 ;
-(id)performanceInfo;
-(void)collectMemory;
-(id)clientMessagingDelegate;
-(char)runAfterError;
-(id)artificialError;
-(void)_artificialCrashNow;
@end

