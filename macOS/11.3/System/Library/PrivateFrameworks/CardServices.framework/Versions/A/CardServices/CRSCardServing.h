/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/Versions/A/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRSCardServing <CRSServing>
@required
-(char)canSatisfyCardRequest:(id)arg1;
-(unsigned long long)servicePriorityForRequest:(id)arg1;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2;

@end
