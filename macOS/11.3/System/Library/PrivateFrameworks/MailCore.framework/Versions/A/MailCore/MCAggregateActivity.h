/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailCore/MCActivity.h>

@class NSMutableSet;

@interface MCAggregateActivity : MCActivity {

	NSMutableSet* _childActivities;

}

@property (nonatomic,readonly) NSMutableSet * childActivities;              //@synthesize childActivities=_childActivities - In the implementation block
@property (nonatomic,readonly) unsigned long long childCount; 
-(void)dealloc;
-(id)init;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)childCount;
-(void)addChildActivity:(id)arg1 withProgressUnitCount:(long long)arg2 ;
-(void)childActivityFinished:(id)arg1 ;
-(NSMutableSet *)childActivities;
@end
