/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSAutoFillHeuristicController : NSObject
+(id)sharedInstance;
-(void)showAutoFillIfNecessaryFor:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)_isStrictlyAnAutofillableTextField:(id)arg1 ;
-(char)_isStrictlyAnAutofillableSecureTextField:(id)arg1 ;
-(char)_isView:(id)arg1 positionedLeadingOrAbove:(id)arg2 ;
-(void)_setStringValue:(id)arg1 andPostNotificationFor:(id)arg2 ;
@end
