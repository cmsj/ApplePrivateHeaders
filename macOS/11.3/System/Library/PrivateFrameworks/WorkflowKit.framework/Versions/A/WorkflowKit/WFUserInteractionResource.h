/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@interface WFUserInteractionResource : WFResource <WFApplicationStateObserver>
+(char)isSingleton;
-(void)dealloc;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
@end

