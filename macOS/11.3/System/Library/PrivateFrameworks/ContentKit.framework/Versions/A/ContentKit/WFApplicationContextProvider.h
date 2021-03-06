/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFApplicationContextProvider <NSObject>
@property (assign,nonatomic) char wfIdleTimerDisabled; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@optional
-(long long)userInterfaceStyle;
-(long long)currentApplicationStateForWFApplicationContext:(id)arg1;
-(char)wfIdleTimerDisabled;
-(void)setWfIdleTimerDisabled:(char)arg1;

@required
-(char)shouldReverseLayoutDirection;
-(id)bundleForWFApplicationContext:(id)arg1;
-(id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
-(id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
-(id)keyWindowForWFApplicationContext:(id)arg1;
-(id)applicationForWFApplicationContext:(id)arg1;

@end

