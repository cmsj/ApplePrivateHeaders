/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNForkJoinResultReportingStrategy <NSObject>
@required
-(id)initWithCapacity:(unsigned long long)arg1;
-(void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id)arg3;
-(void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;

@end

