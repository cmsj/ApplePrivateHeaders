/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/Versions/A/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPClientFeedbackHelper, NSString;

@interface PPConnectionsStore : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPClientFeedbackHelper* _clientFeedbackHelper;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(char)iterRecentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4 error:(id*)arg5 block:(/*^block*/id)arg6 ;
-(char)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id*)arg6 block:(/*^block*/id)arg7 ;
@end
