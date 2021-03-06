/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXFObserverManager : NSObject
+(id)defaultManager;
+(id)shared;
-(char)registerApplication:(id)arg1 ;
-(void)unregisterApplication:(id)arg1 ;
-(char)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 element:(id)arg4 application:(id)arg5 queue:(id)arg6 ;
-(char)removeObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 element:(id)arg4 application:(id)arg5 ;
-(char)removeAllObserversForApplication:(id)arg1 ;
@end

