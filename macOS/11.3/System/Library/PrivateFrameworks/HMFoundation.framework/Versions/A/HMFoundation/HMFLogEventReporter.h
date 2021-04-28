/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HMFLogEventReporter : NSObject

@property (getter=isEnabled,nonatomic,readonly) char enabled; 
+(id)sharedReporter;
-(char)isEnabled;
-(id)initWithSystemInfo:(id)arg1 ;
-(id)startSessionForServiceName:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(id)adoptVoucher:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(void)submitSingleEventWithName:(id)arg1 payload:(id)arg2 ;
@end
