/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCNetworkReachabilityRequirement <NSObject>
@property (getter=isSatisfied,nonatomic,readonly) char satisfied; 
@property (nonatomic,readonly) long long offlineReason; 
@property (assign,nonatomic,__weak) id<FCNetworkReachabilityRequirementObserving> observer; 
@required
-(void)setObserver:(id)arg1;
-(id<FCNetworkReachabilityRequirementObserving>)observer;
-(long long)offlineReason;
-(char)isSatisfied;

@end

