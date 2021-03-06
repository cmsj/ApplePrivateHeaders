/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock, NSArray;

@interface MNTimeballSubscriberStore : NSObject {

	NSMutableArray* _subscriptions;
	NSLock* _subscriptionsLock;

}

@property (nonatomic,readonly) NSArray * subscriptions; 
-(id)init;
-(NSArray *)subscriptions;
-(void)subscribe:(id)arg1 ;
-(void)unsubscribe:(id)arg1 ;
-(void)unsubscribeFromDestination:(id)arg1 ;
@end

